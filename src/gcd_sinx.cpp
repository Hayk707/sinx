#include "gcd_sin.hpp"

int factorial (int n){
	int pat=1;
	for (int i=1; i<=n; i++) {
		pat=pat * i;}
	return pat;}
double sin (double x, double precision){
	x=x*M_PI/180;
	double patas=0;
	for (int i = 0; i<=precision; i++) {
		int k = 2*i +1;
		patas += pow(-1, i) * pow(x, k) / factorial(k);
	}
	return patas;
}



