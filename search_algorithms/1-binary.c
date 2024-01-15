#include "search_algos.h"
/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
    size_t middle, left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (size_t i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right]);

        middle = left + (right - left) / 2;

        if (array[middle] == value)
            return (middle);

        if (array[middle] > value)
            right = middle - 1;
        else
            left = middle + 1;
    }

    return (-1);
}
