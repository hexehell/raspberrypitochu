#include <iostream>
int height; /* the height of the triangle*/
int width; /* the width of the triangle */
int area; /* area of the triangle (computed) */
main()
{
std::cout << "Enter width height? ";
std::cin >> width >> height;
area = (width * height) / 2;
std::cout << "The area is " << area << '\n';
return (0);
}
