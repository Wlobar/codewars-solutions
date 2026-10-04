#include <iostream>
#include <string>

std::string neutralisation(const std::string& input1, const std::string& input2) {
	/*
	* 
	* My first attempt - overengineering at it's finest :))
	* 
	* 
	* 
	//Create a container for the neutralised string
	std::string result = "";

	//Create variables for storing corresponding signs of the inputs, converted into numbers
	int currentNum1{};
	int currentNum2{};

	//Create a variable for storing the sum of both currentNums
	int addition{};

	for (unsigned int i{ 0 }; i < input1.size(); i++) {

		//'+' is converted to 2, '-' is converted to 1

		if (input1[i] == '+') {
			currentNum1 = 2;
		}
		else {
			currentNum1 = 1;
		}
		if (input2[i] == '+') {
			currentNum2 = 2;
		}
		else {
			currentNum2 = 1;
		}

		if (input1.size() > 0) {
			addition = currentNum1 + currentNum2;

			//The sum of the currentNums is converted into a sign
			//Such method allows us to avoid multiple nested conditional statements in the function

			if (addition == 2) {
				result.push_back('-');
			}
			else if (addition == 4) {
				result.push_back('+');
			}
			else {
				result.push_back('0');
			}
		}
	}
	*/
	std::string result = "";

	for (unsigned int i{ 0 }; i < input1.size(); i++) {
		if (input1[i] == input2[i]) {
			result.push_back(input1[i]);
		}
		else {
			result.push_back('0');
		}
	}

	return result;

}

int main() {
	std::cout << neutralisation("--++--", "++--++") << '\n';
	std::cout << neutralisation("-+-+", "-++-") << '\n';
	std::cout << neutralisation("", "") << '\n';
	return 0;
}