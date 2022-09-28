#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	
	int time;
	printf("input the second: ");
	scanf("%i",&time);
	
	int h=time/3600;
	int m=(time%3600)/60;
	int s=(time%3600)%60;

	printf("The time for %i second is : %i %i %i",time,h,m,s);
	
}
