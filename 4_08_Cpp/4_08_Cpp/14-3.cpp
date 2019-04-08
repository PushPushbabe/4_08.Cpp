#include <iostream>
#include <fstream>

struct insa {
	char name[20];
	int age;
	char address[20];
};
//
//void main()
//{
//	insa man;
//
//	std::ifstream fin;
//
//	fin.open("C:\\Users\\chanjong\\source\\repos\\4_08.Cpp\\4_08_Cpp\\4_08_Cpp\\insa.dat");
//
//	if (fin.fail()) {
//		std::cout << "파일 오픈에 실패했습니다." << std::endl;
//		return;
//	}
//
//
//	fin >> man.address >> man.age  >>man.name ;
//
//	std::cout << man.name << " "<< man.age <<" "<< man.address << std::endl;
//
//	fin.close();
//	return;
//}
