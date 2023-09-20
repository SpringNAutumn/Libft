// la libreria en teoria es facil ya que solo hay que nombrar las librerias que vamos a utilizar. podemos ir incluyendolas. 
// tambien las diferentes definiciones de las funciones que implementamos. 

#ifndef libft
#define libft

#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char*s1, const char *s2, size_t n);
void *ft_memset(void *b, int c, size_t len);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper (int c);
int ft_tolower (int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii( int c);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha (int c);
int atoi(const char *nptr);

#endif



