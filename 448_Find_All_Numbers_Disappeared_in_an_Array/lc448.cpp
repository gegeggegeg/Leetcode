#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> target = {4,3,2,7,8,3,1,15};
	vector<int> result = {1};
	int max = result.back();	
	for (auto iter=target.begin(); iter < target.end(); iter++){
		if (max  < *iter){
			for (int i = max+1 ; i < *iter ; i++){
				result.push_back(i);
			}
			max = *iter;
		}
		auto remove = find(result.begin(), result.end(), *iter);
		if(remove != result.end())
			result.erase(remove);
	}
	for (auto element: result)
		cout << element << ", ";
	cout << endl;
	return 0;
}
