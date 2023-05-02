#include "main.h"

/** get_function - 
 *
 */
void read_line()
{
	char *buf = NULL;
	size_t len = 0;

	getline(&buf, &len, stdin);
	printf("buf: %s\n", buf);
	get_function(buf);
}
