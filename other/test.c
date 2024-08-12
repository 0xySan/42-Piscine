#include <string.h>
#include <stdio.h>

int
main(int argc, char **argv)
{
    strncat(argv[0], argv[1], 10);
	printf("%s",argv[0]);
	return 0;
}