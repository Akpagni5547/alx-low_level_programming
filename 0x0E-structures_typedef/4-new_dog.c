#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * dog_t *my_dog - typedef new name
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	char *name;
	float age;
	char *owner;

    dog_t *my_dog;

    my_dog = malloc (sizeof(dog_t));
    if (my_dog == NULL)
    return (NULL);

    my_dog->name = name;
    my_dog->age = age;
    my_dog->owner = owner;
    return my_dog;
}

int main(void)
{
    dog_t *my_dog

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog == NULL)
    return (NULL);
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}
