// ask for the user's name, and then generate a framed greeting

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

	// build the message
	const std::string greeting = "Hello, " + name + "!";

	// build the second and fourth lines
	const std::string spaces(greeting.size(), ' ');
	const std::string secondAndFourth = "* " + spaces + " *";

	// build the first and fifth lines of the output
	const std::string firstAndFifth(secondAndFourth.size(), '*');
	
	// write the greeting
	std::cout << std::endl;
	std::cout << firstAndFifth << std::endl;
	std::cout << secondAndFourth << std::endl;
	std::cout << "* " + greeting + " *" << std::endl;
	std::cout << secondAndFourth << std::endl;
	std::cout << firstAndFifth << std::endl;
	return 0;
}
