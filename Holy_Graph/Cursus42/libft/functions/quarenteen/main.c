#include <string.h>
#include <stdio.h>

char	*strnstr(const char *big, const char *little, unsigned int len);

int	main(void)
{
	const char	big[] = "ola, mundo";
	const char	c2[] = "";
	char *ptr;

	printf ("%p e %d\n", big, big);
	printf ("%p e %d\n", &big, &big);
	printf ("%s\n", strnstr(big, c2, 12));
}
