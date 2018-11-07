#include <iostream>
#include <string.h>



int main()
{
	int nCalif =0;
	
	std::string sCalif = "";


	std::cout << "Calificar \n";
	std::cout << "-1 para salir";


	std::cin >> sCalif;
	

	std::cout << "\n";
	
	
	nCalif =std::stoi(sCalif);
	

	while(nCalif>=0){



		std::cout << "Califiacion: ";

		if(nCalif>=0 && nCalif<=60){

			std::cout << "F";

		}
		else if(nCalif>=60&& nCalif<=70){

			std::cout << "D";

		}
		else if(nCalif>=70 &&nCalif<=80){

			std::cout << "C";

		}
		else if(nCalif>=80 &&nCalif<=90){

			std::cout << "B";

		}
		else if(nCalif>=90 &&nCalif<100){

			std::cout << "A";

		}
		else if(nCalif==100){

			std::cout << "A+";

		}

		std::cout << "\n";
		
		char cUltimoDigito = sCalif.back();

		std::string s= (1, cUltimoDigito) ;

		int nUltimoDigito = std::stoi(s);

		if(nUltimoDigito>1 || nUltimoDigito<=3)
			std::cout << "-";

		if(nUltimoDigito>7 || nUltimoDigito<=9 || nUltimoDigito==0 )
			std::cout << "+";




		std::cin >> sCalif;

		nCalif =std::stoi(sCalif);

		
	}
	
	std::cout << "Termino Ejecucion Programa";

return 0;
}
