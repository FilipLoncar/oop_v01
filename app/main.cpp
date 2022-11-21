#include "app.h"
#include<iomanip>
#include<string>

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int i;
	std::cin >> i;
	vsite::oop::v1::to_hex(i);

	//vsite::oop::v1::to_exp(i);

	/*std::stringstream ss;
	vsite::oop::v1::mult_table(i,ss);*/

	//vsite::oop::v1::multi(i);
}
