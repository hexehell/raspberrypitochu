#include <iostream>

#include <string.h>



int main()
{
	int nNumeroRandom =0;
	int nNumeroEntregado=0;

	nNumeroRandom = std::rand();

 	while(nNumeroEntregado != -1){
	

		std::cout << "Adivina numero";
		std::cin >> nNumeroEntregado;

		if(nNumeroEntregado == nNumeroRandom)
		{

				
			std::cout << "Correcto!";  
		
			break;
		}

		if(nNumeroEntregado == -1)
		{
		
			
			std::cout << "El numero random era: ";	
	
		}
	
	}


}
			
