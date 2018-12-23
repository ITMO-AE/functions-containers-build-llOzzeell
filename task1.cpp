#include <iostream>
#include <math.h>

using namespace std;

int Factorial(int num){
	if(num < 0 || fabs(num) > 10) return 1;
	else{
		int fact = 1;
		for(int i = 1; i <= num; i++){
			fact = fact * i;
		};
		return fact;
	}
	
}

int main(int argc, char **argv)
{
	int n;
	cin >> n;
	cout << Factorial(n) << endl;
	
	
	return 0;
}

