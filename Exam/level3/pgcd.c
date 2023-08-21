#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	 int i;
	 int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		if (i > 0 && j > 0)
		{
			while ( i != j)
			{
				if (i > j)
					i -= j;
				if ( j > i)
					j -= i;
			}
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}


