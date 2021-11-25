#include "../libft.h"

int main(void)
{
	void *mem;
	void *mem1;
	void *mem2;
	
	mem = malloc(sizeof(*mem) * 7);
	mem1 = malloc(sizeof(*mem) * 12);
	mem2 = malloc(sizeof(*mem) * 12);
	if (mem == NULL || mem1 == NULL || mem2 == NULL)
		exit(0);
	printf("memset, 'a'\n");
	memset(mem, 'a', 7);
	write(1, mem, 7);
	printf("\nbzero\n");
	bzero(mem, 7);
	write(1, mem, 7);
	memset(mem2, 'b', 12);
	memset(mem1, 'k', 12);
	printf("\nmemcpy, 'abcdefghijkl'\n");
	ft_memcpy(mem2, "abcdefghijkl", 12);
	write(1, mem2, 12);
	printf("\nmemmove, 'abcdefghijkl\n");
	ft_memmove(mem1, mem2, 12);
	write(1, mem1, 12);
	printf("\nmemove. overlape dst > src\n");
	ft_memmove(mem1+4, mem1, 8);
	write(1, mem1, 8);
	printf("\nmemove, overlap dst < src\n");
	ft_memmove(mem1, mem2, 12);
	printf("\nreinitialisation mem1\n");
	write(1, mem1, 12);
	ft_memmove(mem1, mem1+4, 8);
	write(1, mem1, 8);
	printf("\nmemchr, 'f'\n");
	mem1 = ft_memchr(mem1, 'f', 12);
	write(1, mem1, 12);
	printf("\nmemchr, 'z'\n");
	mem2 = ft_memchr(mem2, 'z', 12);
	write(1, mem2, 12);
}