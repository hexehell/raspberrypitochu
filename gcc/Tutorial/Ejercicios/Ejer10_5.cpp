#include <iostream>
#define SIZE 10;
#define FUDGE SIZE -2;
main ()
{
int size; // Size to really use
size = FUDGE;
std::cout << "Size is " << size << '\n';
return (0);
}

//No distingue mayusculas y misnusculas el preprocesador entonce SIZE y size pertenecen al preprocesador 