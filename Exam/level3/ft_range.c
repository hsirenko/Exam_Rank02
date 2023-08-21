
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int *result;
	int i = 0;
	int len = abs((end - start)) + 1; // absolute value for length calculation

	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	if (start <= end)
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

int main() {
	int i = 0;
	int *result = ft_range(0, -3);
	if (result != NULL) {
		while (i < 4) {
			printf("%d, ", result[i]);
			i++;
		}
	}
	free(result);
}



//	if (result != NULL)
//	{
//		while (i < (end - start + 1))
//		{
//			char c = result[i] + '0'; // convert int to char
//			write(1, &c, 1);
//			i++;
//		}
//	}
//	free(result);

