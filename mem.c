#include "main.h"

unsigned int _memcpy(buffer_t *oup, const char *source, unsigned int var);
void free_buffer(buffer_t *oup);
buffer_t *buff_init(void);

/**
 * _memcpy - the func is called _memcpy
 * memory_copy - copies var fro, memory to source
 * @oup: bufft structure
 * @source: pointer to memory
 * @var: num copied
 * Return: num that copied
*/
unsigned int _memcpy(buffer_t *oup, const char *source, unsigned int var)
{
	unsigned int ndx;

	for (ndx = 0; ndx < var; ndx++)
	{
		*(oup->buffer) = *(source + ndx);
		(oup->len)++;

		if (oup->len == 1024)
		{
			write(1, oup->start, oup->len);
			oup->buffer = oup->start;
			oup->len = 0;
		}

		else
			(oup->buffer)++;
	}

	return (var);
}

/**
 * buff_free - frees bufft
 * @oup: freed bufft
*/
void buff_free(buffer_t *oup)
{
	free(oup->start);
	free(oup);
}

/**
 * buff_init - initialize var bufft
 * Return: pointer to buuft
*/
buffer_t *buff_init(void)
{
	buffer_t *oup;

	oup = malloc(sizeof(buffer_t));
	if (oup == NULL)
		return (NULL);

	oup->buffer = malloc(sizeof(char) * 1024);
	if (oup->buffer == NULL)
	{
		free(oup);
		return (NULL);
	}

	oup->start = oup->buffer;
	oup->len = 0;

	return (oup);
}
