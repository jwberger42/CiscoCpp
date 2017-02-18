#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(void) {
	bool answer;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	if (value >= 0 && value < 10)
	{
		answer = true;
	}
	else if (2 * value < 20 && value - 2 > -2) 
	{
		answer = true;
	}
	else if (value - 1 > 1 && value / 2 < 10) 
	{
		answer = true;
	}
	else if (value == 111) 
	{
		answer = true;
	}
	else 
	{
		answer = false;
	}
		cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		getchar();
	return 0;
}