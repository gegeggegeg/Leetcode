#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	string input;
	cout << "Please enter a string:\t";
	cin >> input;
	bool upperflag = false, lowerflag = false;
	for (auto iter = input.begin(); iter != input.end(); iter++){
		if(islower(*iter))
			lowerflag = true;
		if (isupper(*iter)){
			if (iter == input.begin())
				continue;
			else 
				upperflag = true;	
		}
		if (upperflag == true && lowerflag == true){
			cout << "False" << endl;
			return 0;
		}
	}
	cout << "True"<< endl;
	return 0;	
}
