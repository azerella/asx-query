//	**************************
//	Author: Adam A. Zerella
//	Created: 14/10/2017
//	Contact: adam.zerella@gmail.com
//	**************************

#pragma once

#include <ctime>
#include <chrono>
#include <iostream>

namespace adamzerella { namespace QueryASX {
	class Market {
	private: //Members
		const char* ticker;
		time_t epoch; //Epoch time
	private:
		void DebugInfo();
	public:
		Market(const char* ticker);
		time_t getEpochNow() { return this->epoch = std::time(0); };
		~Market();
	};
} }