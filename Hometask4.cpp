#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	/* ������� 1
	���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
	���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
	����������� � ��� ��� �����, �� ������� �� ����� ������.
	�������� ������				��������� ���������
	1 1 1						��
	1 2 4						���
	12 7 5						���
	7 10 3						���
	4 5 8						��
	*/

	/*int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a < b + c && b < a + c && c < a + b) {
		cout << "��";
	}
	else {
		cout << "���";
	}

	/* ������� 2
	�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
	��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
	������������ ����������� switch.
	�������� ������			��������� ���������
	1					�����
	2					�����
	10					������
	101					�����
	1255					������
	*/

	/*int chislo;
	cin >> chislo;
	if (chislo >= 10 && chislo <= 19) {
		cout << chislo << "������" << endl;
	}
	else {
		switch (chislo % 10)
		{
		case 1:
			cout << chislo << "�����" << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << chislo << "�����" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			cout << chislo << "������" << endl;
			break;
		}
	}
	/* ������� 3
	� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
	// �������� ������, �������� � ����������.
	// true ��� 1, false ��� 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	// ��� ����
	bool shouldFire = true;
	if (enemyInFront == true)
	{
	if (isBoss == true)
	{
	if (robotHealth < 50) shouldFire = false;
	if (robotHealth > 100) shouldFire = true;
	}
	}
	else
	{
	shouldFire = false;
	}
	if(shouldFire)
	{
	cout << "Fire" << endl;
	}
	��������� ��� ����, ������ ���������� �������� ���������.
	�������� ������		��������� ���������
	false false 10
	false true 60
	true false 10			Fire
	true true 10
	true true 60			Fire
	*/
	/*bool enemyInFront;
	bool isBoss;
	int robotHealth;
	cin >> enemyInFront;
	cin >> isBoss;
	cin >> robotHealth;
	bool shouldFire = true;
	if (enemyInFront == true && ((isBoss == true && robotHealth >=50) || isBoss==false))
	{
		 shouldFire = true;
	}
	else
	{
		shouldFire = false;
	}
	if (shouldFire)
	{
		cout << "Fire" << endl;
	}

	/* ������� 4
	�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
	��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
	�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
	�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
	������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
	���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
	���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
	�������� ������		��������� ���������
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				4
	*/

	/*int a, b, c,max,min;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}
	if (a <= b && a <= c)
	{
		min = a;
	}
	else if (b <= a && b <= c) {
		min = b;
	}
	else {
		min = c;
	}
	cout << a + b + c - max - min << endl;
		/* ������� 5
		�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
		������������ ������ ������ � ������� ����, �����, ���.
		�������� ������				��������� ���������
		1 1 1992					true
		30 6 1992					true
		31 7 1992					true
		31 9 1994					false
		32 1 1992					false
		1 13 1992					false
		29 2 1993					false
		29 2 2004					true
		29 2 1900					false
		29 2 2000					true
		*/

	
	/*int day, month, year;
	cin >> day >> month >> year;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day > 31)
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
		if (day > 30)
		{
			cout << "�� ����������" << endl;
		}
		else
		{
			cout << "����������" << endl;
		}
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0))
		{
			if (day > 29)
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
			if (day > 28) {
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

			/* ������� 6
			��������� ����� ����� �� ���������, ����������� ��� ���������.
			���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
			����� �� ����� ������� � ������ ������ �� ������ ����� �����.
			������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
			x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������
			�������� ������				��������� ���������
			54 14						true
			11 88						true
			36 61						false
			18 71						false
			23 67						true
			*/
/*int x1, x2, y1, y2;
cin >> x1, x2, y1, y2;
if (abs(x1 - x2) == abs(y1 - y2) || x1 == x2 || y1 == y2)
{
	cout << "�����" << endl;
	}
else
{
	cout << "�� �� ���" << endl;
}*/
}