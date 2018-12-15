#include <iostream>


int &fnTomaApuntadorReturn()
{

	int a = 1;

	return a;

}


int main()
{
	

	int &b =fnTomaApuntadorReturn();

	b+=5;

	std::cout << b;
	

return 0;
}
