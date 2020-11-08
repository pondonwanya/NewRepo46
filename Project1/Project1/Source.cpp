#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

	struct  profile
	{
		char name[100];
		int age;
	} s [10];

	int i;
	struct  profile* sPtr;

	sPtr = s;

	for (i = 0; i < 10; i++) {
		printf("Student %d \n\t Name : ", i + 1);
		scanf("%s", sPtr->name);
		printf("\t Age  : ");
		scanf("%d", &(sPtr->age));
		sPtr++;
	}

	sPtr -= 10;

	for (i = 0; i < 10; i++) {
		if ((sPtr->age) >= 0 && (sPtr->age) < 3) {
			printf("\n%s  : babyhood ", sPtr->name);
		}
		else if ((sPtr->age) >= 3 && (sPtr->age) < 12) {
			printf("\n%s  : childhood ", sPtr->name);
		}
		else if ((sPtr->age) >= 12 && (sPtr->age) < 22) {
			printf("\n%s  : teens ", sPtr->name);
		}
		else if ((sPtr->age) >= 22 && (sPtr->age) < 60) {
			printf("\n%s  : Adulthood ", sPtr->name);
		}
		else {
			printf("\n%s  : Old ", sPtr->name);
		}
			sPtr++; 
	}

	return 0;
}