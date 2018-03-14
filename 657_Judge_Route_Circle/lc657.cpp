#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	input = "UDDLLRR";
	string 	output;
	int up = 0, down = 0, left = 0 , right = 0;
	for (auto element : input){
		switch(element){
			case 'U':
				up++;
				break;
			case 'D':
				down++;
				break;
			case 'L':
				left++;
				break;
			case 'R':
				right++;
				break;
		}	
	}
	if (up == down && right == left)
		output = "true";
	else
		output = "false";
	cout << output << endl;
	return 0;
}
