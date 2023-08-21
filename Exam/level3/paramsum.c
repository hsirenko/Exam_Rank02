#include <unistd.h>
#include <stdio.h>

char ft_putnbr(int i)
{
	char digit;

	if (i >= 10)
		ft_putnbr(i / 10);
	digit = i % 10 + '0';
	//write(1, &digit, 1);
	return (digit);
}

int main(int argc, char **argv)
{
	int i = 0;
	int count;
	char result;

	if (argc > 1)
	{

		while (argv[i] != NULL)
		{
			i++;
		}
		count = i - 1;
		result = ft_putnbr(count);
		write(1, &result, 1);
	}
	else
	write(1, "0\n", 1);
}