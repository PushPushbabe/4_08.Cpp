#include <iostream>

struct insa {
	const char name[20];
	int age;
	const char address[20];
};

void main()
{
	insa man = { "������", 20, "����" };

	std::cout << man.name << " " << man.age << " " << man.address << std::endl;


	return;
}