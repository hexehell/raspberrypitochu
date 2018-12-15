#include <iostream>




int main()
{
	

	

	for(int j=0;j<10;j++)
	{


		static int i = 1;

		std::cout << i << "\n";

		i = i +1;
	}
	
	
return 0;
}
