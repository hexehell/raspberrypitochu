#include <iostream>


#ifndef DEFINIDO

	#define CALLE "STRUGEN"

#else

	#define CALLE "STRAGEN"

#endif


main() 
{
	#ifdef DEFINIDO
		std::cout << CALLE << "\n";

		std::cout << DEFINIDO;

	#else
		std::cout << CALLE << "\n";

		std::cout << "No fue definido la variable 'DEFINIDO' de Preproc";

	#endif

}

