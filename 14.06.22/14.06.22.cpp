#include <iostream>

using namespace std;

int Function(int arrayInt[], int sizeInt);
float Function(float arrayFloat[], float sizeFloat);
double Function(double arrayDouble[], double sizeDouble);

int main() // Вариант 5
{
	setlocale(LC_ALL, "Rus");

	cout << "---Вариант 5---\n\n" << endl;

	cout << "Запонение массива int-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeInt;
	cin >> sizeInt;

	int* arrayInt = new int[sizeInt];

	for (int i = 0; i < sizeInt; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayInt[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeInt; i++)
		cout << "[" << i << "] = " << arrayInt[i] << "\t" << endl;

	int resultInt = Function(arrayInt, sizeInt);

	cout << "\nЗапонение массива float-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeFloat;
	cin >> sizeFloat;

	float* arrayFloat = new float[sizeFloat];

	for (int i = 0; i < sizeFloat; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayFloat[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeFloat; i++)
		cout << "[" << i << "] = " << arrayFloat[i] << "\t" << endl;

	float resultFloat = Function(arrayFloat, sizeFloat);

	cout << "\nЗапонение массива double-ов\nВведите желаемое количество элементов массива..." << endl;
	int sizeDouble;
	cin >> sizeDouble;

	double* arrayDouble = new double[sizeDouble];

	for (int i = 0; i < sizeDouble; i++)
	{
		cout << "Введите " << i << "-й элемент массива..." << endl;
		cin >> arrayDouble[i];
	}

	cout << "\nПолучившийся массив: \n" << endl;
	for (int i = 0; i < sizeDouble; i++)
		cout << "[" << i << "] = " << arrayDouble[i] << "\t" << endl;

	double resultDouble = Function(arrayDouble, sizeDouble);

	cout << "Максимальный эл-т массива int-ов = " << resultInt  << "\n" << endl;
	cout << "Максимальный эл-т массива float-ов = " << resultFloat << "\n" << endl;
	cout << "Максимальный эл-т массива double-ов = " << resultDouble << "\n" << endl;
}

int Function(int arrayInt[], int sizeInt) // int
{
	int max = 0;

	for (int i = 0; i < sizeInt; i++)
	{
		if (arrayInt[i] > max)
			max = arrayInt[i];
	}

	return max;
}

float Function(float arrayFloat[], float sizeFloat) // float
{
	int max = 0.0;

	for (int i = 0; i < sizeFloat; i++)
	{
		if (arrayFloat[i] > max)
			max = arrayFloat[i];
	}

	return max;
}

double Function(double arrayDouble[], double sizeDouble) // double
{
	double max = 0.0;

	for (int i = 0; i < sizeDouble; i++)
	{
		if (arrayDouble[i] > max)
			max = arrayDouble[i];
	}

	return max;
}