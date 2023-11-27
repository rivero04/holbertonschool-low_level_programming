#ifndef DOG_H
#define DOG_H
/**
 * struct dog - un tipo de datos con estructura amapola
 *@name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 *
 * Descripción: representa un perro, su nombre, edad y su dueño.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef para struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
