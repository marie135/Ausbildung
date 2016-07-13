#include <iostream>
#include <string>
#include <vector>

int main() {
	bool nochjemand{ true };
	std::cout << "Wer kommt alles?"<<std::endl;
	std::string Name;
	std::vector<std::string> gaesteliste;
	std::cin >> Name;
	while (nochjemand)
	{
		gaesteliste.push_back(Name);
		std::cout << "Noch jemand? Name eingeben, sonst exit." << std::endl;
		std::cin >> Name;
		if (Name == "exit")
		{ 
			nochjemand = false;
			for (std::string gast : gaesteliste)
			{
				std::cout << gast << ", ";
			}
			std::cout << "kommen zu der Party.";
		}
		
	}

	system("PAUSE");
}