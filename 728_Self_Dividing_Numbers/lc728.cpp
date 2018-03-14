#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int left = 1, right = 50;
	vector<int> output;
	
	for(int count = left; count <= right; ++count){
		int temp = count;
		bool divisible = true;
		while (temp != 0){
			int modular = temp % 10;
			if(modular == 0 || count % modular != 0){
				divisible = false;
				break;
			}
			temp /= 10;
		}
		if(divisible == true)
			output.push_back(count);
	}
	for (auto element: output)
		cout << element << ", ";
	cout << endl;
	return 0;
}
