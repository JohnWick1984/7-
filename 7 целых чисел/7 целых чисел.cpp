﻿// 7 целых чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// Пользователь вводит с клавиатуры 7 целых чисел. Напишите 
//программу, которая определяет максимальное из этих 7 чисел.
// 
// 
//

#include <iostream>
using namespace std;

int main()
{
  // Обьявляем переменные   А1-А7 - вводимые целые числа
	int A1, A2, A3, A4, A5, A6, A7;
	// Предлагаем ввести числа
	cout << "Введите первое число \n";
	cin >> A1;

	cout << "Введите второе число \n";
	cin >> A2;

	cout << "Введите третье число \n";
	cin >> A3;

	cout << "Введите четвертое число \n";
	cin >> A4;

	cout << "Введите пятое число \n";
	cin >> A5;

	cout << "Введите шестое число \n";
	cin >> A6;

	cout << "Введите седьмое число \n";
	cin >> A7;

	// Сравниваем числа между собой и выводим результат на экран
	if ((A1 > A2) && (A1 > A3) && (A1> A4) && (A1 > A5) && (A1 > A6) && (A1 > A7))
	{
		cout << "Самое большое число " << A1;
	}
	else if ((A2 > A1) && (A2 > A3) && (A2 > A4) && (A2 > A5) && (A2 > A6) && (A2 > A7))
	{
		cout << "Самое большое число " << A2;
	}
	else if ((A3 > A1) && (A3 > A2) && (A3 > A4) && (A3 > A5) && (A3 > A6) && (A3 > A7))
	{
		cout << "Самое большое число " << A3;
	}
	else if ((A4 > A1) && (A4 > A2) && (A4 > A3) && (A4 > A5) && (A4 > A6) && (A4 > A7))
	{
		cout << "Самое большое число " << A4;
	}
	else if ((A5 > A1) && (A5 > A3) && (A5 > A4) && (A5 > A1) && (A5 > A6) && (A5 > A7))
	{
		cout << "Самое большое число " << A5;
	}
	else if ((A6 > A1) && (A6 > A3) && (A6 > A4) && (A6 > A5) && (A6 > A2) && (A6 > A7))
	{
		cout << "Самое большое число " << A6;
	}
	else
	{
		cout << "Самое большое число " << A7;
	}

}

