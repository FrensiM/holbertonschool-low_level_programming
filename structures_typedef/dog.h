#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct name
 * @name: name
 * @owner: owner
 * @age: age
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
