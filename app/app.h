#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
/*
* function declarations
*/
	std::string to_hex(int i);

	std::string to_exp(double e);

	void mult_table(int n, std::ostream& os);

}
