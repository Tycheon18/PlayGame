#include <iostream>

using namespace std;

class Base
{
public:
	void Move();
	void Attack();
	Base();
};

void Base::Move()
{

};

void Base::Attack()
{

};

class Player
{
public:
	int HP;
	int MP;
	Base PlayerBase();
};


class Monster
{
public:
	Base MonsterBase();
};

int main()
{
	return 0;
};