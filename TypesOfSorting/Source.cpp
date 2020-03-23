#include <iostream>
#include <time.h>

#define size 11

void bubble_sort(int array[11])
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				int t = array[j];
					array[j] = array[j+1];
					array[j+1]= t;
			}
		}
	}
}

int main()
{
	int array[size];
	//srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		std::cout << "array[" << i << "]=";
		std::cin >> array[i];
	//	array[i] = rand() % 20 - 10;
	}
	std::cout << "Souce array" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}

	bubble_sort(array);

	std::cout << "\n";

	std::cout << "Assorted array" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << "\t";
	}

	std::cout << "\n";

	system("pause");
	return 0;
}