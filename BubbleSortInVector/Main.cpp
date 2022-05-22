#include <vector>
#include <iostream>

std::vector<int> vecNumber;

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
	vecNumber.push_back(numbers);
	for (int i = 0; i < vecNumber.size() - 1; i++)
	{
		for (int j = 0; j < (vecNumber.size() - 1 - i); j++)
		{
			if (vecNumber[j] > vecNumber[j + 1])
			{
				int temp = vecNumber[j];
				vecNumber[j] = vecNumber[j + 1];
				vecNumber[j + 1] = temp;
			}
		}
	}
}

void BubbleSortWithOptimisation(int numbers)
{
	int i = 0;
	bool isSwapped = false;
	vecNumber.push_back(numbers);
	do
	{
		isSwapped = false;
		for (int j = 0; j < (vecNumber.size() - 1 - i); j++)
		{
			if (vecNumber[j] > vecNumber[j + 1])
			{
				int temp = vecNumber[j];
				vecNumber[j] = vecNumber[j + 1];
				vecNumber[j + 1] = temp;
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
	for (int i = 0; i < vecNumber.size(); i++)
	{
		std::cout << vecNumber[i] << std::endl;
	}
}