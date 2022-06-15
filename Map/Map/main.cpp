// map v0.1

#include <iostream>
#include <map>

using namespace std;

// 100 / 10 / 10 / 100 / 50

int main(void)
{
	/*
	map<int, int> Numbers;

	// ** Key, Value
	//map<int, int>

	Numbers[0] = 1;
	Numbers[1] = 2;
	Numbers[2] = 3;
	Numbers[3] = 4;
	Numbers[4] = 5;
	Numbers[5] = 6;
	Numbers[6] = 7;
	Numbers[7] = 8;
	Numbers[8] = 9;
	Numbers[9] = 10;
	Numbers[10] = 11;

	for (int i = 0; i < 11; i++)
	{
		cout << Numbers[i] << endl;
	}
	*/

	/*
	map<string, int> Numbers;

	Numbers["A"] = 1;
	Numbers["B"] = 2;
	Numbers["C"] = 3;
	Numbers["D"] = 4;
	Numbers["E"] = 5;

	for (auto iter = Numbers.begin(); iter != Numbers.end(); ++iter)
	{
		cout << iter->first;
		cout << iter->second << endl;
	}
	*/

	// 배열은 정수형이면서 상수형이어야 한다
	// 배열은 정상수형이다.
	// ' ' = '32'

	/*
	enum Key { AAA, BBB, CCC, DDD, EEE };
	// enum은 정상수형이다.

	const int Max = 10;

	Key _State = AAA;

	int Array[Max];

	cout << Array[_State] << endl;
	*/


	enum Key
	{
		Player,
		Enemy,
		Bullet,
		Max,
	};
	// enum은 정상수형이다.

	const int MaxObject = 128;

	int Array[Max][MaxObject];

	for (int i = 0; i < Max; i++)
	{
		for (int j = 0; j < MaxObject; j++)
		{
			Array[i][j] = j;
		}
	}

	for (int i = 0; i < MaxObject; i++)
		cout << Array[Player][i] << endl;

	return 0;
}