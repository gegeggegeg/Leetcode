#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input = "Let's take LeetCode contest";
	cout << input << endl;
	auto temp = input.begin();
	for(auto beg = input.begin(); beg != input.end(); beg++){
		if (*beg == ' '){
			auto reverse = beg;
			do {
				cout << *(reverse-1);
				reverse--;
			} while(reverse != temp);
			temp = beg+1;
			cout << " ";
		}
		else if (beg == input.end()-1){
			auto reverse = beg+1;
			while (reverse != temp-1){
		  		cout<< *reverse;
				reverse--;
		  	}
		}
	}
	cout << endl;
	return 0;
}
