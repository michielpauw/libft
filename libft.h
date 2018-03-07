/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpauw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:04:39 by mpauw             #+#    #+#             */
/*   Updated: 2018/03/07 17:13:04 by mpauw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define RAD 0.0174532925

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <math.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_3v
{
	double			v[3];
}					t_3v;

void				*ft_memcpy(void *dst, const void *src, size_t n);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_putchar(unsigned int c);
void				ft_putstr(char const *s);
char				*ft_itoa(long long int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int i);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcati(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_numlen(int n);
void				ft_lstaddright(t_list **alst, t_list *new);
int					ft_lstaddnewr(t_list **alst, void const *content,
		size_t content_size);
int					ft_lstaddnewl(t_list **alst, void const *content,
		size_t content_size);
size_t				ft_sqrt(size_t nb);
size_t				ft_power(int nb, size_t power);
size_t				ft_factorial(size_t nb);
size_t				ft_next_prime(int nb);
int					*ft_factorization(int nb);
int					ft_isprime(int n);
char				*ft_convert_base(const char *nbr, const char *base_from,
		const char *base_to);
size_t				ft_sqrt_fl(size_t nb);
size_t				ft_sqrt_cl(size_t nb);
int					get_next_line(const int fd, char **line);
double				ft_atod(const char *s);
void				ft_free_array(void **to_free);
double				ft_3v_dot_product(t_3v v1, t_3v v2);
double				ft_get_3v_size(t_3v v);
t_3v				ft_3v_add(t_3v v1, t_3v v2);
t_3v				ft_3v_subtract(t_3v v1, t_3v v2);
t_3v				ft_get_3v_unit(int dir);
void				ft_make_3v_unit(t_3v v);
t_3v				ft_cross_product(t_3v v1, t_3v v2);
void				ft_3v_scalar(t_3v *v, double s);
void				ft_rotate_3v(t_3v *v, int axis, double angle, int rad);
t_3v				ft_zero_3v(void);
t_3v				ft_init_3v(double a, double b, double c);
char				*ft_brace_content(char *input, char o, char c);
void				ft_realloc(void **s, size_t old_size, size_t new_size);
char				*ft_int_to_base(unsigned long long nbr,
			const char *base_to);
char				*ft_strset(char c, size_t length);

#endif
