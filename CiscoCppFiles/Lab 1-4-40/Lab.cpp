#include <iostream>
using namespace std;
int main(void) {
	float pi = 3.14159265359;
	float x, y;
	cout << "Enter value for x: ";
	cin >> x;
	// put your code here
	y = ((x*x)/(pi * pi *((x * x) + (1/2))));
	y *= (1 + ((x * x)/(pi * pi *((x*x - (1/2))*(x*x - (1 / 2))))));
	cout << "y = " << y;
	while (getchar()) 
	{
	}
	getchar();
	return 0;
}