#include "app.h"
#include<iomanip>
#include<string>
#include <sstream>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int i;
	std::cin >> i;
	std::cout << vsite::oop::v1::to_hex(i);

	std::cout << "\n";

	std::stringstream ss;
	vsite::oop::v1::mult_table(i,ss);
	std::cout << ss.str();
}
