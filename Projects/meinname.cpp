#include <iostream>
#include <string>

int main() {
	std::cout << "Wie ist dein Name?" << std::endl;
	std::string meinname;
	std::cin >> meinname;
	std::cout << "Hallo " << meinname << ", wie Alt bist du?" << std::endl;
	int meinalter;
	std::cin >> meinalter;
	std::cout << "Wie groß bist du?" << std::endl;
	double meinegroesse;
	std::cin >> meinegroesse;
	system("pause");
}