#include "app.h"
#include <format>
#include <iomanip>
#include<sstream>

namespace vsite::oop::v1
{
/*
* function implementations
*/

	std::string to_hex(int i) {
		return std::format("{:X}", i);
	}

	std::string to_exp(double e) {
		return std::format("{:.2e}",e);
	}

	
	void mult_table(int n, std::ostream& os) {
		if (n <= 0 || n > 20) {
			os << "";

		}
		else {
			os << "0";
			for (auto i = 1; i <= n; ++i) {
				os << std::format("{:4}", i);
			}
			os << "\n";

			for (auto i = 1; i <= n; ++i) {
				os << i;
				for (auto j = 1; j <= n; ++j) {
					os << std::format("{:4}", i * j);
				}
				os << "\n";
			}
		}
	}

} // namespace