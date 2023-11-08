#pragma once
#include <iostream>

class THParameter
{
public:
	std::string get_parameter_json() {
		
		static std::string temp = "{temperature =22, pressure = 44, out_temp = 10}";

		return temp;

	}

};

