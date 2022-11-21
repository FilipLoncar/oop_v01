#include "app.h"
#include <format>
#include <iomanip>
#include<sstream>

namespace vsite::oop::v1
{
/*
* function implementations
*/
	/*void to_hex(int i) {
		std::cout << toupper << std::hex << i;
	}*/
	std::string to_hex(int i) {
		std::string s = std::format("{:x}", i);
		std::transform(s.begin(), s.end(), s.begin(), ::toupper);
		return s;
	}

	std::string to_exp(double e) {
		//std::string s = std::format("{.2}", e);
		//return std::ostream(std::format("{.2}", e));
		return std::format("{:.2e}",e);
	}

	// std::format("{.2e}


	//std::string to_exp(int i) {
	//	//std::string s = std::format("{:exp}",i);
	//	std::string s = std::format()
	//	return s;
	//}
	//std::string to_exp(double i) {

	//	std::string s = 

	//	//std::string d = std::format("{:exp}", i);
	//	//std::string s = std::to_string(d);
	//	//return d;
	//	double conv = exp(i);
	//	std::string s = std::to_string(conv);

	//	return s;

	//}

	//void mult_table(int n, std::ostream& os) {

	//	if (n == 0 || n > 20)
	//		//os << "";
	//		return;

	//	else {

	//		for (int i = 0; i <= n; ++i)
	//			os << i << std::setw(4);
	//				
	//		for (int i = 1; i <= n; ++i) {

	//			os << i << std::endl;

	//			for (int j = 1; j <= n; ++j) {
	//				if(i==1)
	//					os << i * j ;
	//				else
	//				os << std::setw(4) << i * j;
	//			}
	//			

	//		}
	//	}
	//}

	void mult_table(int n, std::stringstream& ss) {
		if (n <= 0 || n > 20) {
			ss << "";
			exit;
		}
		else {
			ss << "0";
			for (auto i = 1; i <= n; ++i) {
				ss << std::format("{:4}", i);
			}
			ss << "\n";

			for (auto i = 1; i <= n; ++i) {
				ss << i;
				for (auto j = 1; j <= n; ++j) {
					ss << std::format("{:4}", i * j);
				}
				ss << "\n";
			}
		}
	}

	//void multi(int n) {
	//	for (int i = 0; i <= n; ++i)
	//		std::cout << i << std::setw(4);

	//	for (int i = 1; i <= n; ++i) {

	//		std::cout << i << std::endl;

	//		for (int j = 1; j <= n; ++j) {
	//			//if (j==1)
	//				//std::cout << i * j;
	//			std::cout << std::setw(4) << i * j;
	//		}
	//}

	/*void multi(int n) {
		for (int i = 0; i <= n; ++i) {
			if (i < n)
				std::cout << i << " x ";
			else
				std::cout << i;
		}
		std::cout << std::endl;
		for (int i = 1; i <= n; ++i) {
			std::cout << i << "y  ";
			for (int j = 1; j <= n; ++j) {
				if (j < n)
					std::cout << i * j << " z ";
				else
					std::cout << i * j;
			}
			std::cout << std::endl;
		}
	}*/

} // namespace

