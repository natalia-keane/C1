//Natalia Keane 620077636
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	int temp;
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	float ans;
	
	//scanf("%d %d", &num1, &num2);
	if(num1<num2){
		temp=num1;
		num1=num2;
		num2=temp;
		ans=(num1/num2);
	}
	else
		ans=(num1/num2);

	printf("Two numbers, %i divided by %i equals %f", num1,num2, ans);

	

}