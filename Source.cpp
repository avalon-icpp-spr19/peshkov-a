#include<iostream>
#include<iomanip>
#include<limits>



using namespace std;

int  main()
{
	setlocale(0, " ");
	cout << boolalpha;
	cout << "bool" <<" " << "|" <<" " << sizeof(bool) << " " << "|" << " " << numeric_limits < bool > ::min() << " " << "|"
		<< " " << numeric_limits < bool > ::max() << " " << "|" << " " << numeric_limits < bool > ::digits<< endl;

	cout << "unsigned short" <<" " << "|" << " " << sizeof(unsigned short) << " " << "|" << " " << numeric_limits < unsigned short > ::min() << " " << "|"
		<< " " << numeric_limits < unsigned short > ::max() << " " << "|" << " " << numeric_limits < unsigned short > ::digits<<endl;

	cout << "short" << " " << "|" << " " << sizeof(short) << " " << "|" << " " << numeric_limits < short > ::min() << " " << "|"
		<< " " << numeric_limits < short > ::max() << " " << "|" << " " << numeric_limits < short > ::digits<<endl;

	cout << "unsigned int" << " " << "|" <<" " << sizeof(unsigned int) << " " << "|" << " " << numeric_limits < unsigned int > ::min() << " " << "|"
		<< " " << numeric_limits < unsigned int > ::max() << " " << "|" << " " << numeric_limits < unsigned int > ::digits << endl;

	cout << "int" << " " << "|" << " " << sizeof(int) << " " << "|" << " " << numeric_limits < int > ::min() << " " << "|"
		<<" " << numeric_limits < int > ::max() << " " << "|" << " " << numeric_limits < int > ::digits << endl;

	cout << "unsigned long" << " " << "|" << " " << sizeof(unsigned long) << " " << "|" << " " << numeric_limits < unsigned long > ::min() << " " << "|"
		<< " " << numeric_limits < unsigned long > ::max() << " " << "|" << " " << numeric_limits < unsigned long > ::digits << endl;

	cout << "long" <<" "<< "|" << " " << sizeof(long) << " " << "|" << " " << numeric_limits < long > ::min() << " " << "|"
		<< " " << numeric_limits < long > ::max() << " " << "|" << " " << numeric_limits < long > ::digits << endl;

	cout << "unsigned  long long" << " " << "|" << " " << sizeof(unsigned long long) << " " << "|" << " " << numeric_limits < unsigned long long> ::min() << " " << "|"
		<< " " << numeric_limits < unsigned long long> ::max() << " " << "|" << " " << numeric_limits < unsigned long long> ::digits << endl;

	cout << "long long" << " " << "|" << " " << sizeof(long long) << " " << "|" << " " << numeric_limits <long long> ::min() << " " << "|"
		<< " " << numeric_limits <long long> ::max() << " " << "|" << " " << numeric_limits <long long> ::digits << endl;

	cout << "char" << " " << "|" << " " << sizeof(char) << " " << "|" << " " << numeric_limits <char> ::min() << " " << "|"
		<< " " << numeric_limits <char> ::max() << " " << "|" << " " << numeric_limits <char> ::digits << endl;

	cout << "float" << " " << "|" << " " << sizeof(float) << " " << "|" << " " << numeric_limits <float> ::min() << " " << "|"
		<< " " << numeric_limits <float> ::max() << " " << "|" << " " << numeric_limits <float> ::digits << endl;

	cout << "float" << " " << "|" << " " << sizeof(double) << " " << "|" << " " << numeric_limits <double> ::min() << " " << "|"
		<< " " << numeric_limits <double> ::max() << " " << "|" << " " << numeric_limits <double> ::digits << endl;










}
/* TODO
Используя заголовочный файл <limits>, std::cout, sizeof() и управляющие последовательности
cоставьте следующую таблицу
	Тип переменной		|    Размер,	|	    Значение	 	 |  Количество
				|     байт	|  Минимальное	|  Максимальное  | значимых бит
	-------------------------------------------------------------------------------------------
	bool			|	1	|     false	|      true      |	1
	unsigned short		|	2	|	0	|      65535	 |	16
	short
	unsigned int
	int
	unsigned long
	long
	unsigned long long
	long long
	char
	float
	double
для справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/
