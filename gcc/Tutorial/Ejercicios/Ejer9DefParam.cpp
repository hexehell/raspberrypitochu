#include <iostream>
#include <string.h>

void fnParametrosDef(int a, int b );

void fnParametrosDef(int a, int b = 1)
{

 	std::cout << a << "\n";
 	std::cout << b << "\n";


}

int main()
{
	
	fnParametrosDef(2);

	
	
return 0;
}
