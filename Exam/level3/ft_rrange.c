
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int len = abs(end - start) + 1;
	int *result;
	int temp;

	temp = start;
	start = end;
	end = temp;

	result = (int *)malloc(sizeof(int) * len);
	if (end >= start)
	{
		while (i < len)
		{
			result[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			result[i] = start;
			start--;
			i++;
		}
	}
	return (result);

}

int main()
{
	int i = 0;
	int *result = ft_rrange(1, 3);

	while (i < 4)
	{
		printf("%d, ", result[i]);
		i++;
	}

}