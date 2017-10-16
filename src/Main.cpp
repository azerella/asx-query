//	**************************
//	Author: Adam A. Zerella
//	Created: 14/10/2017
//	Contact: adam.zerella@gmail.com
//	**************************

#include <iostream>
#include <regex>
#include <string>

#include "Market.h"
#include "curl\curl.h"

#define exprLeft "^.+<span class=\"pr\">.+?>"
#define exprRight "<.+"

namespace QueryASX = adamzerella::QueryASX;

static size_t WriteCallback(char* contents, size_t size, size_t nmemb, void* userp)
{
	((std::string*)userp)->append((char*)contents, size* nmemb);
	return size* nmemb;
}

static float performQuery() {
	CURL *curl;
	CURLcode res;
	std::string curl_output;
	std::string userTicker;
	const char* googleFinance = "https://finance.google.com/finance?q=ASX:";

	std::cout << std::endl << std::endl << "ASX code to query: ";
	std::getline(std::cin, userTicker);
	if (userTicker.size() != 3) {
		std::cout << "INVALID INPUT!" << std::endl;
		std::cin.clear();
		return -1;
	}

	std::string completeURL = googleFinance + userTicker;

	curl = curl_easy_init();

	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, completeURL.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &curl_output);
		res = curl_easy_perform(curl);

		curl_easy_cleanup(curl);
	}

	curl_global_cleanup();

	//Remove new line from webpage source
	curl_output.erase(std::remove(curl_output.begin(), curl_output.end(), '\n'), curl_output.end());
	//Perform regex trimming
	std::regex trimLeftSide(exprLeft, std::regex_constants::optimize);
	std::regex trimRightSide(exprRight, std::regex_constants::optimize);
	std::string result = std::regex_replace(curl_output, trimLeftSide, "") +
		std::regex_replace(curl_output, trimRightSide, "");
	//Cast to float
	return std::stof(result);
}

int main() {
	QueryASX::Market mkt("ASX");
	std::cout << "CURL_VER: " << "\t\t" << curl_version() << std::endl << std::endl;

	while (1) {
		std::cout << std::endl << "OUTPUT: " << performQuery() << std::endl;
		std::cout << "ELAPSED: " << mkt.getEpochNow() << std::endl;
		std::cout << "DONE" << std::endl;
	}
	return 0;
}