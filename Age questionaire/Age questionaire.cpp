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
	std::cout << "Your Age is :"<< age <<std::endl;
if (age < 20) {
	std::cout << "you are teenager";
}
else{
	std::cout << "you are a boomer";
}

}