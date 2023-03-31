/**
 * reverse_array - a function to reverse the content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp, startIndex, endIndex;

	startIndex = 0;
	endIndex = n - 1;
	/**
	 * store value in array a into temp variable
	 * then place the last array in the first array then place
	 * value in temp to last array
	*/
	while (startIndex < endIndex)
	{
		temp = a[startIndex];
		a[startIndex] = a[endIndex];
		a[endIndex] = temp;
		startIndex++;
		endIndex--;
	}
}

