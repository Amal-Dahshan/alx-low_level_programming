#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: create new data type
*/
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} puppy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
