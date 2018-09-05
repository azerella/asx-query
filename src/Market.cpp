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

