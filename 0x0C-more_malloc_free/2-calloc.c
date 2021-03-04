/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return:returns a pointer to the allocated memory,If nmemb or size is 0, then _calloc returns NULL ,If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *ar;
    unsigned int i;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);

    }
    ar = malloc(nmemb * size);

    if (ar == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < nmemb; i++)
        ar[i] = 0;

    return (ar);
    free(ar);
}
