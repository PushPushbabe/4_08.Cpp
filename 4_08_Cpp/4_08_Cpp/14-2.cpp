#include <iostream>
#include <fstream>

struct insa {
	const char name[20];
	int age;
	const char address[20];
};

//void main() //stdout ���� ���
//{
//	
//
//	insa man = { "������", 20, "����" };
//
//	std::ofstream fout; // ��½�Ʈ��
//
//	fout.open("insa.dat");
//
//	fout << man.name << " " << man.age << " " << man.address << std::endl;
//
//	fout.close();
//	return;
//}