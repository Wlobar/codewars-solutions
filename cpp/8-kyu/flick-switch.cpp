#include <iostream>
#include <vector>

std::vector<bool> flick_switch(const std::vector<std::string>& arr)
{
	std::vector<bool> result;
	bool current_output{ true };
	for (unsigned int i{}; i < arr.size(); i++) {
		if (arr[i] == "flick") {
			current_output = !current_output;
		}
		result.push_back(current_output);
	}
	return result;
}

int main() {
	std::cout << std::boolalpha;
	std::vector<bool> example = flick_switch({ "flick", "chocolate", "adventure", "flick", "sunshine" });
	for (int i{}; i < example.size(); i++) {
		std::cout << example[i] << ", ";
	}
	return 0;
}