#ifndef MY_DOG
#define MY_DOG

/**
 *struct dog - type struct
 *@name: variable char
 *@age: variable float
 *@owner: variable char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
