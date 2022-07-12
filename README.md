<h1 align="center">Libft - 42cursus</h1>
<p align="center"><strong>My very first own library</strong></p>

## 📑 About
---
> This project consists of creating our own library with some of the most used functions in the C language and others that are exclusive to it. It will be
very useful, since we will use it in our next projects in C.
---

### Part 1 - Libc functions

[**ft_isalpha:**](/libft/ft_isalpha.c) checks if it is an alphabetic character;\
[**ft_isdigit:**](/libft/ft_isdigit.c) checks if it is a decimal digit character;
* [**ft_isalnum:**](/libft/ft_isalnum.c) checks if it is an alphanumeric character;
* [**ft_isascii:**](/libft/ft_isascii.c) checks if it is an ASCII character;
* [**ft_isprint:**](/libft/ft_isprint.c) checks if it is a printable character;
* [**ft_strlen:**](/libft/ft_strlen.c) returns the length of the string;
* [**ft_memset:**](/libft/ft_memset.c) fill the first `len` bytes of `b` with `c`;
* [**ft_bzero:**](/libft/ft_bzero.c) erase `n` bytes of `s` with zeros;
* [**ft_memcpy:**](/libft/ft_memcpy.c) copy `n` bytes from `src` to `dst` (the memory areas must not overlap);
* [**ft_memmove:**](/libft/ft_memmove.c) copy `len` bytes from `src` to `dst` (The memory areas may overlap);
* [**ft_strlcpy:**](/libft/ft_strlcpy.c) copy `dstsize - 1` characters from `src` to `dst`, ending with NULL;
* [**ft_strlcat:**](/libft/ft_strlcat.c) append the `dstsize - ft_strlen(dst) - 1` characters from `src` to `dst`, ending with NULL;
* [**ft_toupper:**](/libft/ft_toupper.c) 
* [**ft_tolower:**](/libft/ft_tolower.c) 
* [**ft_strchr:**](/libft/ft_strchr.c) 
* [**ft_strrchr:**](/libft/ft_strrchr.c) 
* [**ft_strncmp:**](/libft/ft_strncmp.c) 
* [**ft_memchr:**](/libft/ft_memchr.c) 
* [**ft_memcmp:**](/libft/ft_memcmp.c) 
* [**ft_strnstr:**](/libft/ft_strnstr.c) 
* [**ft_atoi:**](/libft/ft_atoi.c) 
* [**ft_calloc:**](/libft/ft_calloc.c) 
* [**ft_strdup:**](/libft/ft_strdup.c) 

### Part 2 - Additional functions

* [**ft_substr:**](/libft/ft_substr.c) returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.
* [**ft_strjoin:**](/libft/ft_strjoin.c) returns a new string, which is the result of the concatenation of `s1` and `s2`.
* [**ft_strtrim:**](/libft/ft_strtrim.c) returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.
* [**ft_split:**](/libft/ft_split.c) returns an array of strings obtained by splitting `s` using the character ’c’ as a delimiter. The array must end with a NULL pointer.
* [**ft_itoa:**](/libft/ft_itoa.c) returns a string representing the integer received as an argument.
* [**ft_strmapi:**](/libft/ft_strmapi.c) Applies the function `f` to each character of the string `s`, and passing its index as first argument to create a new string resulting from successive applications of `f`.
* [**ft_striteri:**](/libft/ft_striteri.c) Applies the function `f` on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to `f` to be modified if necessary.
* [**ft_putchar_fd:**](/libft/ft_putchar_fd.c) 
* [**ft_putstr_fd:**](/libft/ft_putstr_fd.c) 
* [**ft_putendl_fd:**](/libft/ft_putendl_fd.c) 
* [**ft_putnbr_fd:**](/libft/ft_putnbr_fd.c) 

### Bonus functions

