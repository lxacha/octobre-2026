#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_atoi(const char *nptr);
void	ft_bzero(char *a, int n);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
char 	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memcpy(char *dest, char *src, int size_n);
void	ft_memmove(char *dest, char *src, int n_size);
void	ft_memset(char *a, int c, int n);
void	ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char **ft_split(char const *s, char c);
int		ft_strlen(const char *s);
char	ft_strchr(char *str, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	function_n_2(unsigned int d, char *a);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strlcat(char *dest, char *src, int n_size);
int	ft_strlcpy(char *dest, char *src, int n_size);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);;
char	ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}				t_list;


#endif