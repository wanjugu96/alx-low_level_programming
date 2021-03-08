#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog* d)
{
   
    if (d != NULL) 
    {
        printf("Name: %s\n", d->name);
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner);
    }
    if (d->name == NULL)
    {
        printf("name: (nil)\n");
    }
    if (d->owner == NULL)
    {
        printf("owner: (nil)\n");
    }
    if (d->age == 0)
    {
        printf("age: (nil)\n");
    }
  

}
