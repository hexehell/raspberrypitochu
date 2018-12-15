#include <iostream>


#define SALUDO(X) ( \
\
 std::cout << "HOLA " << X	\
 ) 
 


main() 
{
	for(int i=0;i<10;i++)
	{

		SALUDO(i);
	}
}

