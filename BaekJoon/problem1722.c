#include <stdio.h>

long long factorial[20];


void getFactorial(void)
{
	factorial[0] = 1;
	factorial[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		factorial[i] = factorial[i - 1] * i;
	}
}

int subProblem1(int index)
{

}

int subProblem2(int arr[])
{

}

int main(void)
{
	int range;

	getFactorial();

	scanf("%d", &range);

	int probNum;

	scanf("%d", &probNum);
}