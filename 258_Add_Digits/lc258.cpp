#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Please enter a number\t";
	cin >> num;
	while(num/10 != 0){
		int result = 0;
		for (int i = num; i != 0; i /= 10){
			result = result + i%10;
		}
		num = result;
	}
	cout << num << endl;
	return 0;
}

