#include<iostream>
#include<cmath>
#include <string>
#include <limits>
using namespace std;
/*
Задание №1
Создать точку Point, используйте две поля x, y типа float.
struct Point {float x; float y;};
Создать и проинициализировать переменную типа Point.
struct Point {1.2;1.4;};
Создать переменную типа Point и проинициализировать ее данные с клавиатуры.
struct Point { float x; float y; };
int main()
{
	Point one;
	cin >> one.x;
	cin >> one.y;
	cout << one.x << endl;
	cout << one.y;
}
	Вывести на экран значения x, y вышеобъявленных переменных.
	Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
	Координаты точки и радиус пользователь вводит с клавиатуры.
	Для хранения координат точки использовать структуру Point.
struct Point {float x; float y;};
	int main()
{
		int R;
		cin >> R;
Point one;
cin >> one.x;
cin >> one.y;
if (one.x*one.x + one.y*one.y == R*R) {
	cout << "Принадлежит" << endl;
}
}
	Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
	Координаты точек пользователь вводит с клавиатуры.
	Для хранения координат точек использовать структуру Point.
	Рассчитанную точку середины отрезка также хранить как структуру Point.
	Вывести координаты полученной точки в консоль.
struct Point {float x; float y;};
	int main()
{
Point one;
cin >> one.x;
cin >> one.y;
Point two;
cin >> two.x;
cin >> two.y;
Point three;
three.x = (two.x + one.x) / 2;
three.y = (two.y + one.y) / 2;
cout << three.x << endl;
cout << three.y << endl;
}
	Задание №2
	Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
	Создать и проинициализировать переменную типа Circle.
	Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
	Вывести на экран данные, сохраненные в вышеобъявленных переменных.
	Даны две переменные типа Circle.
	Написать программу, которая определяет пересекаются ли окружности,
	описанные данными переменными.
struct Point { float x; float y; };
struct Circle { int r;  Point center; };
int main()
{
	Circle one;
	cin >> one.r;
	cin >> one.center.x;
	cin >> one.center.y;
	Circle two;
	cin >> two.r;
	cin >> two.center.x;
	cin >> two.center.y;
	if (((pow((two.center.x - one.center.x),2) + pow((two.center.y - one.center.y),2) ) > pow((one.r - two.r),2)) && ((pow((two.center.x - one.center.x), 2) + pow((two.center.y - one.center.y), 2)) < pow((one.r + two.r),2))){
		cout << "Пересекаются";
	}
}
	Задание №3
	Создать перечисление (enum) Color, для хранения 7 цветов радуги.
	Создать структуру Triangle, содержащее поле типа Color
	и массив для хранения трех элементов типа int (длины сторон).
	Создать и проинициализировать переменную типа Triangle корректными данными.
	Вывести на экран данные, сохраненные в вышеобъявленной переменной.
	Значение поля Color вывести в текстовом виде. (использовать конструкцию switch).
	Рассчитать и вывести на экран периметр вышеобъявленного треугольника.
enum Color { Red=0,Orange,Yellow,Green,Cyan,Blue,Purple};
struct Triangle { Color text; int side[3]; };
int main()
{
	Triangle one;
	int p=0;
	for (int i = 0; i < 3; ++i)
	{
		cin >> one.side[i];
		p += one.side[i];
	}
	int l;
	l= one.text
	cin >> l
	switch (l)
	{
	case(Red):
		cout << "Red" << endl;
		break;
	case(Orange):
		cout << "Orange" << endl;
		break;
	case(Yellow):
		cout << "Yellow" << endl;
		break;
	case(Green):
		cout << "Green" << endl;
		break;
	case(Cyan):
		cout << "Cyan" << endl;
		break;
	case(Blue):
		cout << "Blue" << endl;
		break;
	case(Purple):
		cout << "Purple" << endl;
		break;
	default:
		cout << "У нас только 7 цветов" << endl;
	}
	for (int i = 0; i < 3; ++i)
	{
		cout << one.side[i] << endl;
	}
	cout << p << endl;
	cout << l << endl;
}
	Задание №4
	Создать массив из 20 элеметнов типа Point.
	Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
	Выведите на экран координаты:
		- точки с наименьшей x координатой
		- двух точек, расстояние между которыми минимально.
struct Point { float x; float y; };
int main()
{
	int minx = numeric_limits<int>::max(), minPoint = numeric_limits<int>::max(), k, k1;
	Point one[20];
	for (int i = 0;i < 20;++i)
	{
		one[i].x = GetRandomValue(1, 100);
		one[i].y = GetRandomValue(1, 100);
	}
	for (int i = 0;i < 20;++i)
	{
		cout << one[i].x << " ";
		cout << one[i].y << endl;
	}
	for (int i = 0;i < 20;++i)
	{
		if (one[i].x < minx)
		{
			minx = one[i].x;
		}
	}
	for (int i = 0;i < 20;++i)
	{
		for (int j = 0;j < 20;++j)
		{
			if (i == j)
			{
				continue;
			}
			else
			{
				if (pow(one[i].x - one[j].x, 2) + pow(one[i].y - one[j].y, 2) < pow(minPoint, 2))
				{
					minPoint = sqrt(pow(one[i].x - one[j].x, 2) + pow(one[i].y - one[j].y, 2));
					k = i;
					k1 = j;
				}
			}
		}
	}
	cout << minPoint << " " << minx << " " << k << " " << k1 << endl;
}
	Задание №5
	Создать массив из 100 элементов типа Triangle.
	Проинициализировать его случайными значениями (длина стороны от 1 до 10).
	При инициализации проверять, что треугольник с такими длинами сторон может существовать.
	(Длина каждой стороны должна быть строго меньше длин суммы двух других сторон).
	Обработать полученный массив треугольников и вывести на экран следующую информацию:
		- вывести на экран все треугольники, периметр которых превышает значение, введенное с клавиатуры.
		  Если подходящих треугольников нет, вывести соответствующее сообщение.
		- количество треугольников каждого цвета
enum Color { Red = 1, Orange, Yellow, Green, Cyan, Blue, Purple };
struct Triangle { Color text; int side[3];int P; };
int main()
{
	int l, P, k = 0, kR = 0, kO = 0, kY = 0, kG = 0, kC = 0, kB = 0, kP = 0;
	cin >> P;
	Triangle one[100];
	for (int i = 0;i < 100;++i)
	{
		one[i].side[1] = 2;
		one[i].side[2] = 1;
		one[i].side[0] = 1;
		while ((one[i].side[1] >= one[i].side[2] + one[i].side[0]) || (one[i].side[2] >= one[i].side[1] + one[i].side[0]) || (one[i].side[0] >= one[i].side[1] + one[i].side[2]))
		{
			for (int j = 0;j < 3;++j)
			{
				one[i].side[j] = GetRandomValue(1, 10);
			}
		}
		l = one[i].text;
		l = GetRandomValue(1, 7);
		switch (l)
		{
		case(Red):
			++kR;
			break;
		case(Orange):
			++kO;
			break;
		case(Yellow):
			++kY;
			break;
		case(Green):
			++kG;
			break;
		case(Cyan):
			++kC;
			break;
		case(Blue):
			++kB;
			break;
		case(Purple):
			++kP;
			break;
		}
		one[i].P = one[i].side[1] + one[i].side[2] + one[i].side[0];
		if (one[i].P > P)
		{
			cout << one[i].side[1] << " " << one[i].side[2] << " " << one[i].side[0] << endl;
			k++;
		}
	}
	if (k == 0)
	{
		cout << " No Triangles";
	}
	cout << "Red: " << kR << " "
		<< "Orange: " << kO << " "
		<< "Yellow: " << kY << " "
		<< "Green: " << kG << " "
		<< "Cyan: " << kC << " "
		<< "Blue: " << kB << " "
		<< "Purple: " << kP;
}
	Задание №6
	Написать программу, которая проверяет правильность заданных значений даты.
	Дату хранить с использованием структуры.
	Тестовые данные				Ожидаемый результат
	1 1 1992					Дата корректна
	30 6 1992					Дата корректна
	31 7 1992					Дата коррентна
	31 9 1994					Дата некорректна
	32 1 1992					Дана некорректна
	1 13 1992					Дата некорректна
	29 2 1993					Дата некорректна
	29 2 2004					Дата корректна
	29 2 1900					Дата некоррентна
	29 2 2000					Дата корректна
	
struct date {int day; int month;int year;};
int main(){
	int day, month, year;
	date one;
	cin >> one.day >> one.month >> one.year;
	switch (one.month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (one.day > 31)
		{
			cout << "Не существует" << endl;
		}
		else
		{
			cout << "Существует" << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (one.day > 30)
		{
			cout << "Не существует" << endl;
		}
		else
		{
			cout << "Существует" << endl;
		}
		break;
	case 2:
		if (one.year % 400 == 0 || (one.year % 4 == 0) && (one.year % 100 != 0))
		{
			if (one.day > 29)
			{
				cout << "Не существует" << endl;
			}
			else
			{
				cout << "Существует" << endl;
			}
		}
		else
		{
			if (one.day > 28) {
				cout << "Не существует" << endl;
			}
			else
			{
				cout << "Существует" << endl;
			}
		}
		break;
	default:
		cout << "Такого месяца не существует" << endl;
		break;
	}
}