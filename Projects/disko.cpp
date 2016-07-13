#include <iostream>

int main()
{
	std::cout << "Ab wie viel Jahren ist die Disko?" << std::endl;
	int diskoalter;
	std::cin >> diskoalter;
	std::cout << "Wie alt bist du?"<< std::endl;
	int meinalter;
	std::cin >> meinalter;
	if (meinalter >= diskoalter) 
	{
		std::cout << "Du darfst gehen." << std::endl;
	}
	else 
	{
		std::cout << "Du bist zu jung." << std::endl;
	}

}
