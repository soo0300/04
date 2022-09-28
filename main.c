#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){	
	unsigned int num;
	int b;
	
	printf("input a number: ");
	scanf("%ui",&num);
	
	
	for(b=0; num!=0; num>>=1){
		if(num&1){
			b++;		
		}
	}
	printf("The result is: %i\n",b);
	return 0;

	
}
