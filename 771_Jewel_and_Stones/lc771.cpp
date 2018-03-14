#include <iostream>
#include <string>
using namespace std;

int main()
{
	string J = "aA";
	string S = "aAAaaAAAAbbb";
	int count = 0;
	for (auto jewels: J){
		for (auto stones: S){
			if (stones == jewels)
				count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
