#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(0));
	rand();

	//------------------------------------------
	// 1. Ввести массив из 5 чисел, а затем вывести его в обратном порядке.

	const int SIZE = 5;
	int num[SIZE];

	cout << "Введите 5 чисел: \n";
	for (int i = 0; i < SIZE; i++) 
	{
		cin >> num[i];
	}

	cout << "Массив в обратном порядке: \n";
	for (int i = SIZE - 1; i >= 0; i--) 
	{
		cout << num[i] << " ";
	}

	cout << "\n";

	//------------------------------------------
	// 2. Создать массив из 20 случайных чисел. Вывести все элементы массива с чётными индексами.

	const int SIZE = 20;
	int num[SIZE];

	for (int i = 0; i < SIZE; i++) 
	{
		num[i] = rand() % 100;
	}

	cout << "Элементы массива с чётными индексами: \n";
	for (int i = 0; i < SIZE; i += 2) 
	{
		cout << "num[" << i << "] = " << num[i] << "\n";
	}

	//------------------------------------------
	// 3. Создать массив из 10 случайных чисел в диапазоне от -20 до 20.
	// Определить количество, сумму и среднее арифметическое положительных элементов массива.

	const int SIZE = 10;
	int num[SIZE];
	int posCount = 0;
	int posSum = 0;

	for (int i = 0; i < SIZE; i++) 
	{
		num[i] = rand() % 41 - 20;
	}

	for (int i = 0; i < SIZE; i++) 
	{
		if (num[i] > 0) 
		{
			posCount++;
			posSum += num[i];
		}
	}

	cout << "Массив чисел: ";
	for (int i = 0; i < SIZE; i++) 
	{
		cout << num[i] << " ";
	}
	cout << "\n";

	if (posCount > 0)
	{
		double average = static_cast<double>(posSum) / posCount;
		cout << "Кол-во положительных чисел: " << posCount << "\n";
		cout << "Сумма положительных чисел: " << posSum << "\n";
		cout << "AVG: " << average << "\n";
	}
	else 
	{
		cout << "Нет положительных чисел в массиве\n";
	}

	//------------------------------------------
	// 4. Написать программу, которая предлагает пользователю ввести число, 
	// и затем подсчитывает, сколько раз это число встречается в массиве на 100 случайных элементов.

	const int SIZE = 100;
	int num[SIZE];     
	int findNum;    
	int count = 0;

	for (int i = 0; i < SIZE; i++) 
	{
		num[i] = rand() % 50;
	}

	cout << "Введите число для поиска в массиве: ";
	cin >> findNum;

	for (int i = 0; i < SIZE; i++) 
	{
		if (num[i] == findNum)
		{
			count++;
		}
	}

	cout << findNum << " встречается в массиве " << count << " раз\n";

	//------------------------------------------
	// 5. Создать символьный массив из 100 случайных элементов. Определить, сколько в нём цифр, букв и знаков пунктуации.

	const int SIZE = 100;
    char characters[SIZE];

    int digitsCount = 0;
    int lettersCount = 0;
    int punctCount = 0;

	for (int i = 0; i < SIZE; i++)
	{
		characters[i] = rand() % 95 + 32;

		if (isdigit(characters[i])) 
		{
			digitsCount++;
		}
		else if (isalpha(characters[i])) 
		{
			lettersCount++;
		}
		else if (ispunct(characters[i])) 
		{
			punctCount++;
		}
	}

	cout << "Символьный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << characters[i] << " ";
	}
	cout << "\n";

	cout << "Количество цифр: " << digitsCount << "\n";
	cout << "Количество букв: " << lettersCount << "\n";
	cout << "Количество знаков пунктуации: " << punctCount << "\n";

	//------------------------------------------
	// 6. Создать массив из 10 целых случайных чисел. 
	// Изменить порядок следования элементов массива на противоположный (1-й элемент меняется с 10-м, 2-й элемент с 9-м и тд).

	const int SIZE = 10;
	int num[SIZE];

	cout << "Массив чисел: ";
	for (int i = 0; i < SIZE; i++) 
	{
		num[i] = rand() % 100;
		cout << num[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < SIZE / 2; i++)
	{
		int temp = num[i];
		num[i] = num[SIZE - 1 - i];
		num[SIZE - 1 - i] = temp;
	}

	cout << "Массив после изменения порядка: ";
	for (int i = 0; i < SIZE; i++) 
	{
		cout << num[i] << " ";
	}
	cout << "\n";

}

