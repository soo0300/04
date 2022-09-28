#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int time;

	printf("input the second: ");
	scanf("%i",&time);

	int min = time/60;
	int sec = time%60;
		
	printf("the time is %d : %d",min,sec);
		
}
