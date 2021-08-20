#include <iostream>
class Farmer
{
	int age;
public:
	void putdata(int a)
	{
		age = a;
	}

	void sum(Farmer, Farmer);

};

void Farmer::sum(Farmer x1, Farmer x2)
{
	int s = 0;
	s = x1.age + x2.age;
	std::cout << s;
}
int main()
{
	Farmer f1, f2;
	f1.putdata(18);
	f2.putdata(19);

	Farmer f3;
	f3.sum(f1, f2);
}
