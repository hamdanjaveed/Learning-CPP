
#include <iostream>
#include <string>

int main() {
	// ask for the person's name
	std::cout << "Please enter your name: ";

	// read the name
	// a variable to hold the user's name
	std::string name;
	// read the name
	std::cin >> name;
	
	// write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}
