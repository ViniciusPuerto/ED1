#include <stdio.h>
#include <math.h>

int main(){
	double A, B, C, delta, r1, r2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta = B*B -4*A*C;
	
	if(delta < 0 || A == 0){
		printf("Impossivel calcular\n");
		return 0;
	}
	
	r1 = (-B + sqrt(delta))/(2*A);
	r2 = (-B - sqrt(delta))/(2*A);
	
	printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	return 0;
	
}
