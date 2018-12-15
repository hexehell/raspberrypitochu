#include <iostream>




int &fnTomaApuntadorReturn(int &a)
{

	 a = 2;

	return a;

}


int main()
{
	

	int a = 0;

	int &b =fnTomaApuntadorReturn(a);

	b+=5;

	std::cout << b;
	

return 0;
}
