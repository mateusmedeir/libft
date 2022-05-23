#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(void)
{
//Isalpha
    printf("//Isalpha");
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", isalpha('a'));
//Isdigit
    printf("//Isdigit");
    printf("%d\n", ft_isdigit('c'));
    printf("%d\n", isdigit('c'));
//Isalnum
    printf("//Isalnum");
    printf("%d\n", ft_isalnum('5'));
    printf("%d\n", isalnum('5'));
//Isascii
    printf("//Isascii");
    printf("%d\n", ft_isascii('g'));
    printf("%d\n", isascii('g'));
//Isprint
    printf("//Isprint");
    printf("%d\n", ft_isprint('p'));
    printf("%d\n", isprint('p'));
//Strlen
    print("//Strlen");
    printf("%d\n", ft_strlen("Hello"));
    printf("%d\n", strlen("Hello"));
//Memset
    char str1_memset[] = "Hello World, Hello Everyone!";
    char str2_memset[] = "Hello World, Hello Everyone!";
    printf("//Menset");
    printf("%s\n", ft_memset(str1_memset, '.', 8));
    printf("%s\n", memset(str2_memset, '.', 8));
//Bzero
    char    str1_bzero[] = "Hello World";
    char    str2_bzero[] = "Hello World";
    bzero (str1_bzero + 5, 2);
    ft_bzero (str2_bzero + 5, 2);
    pritnf("//Bzero");
    printf("%s\n", str1);
    printf("%s\n", str2);
//Memcpy
    char    str1_memcpy[] = "olleH World";
    char    str2-memcpy[] = "olleH World";
    pritnf("//Memcpy");
    printf("%s\n", str1_memcpy);
    printf("%s\n", memcpy(str1_memcpy, "Hello", 5));
    printf("%s\n", ft_memcpy(str2_memcpy, "Hello", 5));
//Memmove
    char    str1_memmove[8] = "World!!";
    char    str2_memmove[8] = "World!!";
    pritnf("//Memmove");
    printf("%s\n", ft_memmove(str1_memmove, "Hello", 2));
    printf("%s\n", memmove(str2_memmove, "Hello", 2));
//Strlcpy
    char    str1_strlcpy[3];
    char    str2_strlcpy[3];
    pritnf("//Strlcpy");
    ft_strlcpy(str1_strlcpy, "Hello", 3);
    printf("%s\n", str1_strlcpy);
    strlcpy(str2_strlcpy, "Hello", 3);
    printf("%s\n", str2_strlcpy);
//Strlcat
    char    str1_strlcat[9] = "Hello ";
    char    str2_strlcat[9] = "Hello ";

    printf("//Strlcat");
    ft_strlcat(str1_strlcat, "World", 9);
    printf("%s\n", str1_strlcat);
    strlcat(str2_strlcat, "World", 9);
    printf("%s\n", str2_strlcat);
//Toupper
    printf("//Toupper");
    printf("%c\n", ft_toupper('c'));
    printf("%c\n", toupper('c'));
//Tolower
    printf("//Tolower");
    printf("%c\n", ft_tolower('C'));
    printf("%c\n", tolower('C'));
//Strchr
    printf("//Strchr");
    printf("%s\n", ft_strchr("World", 'r'));
    printf("%s\n", strchr("World", 'r'));
//Strrchr
    printf("//Strrchr");
    printf("%s\n", ft_strrchr("Hello World", 'l'));
    printf("%s\n", strrchr("Hello World", 'l'));
//Strncmp
    printf("//Strncmp");
    printf("%d\n", ft_strncmp("Hello", "HellO", 4));
    printf("%d\n", strncmp("Hello", "HellO", 4));
//Memchr
    printf("//Memchr");
    printf ("%s\n", ft_memchr("Hello World!", 'o', 5));
    printf ("%s\n", memchr("Hello World!", 'o', 5));
//Memcmp
    printf("//Memcmp");
    printf("%d\n", memcmp("Hello World", "Hello world", 6));
    printf("%d\n", memcmp("Hello World", "Hello world", 6));
//Strnstr
    printf("//Strnstr");
    printf("%s\n", ft_strnstr("Hello World, Hello Everyone!", "World", 10));
    printf("%s\n", strnstr("Hello World, Hello Everyone!", "World", 10));
//Atoi
    printf("//Atoi");
    printf("%d\n", ft_atoi("-542a523"));
    printf("%d\n", atoi("-542a523"));
//Calloc
    printf("//Calloc");
    printf("%s\n", ft_calloc(2, sizeof(char)));
    printf("%s\n", calloc(2, sizeof(char)));
//Strdup
    printf("//Strdup");
    printf("%s\n", ft_strdup("Hello"));
    printf("%s\n", ft_strdup("Hello"));
