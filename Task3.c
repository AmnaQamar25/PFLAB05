#include <stdio.h>
int main(){
	
	int x = 4;
	int y = 20;
	int z = 10;
	int a, b,c,d;
	
	d = x + y * z > 10 && x - z < y || !(y % z);
	printf("The expression used by tutor is \n         x + y * z > 10 && x - z < y || !(y % z) \n");
	printf("Step by step evalution is a follows : \n");
	printf("y * z = %d\n", y * z);
	a = y * z;
	printf("x + y * z = %d\n", x + a);
	b = x + a ;
	printf("x + y * z > 10 = %d\n", b > 10);
	printf("&&\n");
	printf("x - z = %d\n", x - z);
	c = x - z;
	printf("x - z < y = %d\n", c < y);
	printf("||\n");
	printf("y %% z = %d\n", y % z);
	printf("!(y %% z) = %d\n", !(y % z));
	printf("Final result is %d\n", d);
		
	return 0;
}
