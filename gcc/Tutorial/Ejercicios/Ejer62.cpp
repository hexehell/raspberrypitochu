#include <iostream>


int main()
{
	int nCalif =0;

	std::cout << "Calificar \n";
	std::cout << "-1 para salir";


	std::cin >> nCalif;

	std::cout << "\n";

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


		std::cin >> nCalif;
	}
	
	std::cout << "Termino Ejecucion Programa";

return 0;
}
