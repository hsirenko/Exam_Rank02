#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == '\t' || str[i - 1] == ' '))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc >= 2)
	{
		while (argc > i)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	write(1, "\n", 1);
	return(0);
}


//"__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t"