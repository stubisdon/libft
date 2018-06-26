/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 17:33:31 by dkotov            #+#    #+#             */
/*   Updated: 2018/06/20 17:39:27 by dkotov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <xlocale.h>

int	main()
{
	char str[50] = "Hey everybody! How's weather?";
	char str2[50] = "999999999999999999999999999";
	char str3[100] = "Hi, my name is..";
	char str4[100] = "Hi, my name is..";
	char a[4] = "abc";
	char b[4] = "abd";
	int arr[10];
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";

	/*  ascii functions */

	printf("\n");
	printf("\n");
	printf("*******ASCII FUNCTIONS********\n");
	printf("\n");
	printf("atoi: %i\n", atoi(str2));
	printf("ft_atoi: %i\n", ft_atoi(str2));
	printf("\n");
	printf("isalpha for 'z' returns: %i\n", isalpha('z'));
	printf("ft_isalpha for 'z' returns: %i\n", ft_isalpha('z'));
	printf("\n");
	printf("isdigit for '1' returns: %i\n", isdigit('1'));
	printf("ft_isdigit for '1' returns: %i\n", ft_isdigit('1'));
	printf("\n");
	printf("isalnum for 'A' returns: %i\n", isalnum('A'));
	printf("ft_isalnum for 'A' returns: %i\n", ft_isalnum('A'));
	printf("\n");
	printf("isascii for 'A' returns: %i\n", isascii('A'));
	printf("ft_isascii for 'A' returns: %i\n", ft_isascii('A'));
	printf("\n");
	printf("isprint for '28 fs' returns: %i\n", isprint(28));
	printf("ft_isprint for '28 fs' returns: %i\n", ft_isprint(28));
	printf("\n");
	printf("toupper for 'z' returns: %i\n", toupper('z'));
	printf("ft_toupper for 'z' returns: %i\n", ft_toupper('z'));
	printf("toupper for '28 fs' returns: %i\n", toupper(28));
	printf("ft_toupper for '28 fs' returns: %i\n", ft_toupper(28));
	printf("\n");
	printf("tolower for 'z' returns: %i\n", toupper('z'));
	printf("ft_tolower for 'z' returns: %i\n", ft_toupper('z'));
	printf("tolower for 'Z' returns: %i\n", toupper('Z'));
	printf("ft_tolower for 'Z' returns: %i\n", ft_toupper('Z'));

	/* memory functions */

	printf("\n");
	printf("\n");
	printf("*******MEMORY FUNCTIONS********\n");
	printf("\n");
	memset(str + 13, '.', 8*sizeof(char));
	printf("memset fills str with 8 dots from the 13th position: %s\n", str);
	ft_memset(str + 13, 'x', 8*sizeof(char));
	printf("ft_memset fills str with 8 'x's from the 13th position: %s\n", str);
	ft_memset(arr, 0, 10*sizeof(arr[0]));
    	printf("ft_memset fills an array of 10 values with 0s: %d %d %d %d %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
	bzero(str + 13, 8*sizeof(char));
	printf("bzero fills str with 8 zeroes from 13th position: %s\n", str);
	ft_bzero(str + 3, 8*sizeof(char));
	printf("ft_bzero fills str with 8 zeroes from 3rd position: %s\n", str);
	printf("\n");

	/* memmove tests */

	printf("\n");
	printf("\n");
	printf("*******MEMMOVE FUNCTIONS********\n");
	printf("\n");
	printf("strings original value \n\nstr: %s\nstr2: %s\nstr3: %s\nstr4: %s\n\n", str, str2, str3, str4);
	memmove(str3 + 5, str3, ft_strlen(str3)+1);
	printf("memmove from str3 to str3+5 with str3len+1: %s\n", str3);
	memmove(str3, str4, ft_strlen(str4)+1);
	printf("memmove restores original str3 value: %s\n", str3);
	ft_memmove(str3 + 5, str3, ft_strlen(str3)+1);
	printf("ft_memmove from str3 to str3+5 with str3len+1: %s\n", str3);

	printf("\n");
	printf("str4 after ft_memccpy until c %s\n", str4);
	ft_memchr(str4, 'i', sizeof(str4));
	printf("ft_memchr returns a pointer to 'i' in str 4: %p\n", str4);
	memchr(str4, 'i', sizeof(str4));
	printf("memchr returns a pointer to 'i' in str 4: %p\n", str4);
	printf("ft_memcmp returns %i\n", ft_memcmp(str2, str3, sizeof(str)));
	printf("memcmp returns %i\n", memcmp(str2, str3, sizeof(str)));

	/* string functions */

	printf("\n");
	printf("\n");
	printf("*******STRING FUNCTIONS********\n");
	printf("\n");
	printf("str is: %s\n", str);
	printf("str2 is: %s\n", str2);
	printf("str3 is: %s\n", str3);
	printf("str4 is: %s\n", str4);
	printf("strncmp: %i\n", strncmp(a, b, 2));
	printf("ft_strncmp: %i\n", ft_strncmp(a, b, 2));
	printf("ft_strcat of str + str2: %s\n", ft_strcat(str, str2));
	printf("ft_strncat of str + str for 5 chars from str: %s\n", ft_strncat(str, str, 5));
	if (ft_strlcat(str, str2, strlen(str)) == strlcat(str, str2, strlen(str)))
	{
		printf("ft_strlcat matches strlcat\n");
	}
	else
		printf("ft_strlcat doesn't match strlcat\n");
	printf("ft_strchr searches for 'i' in str4: %s\n", ft_strchr(str4, 'i'));
	if (ft_strstr(str3, str4) == strstr(str3, str4))
		printf("ft_strstr matches strstr\n");
	if (ft_strstr(str3, str4) != strstr(str3, str4))
		printf("ft_strstr doesn't match strstr\n");
	printf("ft_strnstr searches for str4 in str3: %s\n", ft_strnstr(str3, str4, 10));
	printf("str3 is: %s\n", str3);
	printf("str4 is: %s\n", str4);

	/* additional memory functions */
	printf("\n");
	printf("\n");

	printf("ft_memalloc allocates mem and fills with 7 zeroes: %s\n", ft_memalloc(7));

	/* additional string functions */
	printf("\n");
	printf("\n");
	printf("ft_strtrim of s1 (should be spaces after words and lines): %s\n", ft_strtrim(s1));
	printf("\n");
	printf("\n");
	ft_strsplit("***dfsdfdsf*sdfdsfsdf*sdfsdf", '*');

	return (0);
}
