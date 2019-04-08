#include <iostream>
#include <fstream>

//struct insa {
//	char name[20];
//	int age;
//	char address[20];
//};
//
//void main()
//{
//	insa man;
//	std::ifstream fin;
//
//	fin.open("..\\4_08_Cpp\\insa.bin");
//
//	if (fin.fail()) {
//		printf("Error : File open error \n");
//		return;
//	}
//
//
//	std::cout << "    >> 파일에서 읽어온 데이터 <<    \n";
//	std::cout << "------------------------------------\n";
//	std::cout << " 이름      나이    주소   \n";
//	std::cout << "------------------------------------\n";
//	while (fin.read((char*)&man, sizeof(man)))
//		std::cout << man.name << "   " << man.age << "    " << man.address << std::endl;
//
//
//	fin.close();
//
//	return;
//}