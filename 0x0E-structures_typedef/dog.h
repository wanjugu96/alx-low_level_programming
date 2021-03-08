#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct that describes dogs age name and owner
 */
struct dog {
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog* d, char* name, float age, char* owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */ 
