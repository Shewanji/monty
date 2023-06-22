#include "monty.h"

/**
 * close_stream - closes the file stream and sets it to NULL
 */

void close_stream(void)
{
	if (arguements->stream == NULL)
		return;

	fclose(arguements->stream);
	arguements->stream = NULL;
}
