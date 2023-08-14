#ifndef	GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define BUFFER_SIZE 64
char	*get_next_line(int fd);
char	*ft_strdup(char *src);

#endif

