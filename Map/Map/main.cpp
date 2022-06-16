// map v0.2

#include <iostream>
#include <map>

using namespace std;

map<int, int> Numbers;

void AddData(int _key, int _value);

int main(void)
{
	Numbers[0] = 0;
	Numbers[1] = 10;
	//Numbers[2] = 20;
	AddData(2, 200);
	Numbers[3] = 30;

	// ** 최초 한 번은 이렇게 넣어도 상관없다 (Value가 없는 것이 확실하기 때문)
	Numbers[1] = 100;

	Numbers.insert(make_pair(4, 40));

	// ** 출력
	for (map<int, int>::iterator iter = Numbers.begin(); iter != Numbers.end(); iter++)
		cout << iter->second << endl;

	return 0;
}

// hash table 이라는 구조를 만들어서 시작할 때 데이터를 다 집어넣는다

void AddData(int _key, int _value)
{
	// ** 기존 데이터를 지키면서 Value를 추가하고 싶을 때
	map<int, int>::iterator iter = Numbers.find(_key);

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_key, _value));
	else
		iter->second = _value;
}
