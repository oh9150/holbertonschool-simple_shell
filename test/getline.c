#include "main.h"

int main()
{
	char *buf;
	size_t buf_size = 32;
	size_t len;

	buf = (char *)malloc(sizeof(char) * buf_size);
	if (buf == NULL)
	{
		printf("failed to allocate buffer");
			return (-1);
	}
	printf("$ ");
	len = getline(&buf, &buf_size, stdin);
	printf("%s", buf);

	return (0);
}
