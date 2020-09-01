#include <iostream>
	int birthyear;
	int currentyear;
	int age;
	int main()
	{
		std::cout << "Enter your birth year:\n";
		std::cin >> birthyear;
		std::cout << "Enter current year:\n";
		std::cin >> currentyear;
		age = currentyear - birthyear;
		std::cout << "Your current age is :" << age << std::endl;
		if (age < 20) {
			std::cout << "You are a teenager";
		}
		else {
			std::cout << "You are a boomer";
		}
		return 0;
	}