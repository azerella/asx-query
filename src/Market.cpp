//	**************************
//	Author: Adam A. Zerella
//	Created: 14/10/2017
//	Contact: adam.zerella@gmail.com
//	**************************

#include "Market.h"

namespace QueryASX = adamzerella::QueryASX;

	QueryASX::Market::Market(const char* ticker) {
		this->ticker = ticker;
		this->DebugInfo();
	}

	QueryASX::Market::~Market() {}

	void QueryASX::Market::DebugInfo() {
		std::cout << "Market Ticker: " << "\t\t" << ticker << std::endl;
		std::cout << "Time: " << "\t\t\t" << this->getEpochNow() << std::endl;
	}

