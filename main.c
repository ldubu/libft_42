/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 16:01:29 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	/*printf("Test 1\nOfficiel = %d, yours = %d\n", isalpha('a'), ft_isalpha('a'));
	printf("Test 2\nOfficiel = %d, yours = %d\n", isalpha('l'), ft_isalpha('l'));
	printf("Test 3\nOfficiel = %d, yours = %d\n", isalpha('z'), ft_isalpha('z'));
	printf("Test 4\nOfficiel = %d, yours = %d\n", isalpha('A'), ft_isalpha('A'));
	printf("Test 5\nOfficiel = %d, yours = %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("Test 6\nOfficiel = %d, yours = %d\n", isalpha('J'), ft_isalpha('J'));
	printf("Test 7\nOfficiel = %d, yours = %d\n", isalpha('5'), ft_isalpha('5'));

	printf("Test 7\nOfficiel = %d, yours = %d\n", isdigit('5'), ft_isdigit('5'));
	printf("Test 8\nOfficiel = %d, yours = %d\n", isdigit('9'), ft_isdigit('9'));
	printf("Test 9\nOfficiel = %d, yours = %d\n", isdigit('l'), ft_isdigit('l'));
	
	printf("Test 10\nOfficiel = %d, yours = %d\n", isalnum('l'), ft_isalnum('l'));
	printf("Test 11\nOfficiel = %d, yours = %d\n", isalnum('3'), ft_isalnum('3'));
	printf("Test 12\nOfficiel = %d, yours = %d\n", isalnum('@'), ft_isalnum('@'));
	
	printf("Test 13\nOfficiel = %d, yours = %d\n", isascii('@'), ft_isascii('@'));
	printf("Test 14\nOfficiel = %d, yours = %d\n", isascii(278), ft_isascii(278));
	printf("Test 15\nOfficiel = %d, yours = %d\n", isascii(48), ft_isascii(48));

	printf("Test 16\nOfficiel = %d, yours = %d\n", isprint(48), ft_isprint(48));
	printf("Test 17\nOfficiel = %d, yours = %d\n", isprint(5), ft_isprint(5));
	printf("Test 18\nOfficiel = %d, yours = %d\n", isprint(277), ft_isprint(277));*/

	/*printf("strlen\n");
	printf("'Bonjour' %lu : %lu\n", strlen("bonjour"),ft_strlen("bonjour"));
	printf("''attendu %lu: %lu\n", strlen(""), ft_strlen(""));
	printf("'J'aime les chats'attendu %lu: %lu\n", strlen("J'aime les chats"), ft_strlen("J'aime les chats"));
	printf("'a'attendu %lu: %lu\n", strlen("a"), ft_strlen("a"));*/

	char cpytest[] = "abcdefghijkl";
	char movtest[] = "abcdefghijkl";

	printf("cpy %s\n", memcpy(cpytest+2, cpytest, 8));
	printf("move %s\n", memmove(movtest+2, movtest, 8));


}
