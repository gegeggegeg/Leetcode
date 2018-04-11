#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums = {0,1,0,3,12,0,5,6,7,8,0,9};
	
	auto end = nums.end();
	for (auto iter = nums.begin(); iter != end ; iter++)
		if(*iter == 0){
			nums.erase(iter);
			nums.push_back(0);
		}
	for (auto elements : nums)
		cout << elements << ", ";
	cout << endl;
	return 0;
}


