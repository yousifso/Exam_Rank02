#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int
	main(void)
{
	int		r;
	char	*line;
	int fd = open("test.txt", O_RDONLY);

	line = "";
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
return 0;
}
