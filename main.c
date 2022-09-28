#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int year;
	printf("input the year: ");
	scanf("%i",&year);
	
	printf("%i", (year%4==0 && year%100!=0) || year%400==0);
	 
}


