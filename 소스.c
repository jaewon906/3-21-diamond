#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	b = a + 2;
	int i = 0;
	int j = 0;
	printf("홀수를 입력하세요 : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("홀수를 입력해주세요 : ");
	}
	else {
		for (i = 1; i <= (a+1)/2; i++)
		{
			for (j = (a+1)/2; j >= i; j--)
			{

				printf(" ");

			}

			for (j = 1; j <= i; j++)
			{

				printf("*");

			}
			for (j = 2; j <= i; j++)
			{

				printf("*");

			}
			printf("\n");

		}

		for (i = (a - 1)/2; i >= 1; i--)
		{
			for (j = (a+1)/2; j >= i; j--)
			{

				printf(" ");

			}
			for (j = 1; j <= i;  j++)
			{

				printf("*");

			}
			for (j = 2; j <= i;  j++)
			{

				printf("*");

			}
			printf("\n");

		}



	}

	return 0;
}