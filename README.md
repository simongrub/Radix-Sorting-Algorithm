# Radix-Sorting-Algorithm

Radix sort is a non-comparative sorting algorithm that sorts numbers by processing individual digits. Here’s a breakdown of the code:

#### Functions Overview:

1. **printArray**: This function prints the elements of an array.

2. **getMax**: Finds the maximum element in the array, which is used to determine the number of digits in the largest number.

3. **countingSort**: Performs the counting sort based on a specific digit (place) of the numbers.

4. **radix**: Implements the radix sort algorithm by repeatedly applying counting sort for each digit place (units, tens, hundreds, etc.).

#### Main Function:

- The `main` function initializes an array of integers and calculates its size.
- It then calls `radix(arr, size)` to sort the array using the radix sort algorithm.
- Finally, it prints the sorted array using the `printArray` function.

#### How It Works:

- **Radix Sort Logic**: Radix sort sorts numbers by processing digits from the least significant to the most significant. It uses counting sort as a subroutine to sort numbers based on each digit place (units, tens, hundreds, etc.).

- **Counting Sort**: The `countingSort` function calculates counts of elements based on a specific digit place, computes cumulative counts, and positions elements in the sorted order.

#### Example:

Given the array `{121, 432, 564, 23, 1, 45, 788}`, the code will sort it in ascending order using radix sort and print the sorted array.

This implementation efficiently sorts integers using the radix sort technique, leveraging counting sort for each digit place to achieve the final sorted result.

For more details, refer to the specific functions and their implementations in the provided C code.
