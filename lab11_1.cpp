#include<iostream>

using namespace std;

long long int fibonacci(int);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}

//Write definition of function fibonacci() here
long long int fibonacci(int x){
	if (x == 0) {
		int i = 0;
		return i;
	}else if (x == 1){
		int i = 1;
		return i;
	}else if (x > 1){
		return fibonacci(x-1) + fibonacci(x-2);
	}
}

