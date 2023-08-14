#include "get_next_line.h"

char	*ft_strdup(char *src)
{
	int	length = 0;
	
	while (src[length] != '\0')
		length++;
	char	*dup = malloc(sizeof(char)*(length + 1));
	
	if (dup == NULL)
		return NULL;
	for (int i = 0; i <= length; i++)
		dup[i] = src[i];
	return dup;
}

