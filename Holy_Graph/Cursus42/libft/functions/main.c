#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

void	ft_printarray(char *str, int size);

int	main(void)
{
	char	s1[] = "O";
	char	s2[] = "O";
	size_t	n = 30;

	printf ("Expected: %d\n", memcmp(s1, s2, n));
	printf ("Reallity: %d\n", ft_memcmp(s1, s2, n));
	return 0;
}

void	ft_printarray(char *str, int size)
{
	int	count = 0;
	while (size --)
	{
		printf("%c", str[count]);
		count ++;
	}
}
