#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int i;
	if (ac == 0 || av == NULL)
	{
		return NULL;
	}
	size_t total_length = 0;
	for (i = 0; i < ac; i++) {
		total_length += strlen(av[i]) + 1;
	}
	char *result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL) {
		return NULL;
	}
	size_t current_pos = 0;

	for (i = 0; i < ac; i++) {
		size_t arg_length = strlen(av[i]);

		strcpy(result + current_pos, av[i]);
		current_pos += arg_length;

		result[current_pos] = '\n';
		current_pos++;
	}
	result[current_pos] = '\0';
	return result;
}
