#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		ft_putchar(i++);
		printf("\n is alpha: %d", ft_isalpha(i));
		printf("\n is digit: %d", ft_isdigit(i));
		printf("\n is alnum: %d", ft_isalnum(i));
		printf("\n is print: %d", ft_isprint(i));
		printf("\n is ascii: %d\n", ft_isascii(i));
	}
	return(0);
}
