#include<iostream>
#include<cmath>
#include <string>
#include <limits>
#include "Extention.hpp"
using namespace std;
using namespace ext;
struct date { int day[23];int month[23];int year[23];};
int DateGeneration(int i)
{
	date one;
	int formUli[23], k = 1;

		while (k > 0)
		{
			one.month[i] = GetRandomValue(1, 12);
			one.day[i] = GetRandomValue(1, 31);
			one.year[i] = 1990;
			switch (one.month[i])
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (one.day[i] > 31)
				{
					k = 1;
				}
				else
				{
					k -= 2;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (one.day[i] > 30)
				{
					k = 1;
				}
				else
				{
					k -= 2;
				}
				break;
			case 2:
				if (one.year[i] % 400 == 0 || (one.year[i] % 4 == 0) && (one.year[i] % 100 != 0))
				{
					if (one.day[i] <= 29)
					{
						k -= 2;
					}
					else
					{
						k = 1;
					}
				}
				else
				{
					if (one.day[i] <= 28)
					{
						k -= 2;
					}
					else
					{
						k = 1;
					}
				}
				break;
			}

		}
		int a = (14 - one.month[i]) / 12;
		int y = one.year[i] + 4800 - a;
		int m = one.month[i] + 12 * a - 3;
		formUli[i] = (one.day[i] + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045);
			return formUli[i];
	
}
		int SimulationComparing()
		{
			int form[23];
			for (int i = 0;i < 23;++i)
			{

				form[i] = DateGeneration(i);
			}

			for (int j = 0;j < 23;++j)
			{
				for (int i = 0;i < 23;++i)
				{
					if (i == j)
					{
						continue;
					}
					else
					{
						if (form[j] == form[i])
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
			return 0;
		}
int main()
{
	int N, k = 0;
	cin >> N;
	for (int i = 0;i < N;++i)
	{
		k += SimulationComparing();
	}

	cout << (static_cast<double>(k) / N) * 100 << " %";

}