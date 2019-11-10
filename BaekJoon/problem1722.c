#include <stdio.h>
#include "problem1722.h"

#define FALSE 0
#define TRUE 1

long long factorial[20];
int range;

void getFactorial(void)
{
	factorial[0] = 1;
	factorial[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		factorial[i] = factorial[i - 1] * i;
	}
}

int subProblem1(long long index)
{
	
}

int subProblem2(int arr[])
{
	long long index = 0;
	int used[21];

	for (int i = 0; i < 20; i++)
	{
		used[i] = FALSE;
	}

	for (int i = 0; i < range - 1; i++)
	{
		used[arr[i]] = TRUE;

		int lessNum = 0;

		for (int j = 1; j < arr[i]; j++)
		{
			if (used[j] == FALSE)
			{
				lessNum++;
			}
		}

		index += factorial[range - i - 1] * lessNum;
	}

	printf("%lld", index + 1);
}

int main(void)
{
	getFactorial();

	scanf("%d", &range);

	int probNum;

	scanf("%d", &probNum);

	if (probNum == 1)
	{
		long long index;

		scanf("%lld", &index);

		subProblem1(index);
	}
	else if (probNum == 2)
	{
		int arr[20];

		for (int i = 0; i < range; i++)
		{
			scanf("%d", &arr[i]);
		}

		subProblem2(arr);
	}
}