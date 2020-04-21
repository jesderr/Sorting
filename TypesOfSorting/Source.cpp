#include <iostream>
#include <time.h>

#define size 10

int FII(int array[size], int value_to_insert);
void insert(int array[size], int index_at, int index_from);

void conclusion(int array[size])
{
	std::cout << "Assorted array" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}
}

//void bubble_sort(int array[size])
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (array[j] > array[j+1])
//			{
//				int t = array[j];
//				array[j] = array[j+1];
//				array[j+1]= t;
//			}
//		}
//	}
//}

//void insertion(int array[size])
//{
//	int	sortedindex = 1;
//	while (sortedindex < size)
//	{
//		if ((array[sortedindex] < array[sortedindex - 1]) == false)
//		{
//			int Insert_index = FII(array, sortedindex);
//			insert(array, Insert_index, sortedindex);
//		}
//		sortedindex++;	
//	}
//}
//
//int FII(int array[size],int value_to_insert)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if ((array[i] < array[value_to_insert]) > 0)
//		{
//			return i;
//		}
//	}
//}
//
//void insert(int array[size], int index_at, int index_from)
//{
//	int temp = array[index_at];
//	array[index_at] = array[index_from];
//	for (int c = index_from; c > index_at; c--)
//	{
//		array[c] = array[c - 1];
//	}
//	array[index_at + 1] = temp;
//}

void quick_sort(int* array, int l, int r)
{
	int pivot;
	int l_hold = l;
	int r_hold = r;
	pivot = array[l];
	while (l < r)
	{
		while ((array[r] >= pivot) && (l < r))
			r--;
		if (l != r)
		{
			array[l] = array[r];
			l++;
		}
		while ((array[l] <= pivot) && (l < r))
			l++;
		if (l != r)
		{
			array[r] = array[l];
			r--;
		}
	}
	array[l] = pivot;
	pivot = l;
	l = l_hold;
	r = r_hold;
	if (l < pivot)
	{
		quick_sort(array, l, pivot - 1);
	}
	if (r > pivot)
	{
		quick_sort(array, pivot + 1, r);
	}
}

int main()
{
	int array[size] = { 10, 4, 2, 14, 67, 2, 11, 33, 1, 15 };

	std::cout << "Souce array" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}
	//bubble_sort(array);
	//insertion(array);
	quick_sort(array, 0, size - 1);

	std::cout << "\n" << std::endl;

	conclusion(array);

	system("pause");
	return 0;
}