#include <iostream>
#include <cmath>
#include <cassert>



using namespace std;
// This Function colculeting the logarithm of number
double log(double a,double b){
	assert(b != 1 && b > 0);// assertion
	assert(a != 0);
	int sum,precision = 6;
	double result;
	for(int i = 0; i < precision;i++){
		sum = 0;
		while(a >= b){
			a = a/b;
			sum += 1;
		}
		result += sum * pow(10,(-1)*i);
		a = pow(a,10);
	}
	return result;
}


// This function colculething the modul number
int modul(int c){
	if(c < 0){
		c *= -1;
		return c;
		
	}else{
	
		return c;
	}

}
// This function colculeting the radical number
int armat(int e){
	for(int i = 1;i < e/2; i++){
		int f = i*i;
		int l = i*i*i;
		if(f == e){
			return i;
		}else if(l == e){
			return i;
		}
	}

		return 0;
}

