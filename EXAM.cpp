#include<iostream>
#include<cmath>
#include <string>
#include <limits>
#include "Extention.hpp"
using namespace std;
using namespace ext;
int SimulationComparing()
{
int form[23];
	for (int i = 0;i < 23;++i)
	{

		form[i] = GetRandomValue(2451545, 2451910);
	}
	for (int k = 0;k < 23;++k)
	{
		for (int j = 0;j < 23;++j)
		{
			for (int i = 0;i < 23;++i)
			{
				if (i == j || i==k || j==k)
				{
					continue;
				}
				else
				{
					if (form[j] == form[i] && form[j] == form[k])
					{
						return 1;
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	return 0;
}
int main()
{
	int N,k=0;
	cin >> N;
	for (int i = 0;i < N;++i)
	{
		k += SimulationComparing();
	}
	
	cout << double(k) / N;

}