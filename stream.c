#include "monty.h"
#include <fcntl.h>

/**
 * getting_stream_failed - handles error when file reading fails
 * @fileName: the name of the file that failed to open
 */

void getting_stream_failed(char *fileName)
{
	dprintf(stderr, "Error: Can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}
/**
 * get_stream - gets the streamfor reading from the specified files
 * @fileName: Name of the files to open and set as the stream
 */
void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		getting_stream_failed(fileName);
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		getting_stream_failed(fileName);
	}
}
