#include <iostream>
#include <string.h>



int main()
{
	int nAno =0;
	
	std::string sAno = "";


	std::cout << "AÃo Bisiesto?\n";


	std::cin >> sAno;
	

	std::cout << "\n";
	
	
	nAno =std::stoi(sAno);
	




	if(nAno%4 ==0){
		if(nAno%400 ==0 && nAno%100 ==0)
	
	
			std::cout << "Bisiesto";

		else	
			std::cout << "Normal";


	}
	else
	std::cout << "Normal";



return 0;
}
