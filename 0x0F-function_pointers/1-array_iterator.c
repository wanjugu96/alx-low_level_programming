#include "function_pointers.h"

/**
 * array_iterator - executes function given as param on each []
 * @array: array to exec func on
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int* array, size_t size, void (*action)(int))
{
    int i = 0;
    while (i < size)
    {
        action(array[i]);
        i++;
    }
}
