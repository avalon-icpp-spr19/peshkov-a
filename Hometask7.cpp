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
	������� �1
	�������� ����� ���������� val
	�������� ��������� ��� �������� ������ ���������� val
	��������� ����� ���������� val � ��������� ���������
	�������� �������� ���������� val, ��������� ���������
	int val = 10;
	int*ptr;
	ptr = &val;
	cout << ptr << endl;
	cout << *ptr << endl;
	����� ��������� ��������� ����������:
	�������� � ������������������ ��������� �� ��������������� ����������.
	����� ������ ����� ����������� ���������? ��������� � ������� ��������� sizeof
	� ������� ����������� ����������:
	��������� �������� ���������� a �� 1
	��������� ���������� b �������� 0.25
	�������� ��������� �������� ���������� f
	�������� ���������� ������� �� ������� �� 10 ���������� ll
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
	������� �2
	��� ������� �� ����� ��������� ���?
	��������������� ������ ������, �������� ������������� �������� ����������.

	int t[4] = {8,4,2,1};
	int *p1 = t + 2//������� ����� 2 (��������:2)
		, *p2 = p1 - 1;//������� ����� 1 (��������:4)
	p1++;//������� ����� 3 (��������:1)
	cout << *p1 - t[p1 - p2] << endl;//1-t[����� 3-����� 1]=1-2=-1


	int data[] = {1,2,3,4,5};
	�������� ��������� �� ������ ������� �������*/

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
	/*� ������� ����� for � ����������� ��������� �������� ������ ������� ������� � �������.
	� ������� ����� for � ����������� ��������� ��������� ������ ������� ������� � 2 ����
	� ���������� ����� ������������ ��������� �������.
	�������� ���������� ���������.
	������� �3
	1.	������������� ������ �� 20 ��������� ��������� �� ��������� [-100, 100].
	2.	�������� ��������� �� ������ ������� �������.
	3.	� ������� ����� for � ������������ ��������� �������� ������ � �������.
	4.	��������� �������������� ��������� ������� ������������ ������� �������.
	5.	�������� ��� ������ � ��������. (��� ������ ������� ������������ ���������� ����������).
	��� ������ ������� ������������ ���������, ��������� ���������� � ��������� ������� �� ��������.
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
	������� �4
	����� ����� ��������� ���������� ������, ��������������������� ��������� ���������.
	�������� const char data[] = "abcdefghijklmnopqrstuvwxyz";
	������������ ������ � ���������� ���� ������.
	���������� ������� �������, �� ������� ��������� ������������� ������ ���������� ������ ���.
	���� ���������� ������� � ������ ��� ������� -1.
	�������� ������			��������� ���������
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
	������� �5
	�������� ���������, ������� ���������� ��� ������, ������� ������ ������������.
	��������� ����������� �����������.
	���� ��������� ������ �����, ������� 1, ���� ������ �� ����� ������� 0.
	������ ����� ���� ������ ��������. ������ ��������� ������ �� ����� ��������� 256 ��������.
	������, ��������� ������������� ����� �������� ��������� �������:
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