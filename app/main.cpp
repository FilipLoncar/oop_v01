#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int i;
	std::cin >> i;
	vsite::oop::v1::to_hex(i);
}
