#include <iostream>
#include <fstream>

//void main(int argc, char *argv[])
//{
//	char ch;
//
//	if (argc != 2) {
//		std::cout << "명령어 입력한 후 파일이름을 반드시 입력하세요" << std::endl;
//		return;
//	}
//
//	std::ifstream fin;
//	fin.open(argv[1]);
//
//	if (!fin) {
//		std::cout << "파일 오픈을 실패했습니다." << std::endl;
//		return;
//	}
//	while (fin.get(ch))
//	{
//		std::cout << ch;
//	}
//	fin.close();
//
//
//	return;
//}