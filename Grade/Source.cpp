#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	scanf("%d\n%d\n%d", &a, &b, &c);
	sum = a + b + c;
	printf("score = %d\n", sum);

	if(sum >= 80) {
		printf("Grade A");
	}
	else if (sum >= 75 && sum < 80) {
		printf("Grade B+");
	}
	else if (sum >= 70 && sum < 75) {
		printf("Grade B");
	}
	else if (sum >= 65 && sum < 70) {
		printf("Grade C+");
	}
	else if (sum >= 60 && sum < 65) {
		printf("Grade C");
	}
	else if (sum >= 55 && sum < 60) {
		printf("Grade D+");
	}
	else if (sum >= 50 && sum < 55) {
		printf("Grade D");
	}
	else {
		printf("F");
	}
	return 0;
}	