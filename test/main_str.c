#include "../libft.h"

int main(void)
{
	char s1[] = "J'aime les chats, c'est choupi";
	char s1b[]= "J'aime les chiens, c'est choupi";
	char s2[] = "miaou";
	char s2b[]= "mia0u";
	char s3[] = "";
	char dst1[]= "................................";
	char dst1b[]= "................................";
	char dst2[]= "................................";
	char dst2b[]= "................................";
	char dst3[]= "................................";
	char dst3b[]= "................................";
	char s4[] = "bonoubancbananebanana";
	char s5[] = "banana";

	printf("Test strlen\nOn veut %lu: %lu\n%lu:%lu\n%lu:%lu\n", strlen(s1), ft_strlen(s1), strlen(s2), ft_strlen(s2), strlen(s3), ft_strlen(s3));
	printf("end of strlen");
	
	printf("\nTest strlcopy retour offi %lu: %lu, dst offi %s : %s\n", strlcpy(dst1, s1, 20), ft_strlcpy(dst1b, s1, 20), dst1, dst1b);
	printf("retour offi %lu: %lu, dst offi %s : %s\n", strlcpy(dst2, s2, 25), ft_strlcpy(dst2b, s2, 25), dst2, dst2b);
	printf("retour offi %lu: %lu, dst offi %s : %s\n", strlcpy(dst3, s3, 25), ft_strlcpy(dst3b, s3, 25), dst3, dst3b);

	printf("\nTest strlcat retour offi %lu: %lu, dst offi %s: %s\n", strlcat(dst1, s2, 25), ft_strlcat(dst1b, s2, 25), dst1, dst1b);
	printf("retour offi %lu: %lu, dst offi %s: %s\n", strlcat(dst2, s1, 7), ft_strlcat(dst2b, s1, 7), dst2, dst2b);
	printf("retour offi %lu: %lu, dst offi %s: %s\n", strlcat(dst1, s1, 10), ft_strlcat(dst1b, s1, 10), dst1, dst1b);

	printf("\nTest strchr retour offi %s : %s\n", strchr(s1, 'e'), ft_strchr(s1, 'e'));
	printf("retour offi %s : %s\n", strchr(s1, 'n'), ft_strchr(s1, 'n'));

	printf("\nTest strrchr retour offi %s : %s\n", strrchr(s1, 'e'), ft_strrchr(s1, 'e'));
	printf("retour offi %s : %s\n", strrchr(s1, 'n'), ft_strrchr(s1, 'n'));

	printf("\nTest strncmp retour offi %d: %d\n", strncmp(s2, s2b,5), ft_strncmp(s2, s2b,5));
	printf("retour offi %d: %d\n", strncmp(s1, s1b,20), ft_strncmp(s1, s1b,20));

	printf("\nTest strnstr retour offi %s: %s", strnstr(s4, s5, 30), ft_strnstr(s4, s5, 30));
}