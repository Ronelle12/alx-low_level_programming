/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char used for initialization.
 *
 * Return: A pointer to the created array, or NULL if it fails.
  */
char *create_array(unsigned int size, char c)
{
	/* Check if size is 0 */
if (size == 0)
	return (NULL);

	/* Allocate memory for the array */
char *array = malloc(size * sizeof(char));

	/* Check if memory allocation is successful */
if (array == NULL)
	return (NULL);

	/* Initialize each element of the array with the specified char */
for (unsigned int i = 0; i < size; i++)
	array[i] = c;

return (array);
}
