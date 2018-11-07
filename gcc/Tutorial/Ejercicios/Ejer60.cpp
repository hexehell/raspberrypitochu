#include <iostream>


int main()
{
	int nParar =0;

	std::cout << "Escribir los numeros Fibonacci \n";
	std::cout << "Hasta?";


	std::cin >> nParar;

	std::cout << "\n";

	std::cout << "1" << "\n" << "1" << "\n";

	int j =1;

	for(int i=2;i< nParar;)
	{
		int aux = i+j;

		std::cout << aux <<"\n";

		j =i;
		i= aux;
	}

return 0;
}
