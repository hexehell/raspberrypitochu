#include <iostream>


int main()
{
	int nMinutos=0;

	std::cin >> nMinutos;

	
	std::cout <<"Horas: " << nMinutos/60 << " Minutos: " <<60*( nMinutos/60.0 - nMinutos/60); 
	std::cout <<"\n";
return 0;
}
