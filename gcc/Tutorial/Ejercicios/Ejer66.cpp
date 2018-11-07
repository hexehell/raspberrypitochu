#include <iostream>

#include <string.h>



int main()
{
	double nHorasTrabajadas =0;
	double nPagaxHora =0;

	std::cout << "Horas Trabajadas?";
	std::cin >> nHorasTrabajadas;

	std::cout << "Paga x Hora?";
	std::cin >> nPagaxHora;

	if(nHorasTrabajadas > 40)
		nHorasTrabajadas = 40+ (nHorasTrabajadas-40)*1.5;
	
	std::cout << "La paga es de: " << (nHorasTrabajadas* nPagaxHora);
}
			
