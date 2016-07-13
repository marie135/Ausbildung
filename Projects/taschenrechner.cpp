#include <iostream>



int main() {
	bool nochmal{ true };
	while (nochmal)
	{
		std::cout << "Hallo, was willst du? +;-;*;/;q" << std::endl;
		char a{}; //{} bezeichnet eine leere Initialisierungsliste
		std::cin >> a;
		switch (a) {
		case '+': {
			std::cout << "Der Benutzer will addieren. Nenne den ersten Summanden." << std::endl;
			double Summand;
			std::cin >> Summand;
			std::cout << "Nenne den zweiten Summanden." << std::endl;
			double Summand2;
			std::cin >> Summand2;
			std::cout << "Das Ergebnis ist " << Summand + Summand2 << ". Nochmal rechnen?(y/n)" << std::endl;
			char vonVorne{};
			std::cin >> vonVorne;
			if (vonVorne == 'n')
			{
				nochmal = false;
			}
			break;
		}
		case  '-': {
			std::cout << "Der Benutzer will subtrahieren. Nenne den Minuenden."<< std::endl;
			double Minuend;
			std::cin >> Minuend;
			std::cout << "Nenne den Subtrahenden.";
			double Subtrahend;
			std::cin >> Subtrahend;
			std::cout << "Das Ergebnis ist " << Minuend - Subtrahend << ". Nochmal rechnen?(y/n)" << std::endl;
			char vonVorne;
			std::cin >> vonVorne;
			if (vonVorne == 'n') 
			{
				nochmal = false;
			}
				
			break;
		}
		case '*': {
			std::cout << "Der Benutzer will multiplizieren. Nenne den ersten Faktor." << std::endl;
			double Faktor;
			std::cin >> Faktor;
			std::cout << "Nenne den zweiten Faktor."<< std::endl;
			double Faktor2;
			std::cin >> Faktor2;
			std::cout << "Das Ergebnis ist " << Faktor * Faktor2 << ". Nochmal rechnen?(y/n)" << std::endl;
			char vonVorne;
			std::cin >> vonVorne;
			if (vonVorne == 'n')
			{
				nochmal = false;
			}
			break;
		}
		case '/': {
			std::cout << "Der Benutzer will dividieren. Nenne den Divedenden." <<std::endl;
			double Dividend;
			std::cin >> Dividend;
			std::cout << "Nenne den Teiler." << std::endl;
			double Teiler;
			std::cin >> Teiler;
			if (Teiler == 0) {
				std::cout << "Error" << std::endl;
			}
			else {
				std::cout << "Das Ergebnis ist " << Dividend / Teiler << ".";
			}
			std::cout << " Nochmal rechnen?(y/n)" << std::endl;
			char vonVorne;
			std::cin >> vonVorne;
			if (vonVorne == 'n')
			{
				nochmal = false;
			}
			
			break;
		}
		case 'q': {
			std::cout << "Der Benutzer will das Programm verlassen. Tippe n zum verlassen, y um zu bleiben."<<std::endl;
			char vonVorne;
			std::cin >> vonVorne;
			if (vonVorne == 'n')
			{
				nochmal = false;
			}
			break;
		}
		}
	}
	//system("PAUSE");

}