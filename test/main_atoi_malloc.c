#include "../libft.h"

int main(void)
{
	printf("atoi -4568 : %d", ft_atoi("   \n  +--+---4568+-65"));
	void *mem;

	mem = (char *) ft_calloc(sizeof(char), 12);
	free(mem);

	mem = (char *) ft_strdup("bonjour !");
	printf("%s", mem);

}