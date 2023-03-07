/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmalman <ahmalman@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:11:28 by ahmalman          #+#    #+#             */
/*   Updated: 2023/03/07 17:26:56 by ahmalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_bzero(void *h, size_t l);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void	*s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t o);
void	*ft_memset(void *b, int c, size_t n);
char	*ft_strchr(const char *e, int a);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *c);
int		ft_strncmp(const char *z1, const char *p2, size_t w);
size_t	ft_strlcpy(char*dst, const char*src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char*dst, const char*src, size_t dstsize);
char	*ft_strrchr(const char *j, int z);
int		ft_tolower(int g);
int		ft_toupper(int c);

#endif