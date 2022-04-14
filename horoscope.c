#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int Birth_Time(int day,int month,int year);


int main() {
	int day;
	int month;
	int year;

	printf("Please enter the day you born \n>>");
	scanf("%d",&day);

	if (day > 31){
		printf("Please enter a valid number !!!");
		return 0;
	}

	printf("Please enter the month you born\n>> ");
	scanf("%d",&month);

	if (month > 12 || month == 0){
		printf("Please enter a valid number");
		return 0;
	}

	printf("Please enter the year you born \n>>");
	scanf("%d",&year);
	
	if (year>2022 || year< 1900){
		printf("Please enter a valid number!!!\n");
		return 0;
	}
	
	struct horoscopes{
		skills,
		storng_sides,
		weak_sides,
		potencial_future
		};
	struct horoscopes capricorn[1];
	strcpy(capricorn.skills,"example skills");
		
	return 0;
	
}
