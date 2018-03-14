#include <iostream>
using namespace std;

int main()
{
	int x = 10, y = 4;
	
	int output;
		
	x /= 2;
	y /= 2;
	
	if (y>x)
		output = y - x;
	else
		output = x - y;
	cout << output << endl;
	return 0;
}
