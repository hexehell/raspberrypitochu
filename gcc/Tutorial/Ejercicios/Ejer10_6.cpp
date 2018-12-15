#include <iostream>
#include <stdlib.h> /* ANSI Standard only */

#define DIE \
std::cerr << "Fatal Error: Abort\n"; exit(8);

#define BEGIN {
#define END }	


main() {
// A random value for testing
int value;

 value = 1;
 if (value < 0)
 DIE;

 std::cerr << "We did not die\n";
 return (0);
 }

 //El programa muere por el hecho de que el if no cierra con llaves tomando solo el primer argumento declarada en la variable del preprocesador
 //DIE