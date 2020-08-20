#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT 64

void hello_pointer(void)
{
	char *name;
	printf("%p\n", &name);

	name = malloc(sizeof(char) * MAX_INPUT);

	if (name == NULL)
	{
		puts("Unable to allocate memory.");
		return;
	}

	printf("Enter your name: ");
	fgets(name, MAX_INPUT, stdin);
	printf("Hello, %s", name);

	return;
}
