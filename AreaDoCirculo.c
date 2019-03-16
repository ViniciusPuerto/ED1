#include <stdio.h>
#define pi 3.14159
int main(){
	double raio, area;
	scanf("%lf", &raio);
	area = 3.14159 * raio * raio;
	
	printf("A=%.4lf\n", area);
	return 0;
}
