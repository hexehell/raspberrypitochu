
#include <iostream>




 	
#define x_LOOP int x = 3;\
 while (x!=0)\
 { \
 	std::cout << x << "\n";\
  x--;}
#define uno  1
#define dos 2
#define suma uno + dos


 
#define OSILLO std::cout << "osillo" << "\n";\

int main()
{
	
	

	x_LOOP

	OSILLO

	std::cout << suma;


return 0;
}
