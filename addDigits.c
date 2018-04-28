//Natalia Keane 620077636
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]){
	int  sum=0;
	int i=0;
	int dig=0;

	printf("Please enter some digits between 0 and 9\n");
	scanf("%d", &dig);
	while(dig>0){
		i=dig%10;
		dig=dig/10;
		sum+= i;
	}
	printf("%d", sum);
	return 0;
}