#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A = "abcde";
	string B = "deabc";
	string temp(A);
	do {
		A.push_back(*(A.begin()));
		A.erase(A.begin());
		if(A == B){
			cout << "true"<< endl;
			return 0;
		}	
	} while (A != temp);
	cout << "false" << endl;
	return 0;
}
