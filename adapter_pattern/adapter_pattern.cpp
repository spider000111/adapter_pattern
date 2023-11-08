// adapter_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "THParameter.h"
#include "AsureClient.h"
#include <print>

//adapter design pattern is used to change the class function with different name it does not change the functionality
//it just change the interface
int main()
{
	THParameter thermostat;
	printf(thermostat.get_parameter_json().c_str());
	printf("\n");

	AsureClient as_client(thermostat);
	as_client.print_data();

	//now i am trying to get the aws client but we need to data with different formatting
	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
