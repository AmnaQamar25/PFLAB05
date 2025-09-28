#include <stdio.h>
#include <math.h>
int main(){
	
	int radius;
	float pi = 3.14159;
	float area;
	float circumference;
	float sqrtofradius;
	
	printf("Enter the radius of circular water tank \n");
	scanf("%d", &radius);
	
	area = pi * pow(radius,2);
	circumference = 2 * pi * radius;
	sqrtofradius = sqrt(radius);
	
	printf("The area of circular water tank is %.2f \n", area);
	printf("The circumference of circular water tank is %.2f \n", circumference);
	printf("The square root of radius is %.2f", sqrtofradius);	
	
	return 0;
}
