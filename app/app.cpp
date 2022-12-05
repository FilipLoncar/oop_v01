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
		std::string s = std::format("{:x}", i);
		std::transform(s.begin(), s.end(), s.begin(), ::toupper);
		return s;
	}

	std::string to_exp(double e) {
		return std::format("{:.2e}",e);
	}

	
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

} // namespace

