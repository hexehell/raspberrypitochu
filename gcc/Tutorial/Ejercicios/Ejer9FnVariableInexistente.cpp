#include <iostream>




int &fnVariableInexistente(int &a)
{

	 a = 2;

	return a;

}


int main()
{
	

	

	int &b =fnVariableInexistente(1);

	b+=5;

	std::cout << b;
	

return 0;
}
