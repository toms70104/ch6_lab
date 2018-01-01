 #include<stdio.h>
 #include<stdlib.h>
 #include "Information.h"
int main(void)
{
	Person P;

	printf("Please input your name:");
	scanf_s("%s",&P.name,0);
	fflush(stdin);
	printf("Please input your dender (0 for woman, 1 for main):");
	scanf_s("%d", &P.gender,1);
	fflush(stdin);
	printf("Please input your age:");
	scanf_s("%d", &P.age,2);

	printf("\nHi! %s. ", P.name);
	if (P.gender == 0)
		printf("You are a %d-yesr-old woman.\n",P.age);
	else
		printf("You are a %d-yesr-old man.\n", P.age);
	system("pause");

}
