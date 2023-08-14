#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1] = {0};
	int	index = 0;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return 0;
	while (read(fd, &buffer[index], 1) > 0)
	{
		if (buffer[index] == '\n')
			break;
		index++;
		
		if (BUFFER_SIZE == index)
			break;
	}
	buffer[index] = '\0';
	
	if (index == 0)
		return NULL;
	return ft_strdup(buffer);
}
