#include<iostream>
#include<cmath>
#include <string>
#include <limits>
#include "ext.hpp"
using namespace std;
using namespace ext;
const int MAX_INPUT_SIZE = 256;
int main()
{
	/*
	Задание №1
	выведите адрес переменной val
	создайте указатель для хранения адреса переменной val
	сохраните адрес переменной val в созданный указатель
	выведите значение переменной val, используя указатель
	int val = 10;
	int*ptr;
	ptr = &val;
	cout << ptr << endl;
	cout << *ptr << endl;
	Пусть объявлены следующие переменные:
	Объявите и проинициализируйте указатели на вышеобъявленные переменные.
	Какой размер имеют объявленные указатели? Проверьте с помощью оператора sizeof
	С помощью объявленных указателей:
	увеличьте значение переменной a на 1
	присвойте переменной b значение 0.25
	выведите удвоенное значение переменной f
	выведите посчитайте остатот от деления на 10 переменной ll
	unsigned int a = 5U,*ptr1;
	double b = 0.8,*ptr2;
	const float f = 0.5F;
	const float *ptr3=&f;
	const long long ll = 123LL;
	const long long *ptr4=&ll;
	ptr1 = &a;
	cout << sizeof(ptr1) << endl;
	cout << ptr1 << endl;
	cout << *ptr1 << endl;
	ptr2 = &b;
	cout << sizeof(ptr2) << endl;
	cout << ptr2 << endl;
	cout << *ptr2 << endl;
	cout << sizeof(ptr3) << endl;
	cout << ptr3 << endl;
	cout << *ptr3 << endl;
	cout << sizeof(ptr4) << endl;
	cout << ptr4 << endl;
	cout << *ptr4 << endl;
	a = *ptr1 + 1;
	b = *ptr2 * 0.3125;
	cout << *ptr3 * 2 << endl;
	cout << *ptr4 % 10 << endl;
	Задание №2
	Что выведет на экран следующий код?
	Прокоментируйте каждую строку, запишите промежуточные значения переменных.

	int t[4] = {8,4,2,1};
	int *p1 = t + 2//элемент номер 2 (значение:2)
		, *p2 = p1 - 1;//элемент номер 1 (значение:4)
	p1++;//элемент номер 3 (значение:1)
	cout << *p1 - t[p1 - p2] << endl;//1-t[номер 3-номер 1]=1-2=-1


	int data[] = {1,2,3,4,5};
	Объявите указатель на первый элемент массива*/

	/*int data[] = { 1,2,3,4,5 },sum=0;
	int *ptr = data;
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << endl;
	}
	for (int j = 0; j < 5; j++)
	{
		data[j] = *(ptr + j) * 2;
		cout << data[j] << endl;
	}
	for (int k = 0; k < 5; k++)
	{
		sum = *(ptr + k) +sum;
	}
	cout << sum << endl;
	/*С помощью цикла for и объвленного указателя выведите каждый элемент массива в консоль.
	С помощью цикла for и объвленного указателя увеличьте каждый элемент массива в 2 раза
	и посчитайте сумму получившихся элементов массива.
	Выведите полученный результат.
	Заданий №3
	1.	Сгенерировать массив из 20 рандомных элементов из диапазона [-100, 100].
	2.	Объявите указатель на первый элемент массива.
	3.	С помощью цикла for и объявленного указателя выведите массив в консоль.
	4.	Используя дополнительный указатель найдите максимальный элемент массива.
	5.	Выведите его индекс и значение. (Для вывода индекса использовать арифметику указателей).
	При обходе массива использовать указатели, запрещено обращаться к элементам массива по индексам.
		int mass[20];
	int *ptr = mass;
	int *max = mass;
	for (int i = 0; i < 20; i++) mass[i] = GetRandomValue(-100, 100);

	for (int i = 0; i < 20; i++)
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl;

	for (int i = 0; i < 20; i++)
	{
		if (*max < *(mass + i)) max = mass + i;
	}
	cout << (max - mass) << ": " << *max << endl;
	Задание №4
	Пусть задан некоторый символьный массив, проинициализированный строковым литералом.
	Например const char data[] = "abcdefghijklmnopqrstuvwxyz";
	Пользователь вводит с клавиатуры один символ.
	Необходимо вывести позицию, на которой введенный пользователем символ встретился первый раз.
	Если введенного символа в строке нет вывести -1.
	Тестовые данные			Ожидаемый результат
	d				4
	z				26
	!				-1
		const char data[] = "abcdefghijklmnopqrstuvwxyz";
	const char *ptr = data;
	char x;
	int i = -1;
	cin >> x;
	while (*ptr != '\0')
	{
		if (x == *ptr)
		{
			i = (ptr - data) + 1;
			break;
		}
		ptr++;
	}
	cout << i << endl;
	Задание №5
	Написать программу, которая сравнивает две строки, которые вводит пользователь.
	Сравнение реализовать посимвольно.
	Если введенные строки равны, вывести 1, если строки не равны вывести 0.
	Строки могут быть разных размеров. Размер введенной строки не может превышать 256 символов.
	Строки, введенные пользователем можно получить следующим образом:
	#include <iostream>
	using namespace std;
	int main()
	{
	char line[256];
	cin.getline(line, 256);
	}
	bool i = false;
	char line1[MAX_INPUT_SIZE];
	char line2[MAX_INPUT_SIZE];
	cin.getline(line1, MAX_INPUT_SIZE);
	cin.getline(line2, MAX_INPUT_SIZE);
	char * ptr1 = line1;
	char * ptr2 = line2;
	while ((*ptr1 != '\0') || (*ptr2 != '\0'))
	{
		if (*ptr1 == *ptr2)
		{
			i = true;
		}
		else
		{
			i = false;
		}
		++ptr1;
		++ptr2;
	}
	if (i)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	*/
}