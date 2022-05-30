#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stadard outout
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print if succes
 * else if not opend or read return 0
 * else if the filename is NULL return 0
 * otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t to_read;
	ssize_t written;
	int fd;

	if (!(filename && letters))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	to_read = read(fd, buffer, letters);
	close(fd);

	if (to_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!to_read)
		to_read = letters;
	written = write(STDOUT_FILENO, buffer, to_read);
	free(buffer);

	if (written < 0)
		return (0);

	return (written);
}
