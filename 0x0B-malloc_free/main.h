#ifndef _MAIN_H_
#define _MAIN_H_
/*int main(void);*/
void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int main(int ac, char *av[]);
#endif
