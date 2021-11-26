#include "libft.h"

char	f(unsigned int i, char c)
{
	return	(c + i);
}

void	f2(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	*s1 = ft_substr("Les chats font miaou\n", 14, 7);
	char	*s2 = ft_strjoin("Les chats font", " miaou\n");
	char	*s3 = ft_strtrim("un chien chante", "unte");
	char	**tab1 = ft_split("Les_chiens_ne_font_pas_miaou", '_');
	char	**tab2 = ft_split("__Les_chiens_ne_font_pas_miaou__", '_');
	char	**tab3 = ft_split("Les_chiens_ne_font_pas_miaou__", '_');
	char	s4[] = "012345";
	char	*s5 = ft_strmapi("012345", f);

	ft_putstr_fd("Test substr\n reponse attendu  miaou:", 1);
	ft_putstr_fd(s1, 1);
	ft_putstr_fd("\nTest strjoin\nreponse attendu 'Les chats font miaou':", 1);
	ft_putstr_fd(s2, 1);
	ft_putstr_fd("\nTest strtrim\nreponse attendu ' chien cha':", 1);
	ft_putstr_fd(s3, 1);
	ft_putstr_fd("\nTest split\n", 1);
	while (*tab1 != NULL)
	{
		ft_putstr_fd(*tab1++, 1);
		ft_putchar_fd(' ', 1);
	}
	ft_putchar_fd('\n', 1);
	while (*tab2 != NULL)
	{
		ft_putstr_fd(*tab2++, 1);
		ft_putchar_fd(' ', 1);
	}
	ft_putchar_fd('\n', 1);
	while (*tab3 != NULL)
	{
		ft_putstr_fd(*tab3++, 1);
		ft_putchar_fd(' ', 1);
	}
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Test strmapi\nresultat attendu '02468:':", 1);
	ft_putstr_fd(s5, 1);
	ft_putstr_fd("\nTest striteri\nresultat attendu '02468:':", 1);
	ft_striteri(s4, f2);
	ft_putstr_fd(s4, 1);
	ft_putendl_fd("\nTest itoa, atoi, putnbr", 1);
	ft_putnbr_fd(ft_atoi(ft_itoa(25)), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(ft_itoa(-54)), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(ft_itoa(0)), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(ft_itoa(2147483647)), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(ft_itoa(-2147483648)), 1);
	ft_putchar_fd('\n', 1);
	
}