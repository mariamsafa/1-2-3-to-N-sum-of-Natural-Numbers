#include<stdio.h>
int main()
{
	int sum = 0, i, n;
	printf("Enter the number: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("\nSummation is %d\n", sum);
	return 0;
}