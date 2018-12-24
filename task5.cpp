#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void vectorReverse(vector<int> &vec){
	
	reverse(vec.begin(), vec.end());
}

int main(int argc, char **argv)
{
	vector<int> vec1 = {1,2,3,4,5};
	
	vectorReverse(vec1);
	
	for(auto w: vec1){
		cout << w << endl;
	}
	
	
	return 0;
}

