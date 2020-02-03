#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	  main(int ac, char **av)
{
	int	  i = 0;
	int	  number;
	char  *str = av[1];

	while(str)
	{
		printf("%c", *str - i);
		i++;
		str++;
	}
	printf("\n");
	return (0);
}
