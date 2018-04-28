#include<stdio.h>
#include<string.h>

int main()
    {
    	char name[50], first[25], last[25];
    	int a,b,c;
    	printf("What is your name? ");
    	scanf("%s", name);
    	for (a = 1; a < strlen(name); a++){
    		if (name[a]>='A' && name[a]<='Z'){
    			b = a - 1;
    			break;
    		}
    	}
    	for (c = 0; c <= b; c++)
    		first[c] = name[c];
    	first[c] = '\0';
    	for (b = 0;name[a]!='\0'; b++){
    		last[b] = name[a];
    		a++;
    	}
    	last[b] = '\0';
    	printf("%s\n", first);
    	printf("%s\n", last);
    	return 0;
    }