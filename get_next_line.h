#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		get_next_line_read(int fd, char **line, char **stat);
void	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2, long n);
char	*ft_substr_fr(char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		have_stat(char **line, char **stat);
int		dont_have_stat(char **line, char **stat, long count, char *buf);

#endif