#include <iostream>
#include <string.h>




int main()
{

	char sCad [20];
	
	
//	sCad = "hexehell";


	
	strcpy(sCad,"redkissgirl");
	
	strcat(sCad," graykissgirl");
	strcat(sCad,"\n");
	
	std::cout << sCad;
	std::cout << strlen(sCad);
	
//	char anakin [5];
//	char skywalker[5];
//	std::cout <<"\n";

	
//	std::cin >> anakin >> skywalker;
//	
//	std::cout <<"\n";
//	
//	std::cout << anakin << "|" << skywalker;
//	
//	std::cout <<"\n";
//	
//	std::cout << strlen(anakin) << "|" << strlen(skywalker);
//
//	std::cout <<"\n";
//
//
//	std::cout << "Tipo de datos casteo";
//	
//	int valor = 0;
//	
//	std::cout <<"\n" << valor;
//
//	std::cin >> valor;
//	
//	std::cout <<"\n";
//	
//	std::cout <<"El valor -1 es : "<< valor -1;
//	
//	
//	int variable(10);
//	
//	std::cout <<"\n";
	
//	std::cout <<"La variable es: " << variable;
	
	std::cout <<"\n";
	
	int numero = 10;
	
	int numeros [numero +1];
	
	std::cout << sizeof(numeros)/sizeof(int);
	

	return (0);
}
