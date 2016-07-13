#include <iostream>
#include <string>
#include <vector>

int main() {
	char Eingabe[256];
	std::cin >> Eingabe;
	
	int helferintlinks = 0;
	int helferintrechts = 0;
	bool operatorflag = false;
	char operatorzeichen;

	for (auto zeichen : Eingabe)
	{
		if (zeichen == '\0') break;


		switch (zeichen) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		{
			helferint = helferint * 10;
			helferint = helferint + (zeichen-48);
			std::cout << "Ziffer" << std::endl;
		}
		break;
		case '+':
		case '-':
		case '*':
		case '/':
		{
			std::cout << "Operator" << std::endl;
		}
		break;
		case ' ': break;

		default: 
		{
			std::cout << "Fehler" << std::endl;
		}
		break;

		}

	}
	std::cout << helferint<< std::endl;
	system("PAUSE");
}