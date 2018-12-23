#include <iostream>
#include <vector>

using namespace std;


void vectorCpy(vector<int> &vec1, vector<int> &vec2){
	
	for(auto num : vec1){
		vec2.push_back(num);
	}
	vec1.clear();
}

int main(int argc, char **argv)
{
	vector<int> vec1 = {1,2,3,4,5};
	vector<int> vec2 = {6,7,8,9,0};
	
	vectorCpy(vec1, vec2);
	
	for(auto w: vec2){
		cout << w << endl;
	}
	
	cout << endl << vec1.size() << endl;
	
	return 0;
}

