#include <iostream>
using namespace std;

short fibonacciShort(int n);
int fibonacciInt (int n);
long fibonacciLong (int n);
long long fibonacciLongLong (int n);

int main(int argc, char** argv) {
	
	for (int i=1;i<=999;i++){
		if 	(fibonacciShort(i)<0){
			cout<<"overflow short n="<<i<<endl;
			break;
		}
	}

	for (int i=1;i<=999;i++){
		if 	(fibonacciInt(i)<0){
			cout<<"overflow int n="<<i<<endl;
			break;
		}
	}
	
	for (int i=1;i<=999;i++){
		if 	(fibonacciLong(i)<0){
			cout<<"overflow long n="<<i<<endl;
			break;
		}
	}
	
	for (int i=1;i<=999;i++){
		if 	(fibonacciLongLong(i)<0){
			cout<<"overflow long long n="<<i<<endl;
			break;
		}
	}
	
	return 0;
}

short fibonacciShort (int n){
	
	if (n==0){
		return 0;
	}	
	if (n==1){
		return 1;
	}
	short x=0;
    short y=1;
	short result=0;
	for (int i=1;i<n;i++){
		result = x + y;
		x=y;
		y=result;
	}
	return result;
}

int fibonacciInt (int n){
	
	
	if (n==0){
		return 0;
	}	
	if (n==1){
		return 1;
	}
	int x=0;
	int y=1;
	int result=0;
	for (int i=1;i<n;i++){
		result = x + y;
		x=y;
		y=result;
	}
	return result;
}

long fibonacciLong (int n){
	
	if (n==0){
		return 0;
	}	
	if (n==1){
		return 1;
	}
	long x=0;
	long y=1;
	long result=0;
	for (int i=1;i<n;i++){
		result = x + y;
		x=y;
		y=result;
	}
	return result;
}

long long fibonacciLongLong (int n){
	
	
	if (n==0){
		return 0;
	}	
	if (n==1){
		return 1;
	}
	long long x=0;
	long long y=1;
	long long result=0;
	for (int i=1;i<n;i++){
		result = x + y;
		x=y;
		y=result;
	}
	return result;
}
