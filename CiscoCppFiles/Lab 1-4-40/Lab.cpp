#include <iostream>
using namespace std;
int main(void) {
	float pi = 3.14159265359;
	float x, y;
	float a, b, c, d;
	cout << "Enter value for x: ";
	cin >> x;
	// put your code here
	//y = ((x*x)/(pi * pi *((x * x) + (1/2))));
	//y *= (1 + ((x * x)/(pi * pi *((x*x - (1/2))*(x*x - (1 / 2))))));
	/*a = x*x;
	b = pi * pi *(x * x + (1/2));
	c = x*x - (1/2);
	c = c*c;
	d = pi * pi *c;
	y = (a/b)*(1+(a/d));
	cout << "y = " << y;*/
	//y = ((x*x/(pi*pi*(x*x + (1/2)))*(1+(x*x/(pi*pi*((x*x - (1/2))*(x*x - (1/2))))))));
	/*while (getchar()) 
	{
	}*/
	getchar();
	return 0;
}