#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "abcdefgh";
	string t = "hfgbaedoc";
	cout << s << endl << t << endl;
	for (auto telement : t){
		for (auto iter = s.begin(); ;iter++){
			if ( *iter == telement)
				break;
			else if(iter == s.end()){
				cout << telement <<" is not in s" << endl;
				exit(0);	
			}
			else if(*iter != telement)
				continue;
		}
	}
				
}
