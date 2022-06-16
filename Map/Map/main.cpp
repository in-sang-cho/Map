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

	// ** ���� �� ���� �̷��� �־ ������� (Value�� ���� ���� Ȯ���ϱ� ����)
	Numbers[1] = 100;

	Numbers.insert(make_pair(4, 40));

	// ** ���
	for (map<int, int>::iterator iter = Numbers.begin(); iter != Numbers.end(); iter++)
		cout << iter->second << endl;

	return 0;
}

// hash table �̶�� ������ ���� ������ �� �����͸� �� ����ִ´�

void AddData(int _key, int _value)
{
	// ** ���� �����͸� ��Ű�鼭 Value�� �߰��ϰ� ���� ��
	map<int, int>::iterator iter = Numbers.find(_key);

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_key, _value));
	else
		iter->second = _value;
}
