#include <iostream>
#include <fstream>

struct insa {
	const char name[20];
	int age;
	const char address[20];
};

void main() //stdout 쓰는 방법
{
	

	insa man = { "성윤정", 20, "서울" };

	std::ofstream fout; // 출력스트림

	fout.open("insa.dat");

	fout << man.name << " " << man.age << " " << man.address << std::endl;

	fout.close();
	return;
}