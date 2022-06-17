// map v0.3

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>

using namespace std;

struct Vector3
{
	float x, y, z;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {};

	Vector3(const float& _x, const float& _y) : x(_x), y(_y), z(0.0f) {};

	Vector3(const float& _x, const float& _y, const float& _z) : x(_x), y(_y), z(_z) {};
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};

struct Object
{
	Transform Info;

	Object() {};

	Object(const Transform& _info) : Info(_info) {};
};

struct Player : public Object
{
	Player() {};

	Player(const Transform& _info) : Object(_info) {};
};

map<string, list<Object*>> Objects;

void Initalize();
void AddData(string _key, Object* _object);

int main(void)
{
	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 40;

	AddData("Player", new Player(Info));

	//cout << Objects["Player"] = Info.Position.x << endl;
	//cout << Objects["Player"] = Info.Position.y << endl;
	//cout << Objects["Player"] = Info.Position.z << endl;

	return 0;
}

// hash table 이라는 구조를 만들어서 시작할 때 데이터를 다 집어넣는다

void Initalize()
{
	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 40;

	//Objects["Player"] = new Player(Info);
}

void AddData(string _key, Object* _object)
{
	map<string, list<Object*>> ::iterator iter = Objects.find(_key);

	if (iter == Objects.end())
	{
		list<Object*> Temp;
		Temp.push_back(_object);
		Objects.insert(make_pair(_key, Temp));
	}
	else
		iter->second.push_back(_object);


	/*
	// ** 기존 데이터를 지키면서 Value를 추가하고 싶을 때
	map<int, Object*>::iterator iter = Objects.find(_key);

	if (iter == Objects.end())
		Objects.insert(make_pair(_key, _object));
		Objects.insert(make_pair(_key, _object));
	else
		iter->second = _object;
	*/
}