#include<iostream>
#include<cmath>
#include <string>
#include <limits>
using namespace std;
/*
������� �1
������� ����� Point, ����������� ��� ���� x, y ���� float.
struct Point {float x; float y;};
������� � ������������������� ���������� ���� Point.
struct Point {1.2;1.4;};
������� ���������� ���� Point � ������������������� �� ������ � ����������.
struct Point { float x; float y; };
int main()
{
	Point one;
	cin >> one.x;
	cin >> one.y;
	cout << one.x << endl;
	cout << one.y;
}
	������� �� ����� �������� x, y ��������������� ����������.
	�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
	���������� ����� � ������ ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
struct Point {float x; float y;};
	int main()
{
		int R;
		cin >> R;
Point one;
cin >> one.x;
cin >> one.y;
if (one.x*one.x + one.y*one.y == R*R) {
	cout << "�����������" << endl;
}
}
	�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.
	���������� ����� ������������ ������ � ����������.
	��� �������� ��������� ����� ������������ ��������� Point.
	������������ ����� �������� ������� ����� ������� ��� ��������� Point.
	������� ���������� ���������� ����� � �������.
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
	������� �2
	������� ��������� Circle, ���������� ���� ���� ���� int - ������ � ������ ���� ���� Point - ����� ����������.
	������� � ������������������� ���������� ���� Circle.
	������� ���������� ���� Circle � ������������������� �� ������� ���������� � ����������.
	������� �� ����� ������, ����������� � ��������������� ����������.
	���� ��� ���������� ���� Circle.
	�������� ���������, ������� ���������� ������������ �� ����������,
	��������� ������� �����������.
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
		cout << "������������";
	}
}
	������� �3
	������� ������������ (enum) Color, ��� �������� 7 ������ ������.
	������� ��������� Triangle, ���������� ���� ���� Color
	� ������ ��� �������� ���� ��������� ���� int (����� ������).
	������� � ������������������� ���������� ���� Triangle ����������� �������.
	������� �� ����� ������, ����������� � ��������������� ����������.
	�������� ���� Color ������� � ��������� ����. (������������ ����������� switch).
	���������� � ������� �� ����� �������� ���������������� ������������.
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
		cout << "� ��� ������ 7 ������" << endl;
	}
	for (int i = 0; i < 3; ++i)
	{
		cout << one.side[i] << endl;
	}
	cout << p << endl;
	cout << l << endl;
}
	������� �4
	������� ������ �� 20 ��������� ���� Point.
	������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
	�������� �� ����� ����������:
		- ����� � ���������� x �����������
		- ���� �����, ���������� ����� �������� ����������.
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
	������� �5
	������� ������ �� 100 ��������� ���� Triangle.
	������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
	��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
	(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
	���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
		- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
		  ���� ���������� ������������� ���, ������� ��������������� ���������.
		- ���������� ������������� ������� �����
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
	������� �6
	�������� ���������, ������� ��������� ������������ �������� �������� ����.
	���� ������� � �������������� ���������.
	�������� ������				��������� ���������
	1 1 1992					���� ���������
	30 6 1992					���� ���������
	31 7 1992					���� ���������
	31 9 1994					���� �����������
	32 1 1992					���� �����������
	1 13 1992					���� �����������
	29 2 1993					���� �����������
	29 2 2004					���� ���������
	29 2 1900					���� �����������
	29 2 2000					���� ���������
	
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
			cout << "�� ����������" << endl;
		}
		else
		{
			cout << "����������" << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (one.day > 30)
		{
			cout << "�� ����������" << endl;
		}
		else
		{
			cout << "����������" << endl;
		}
		break;
	case 2:
		if (one.year % 400 == 0 || (one.year % 4 == 0) && (one.year % 100 != 0))
		{
			if (one.day > 29)
			{
				cout << "�� ����������" << endl;
			}
			else
			{
				cout << "����������" << endl;
			}
		}
		else
		{
			if (one.day > 28) {
				cout << "�� ����������" << endl;
			}
			else
			{
				cout << "����������" << endl;
			}
		}
		break;
	default:
		cout << "������ ������ �� ����������" << endl;
		break;
	}
}