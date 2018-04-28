//Natalia Keane 620077636
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	int i,j,t;
	char name[50];
	printf("What is your name? ");
	scanf("%s",name);
	t=0;
	for (i=0; i<strlen(name); i++)
    	for (j='a'; j<=name[i]; j++)
     	t++;
	printf("%d\n",t);
}