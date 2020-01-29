#include <stdio.h>

float working(int x){
	return (x*150);
}

float ot(int y){
	return (y*75);
}

float income(int x, int y){
	return (working(x)+ot(y));
}

float tax(int x){
	return (x*10/100);
}

float takehome(int x, int y){
	float i = income(x,y);
	float t = tax(i);
	return (i-t);
}

int main(){
	int workingHours = 40;
	int otHours = 20;
	float takeHome;
	takeHome = takehome(40, 20);
	printf("%f\n", takeHome);

	return 0;
}

