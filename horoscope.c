#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int Birth_Time(int day, int month, int year);


int main() {
	int day;
	int month;
	int year;

	printf("Please enter the day you born \n>>");
	scanf_s("%d", &day);

	if (day > 31) {
		printf("Please enter a valid number !!!");
		return 0;
	}

	printf("Please enter the month you born\n>> ");
	scanf_s("%d", &month);

	if (month > 12 || month == 0) {
		printf("Please enter a valid number");
		return 0;
	}

	printf("Please enter the year you born \n>>");
	scanf_s("%d", &year);

	if (year > 2022 || year < 1900) {
		printf("Please enter a valid number!!!\n");
		return 0;
	};
	struct Horoscopes {
		char Name[50];
		char Skills[50];
		char Weaknesses[50];
		char Strong_Sides[50];
		char Potential_Future[50];
	} Capricorn;
	strcpy_s(Capricorn.Name, 10, "Capricorn");
	strcpy_s(Capricorn.Skills,20, "Good");
	strcpy_s(Capricorn.Weaknesses,20, "To naive");
	strcpy_s(Capricorn.Strong_Sides,20, "Well hearted");
	strcpy_s(Capricorn.Potential_Future,20, "Shiny");
	switch (month) {
		case 1: {
			printf("Your horoscope is  %s \n", Capricorn.Name);
			printf("Skil:  %s\n", Capricorn.Skills);
			printf("Weakness: %s\n", Capricorn.Weaknesses);
			printf("Strong_sides: %s\n", Capricorn.Strong_Sides);
			printf("Potential future: %s\n", Capricorn.Potential_Future);
		}
		default:
			printf("Please try again");
	};










	return 0;
