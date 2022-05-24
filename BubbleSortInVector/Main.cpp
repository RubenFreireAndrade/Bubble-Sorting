#include <vector>
#include <iostream>

std::vector<int> vecContainer;

void PrintVecArray();
void BubbleSort(int numbers);
void BubbleSortWithOptimisation(int numbers);

int main()
{
	int input;
	int numberOfElem = 4;
	for (int i = 0; i < numberOfElem; i++)
	{
		std::cout << "Choose a number and submit" << std::endl;
		std::cin >> input;
		BubbleSortWithOptimisation(input);
	}
	PrintVecArray();
	return 0;
}

void BubbleSort(int numbers)
{
	vecContainer.push_back(numbers);
	for (int i = 0; i < vecContainer.size() - 1; i++)
	{
		for (int j = 0; j < (vecContainer.size() - 1 - i); j++)
		{
			if (vecContainer[j] > vecContainer[j + 1])
			{
				int temp = vecContainer[j];
				vecContainer[j] = vecContainer[j + 1];
				vecContainer[j + 1] = temp;
			}
		}
	}
}

void BubbleSortWithOptimisation(int numbers)
{
	int i = 0;
	bool isSwapped = false;
	vecContainer.push_back(numbers);
	do
	{
		isSwapped = false;
		for (int j = 0; j < (vecContainer.size() - 1 - i); j++)
		{
			if (vecContainer[j] > vecContainer[j + 1])
			{
				int temp = vecContainer[j];
				vecContainer[j] = vecContainer[j + 1];
				vecContainer[j + 1] = temp;
				isSwapped = true;
			}
		}
		i++;
	} while (isSwapped);
}

void PrintVecArray()
{
	std::cout << "Numbers are sorted" << std::endl;
	std::cout << "================================================" << std::endl;
	for (int i = 0; i < vecContainer.size(); i++)
	{
		std::cout << vecContainer[i] << std::endl;
	}
}