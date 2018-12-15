#include <iostream>


#ifdef DEFINIDO

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
		std::cout << "No fue definido la variable de Preproc";

	#endif

}

//Compilado de esta manera: g++ -std=c++11 -DDEFINIDO=20  -oEjer10_PrecompiladorParametros.exe Ejer10_PrecompiladorParametros.cpp