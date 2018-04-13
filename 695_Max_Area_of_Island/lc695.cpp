#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> initmap();
void printmap(vector<vector<int>>);
int countmaxarea(vector<vector<int>>&);
int countarea(vector<vector<int>>&, int, int);

int main()
{
	vector<vector<int>> map;
	map = initmap();
	printmap(map);
	int max = countmaxarea(map);
	cout << "The max area is:\t"<< max << endl;
	return 0;
}

vector<vector<int>> initmap(){
	
	vector<vector<int>> map{};
	vector<int> column{};
	int land = 0;
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			land = rand()%2;
			column.push_back(land);
		}
		map.push_back(column);
		column.clear();
	}
	return map;
}

void printmap(vector<vector<int>> map){
	for (auto column: map){
		cout <<"[";
		for (auto element: column)
			cout << element<<",";
		cout <<"],"<< endl;
	}
}

int countmaxarea (vector<vector<int>>& map){
	int max_area = 0;
	for (int i = 0; i< map.size(); i++){
		for (int j = 0; j < map[0].size(); j++){
			if(map[i][j] == 1)
				max_area = max(max_area, countarea(map, i, j));
		}
	}
	return max_area;
}

int countarea(vector<vector<int>>& map, int i, int j){
	if(i>= 0 && i < map.size() && j>=0 && j <map.size() && map[i][j] == 1){
		map[i][j] = 0;
		return 1+countarea(map,i+1,j)+countarea(map,i-1,j)+countarea(map,i,j-1)+countarea(map,i,j+1);
	}
	return 0;
}
