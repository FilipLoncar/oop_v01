#include "app.h"
#include <format>

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

} // namespace

