

#ifndef DOG
#define DOG

/**
 * struct dog - a new dog type
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
