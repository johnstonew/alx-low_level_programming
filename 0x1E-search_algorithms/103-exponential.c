#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound >= size ? size - 1 : bound);

	return (binary_search(array, bound / 2,
			bound >= size ? size - 1 : bound, value));
}

/**
 * binary_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Leftmost index of the subarray to search in
 * @right: Rightmost index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers between two indexes
 *
 * @array: Pointer to the first element of the array to print
 * @left: Leftmost index of the subarray to print
 * @right: Rightmost index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
