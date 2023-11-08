#pragma once
#include "THParameter.h"
#include <iostream>

class AsureClient
{
	THParameter& read_temp;
public:
	AsureClient(THParameter& r_t):read_temp(r_t){	}

	void print_data() {
		printf("%s this is the data i got from asure \n", read_temp.get_parameter_json().c_str());
	}
};

