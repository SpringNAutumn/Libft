/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:37:06 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/21 18:37:06 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_H
#define libft_H

#include <ctype.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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
char* ft_strnstr (const char *big, const char *little, size_t len);
int ft_atoi(const char *nptr);
void *ft_calloc (size_t count, size_t size);
char *ft_strdup(const char *s1);


char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin (char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// bonus part 


#endif