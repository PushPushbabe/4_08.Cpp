#include <iostream>
#include <fstream>
//
//void main()//파일 입력을 출력으로 전달하기
//{
//	std::ifstream fin;
//	std::ofstream fout;
//
//	char ch;
//	//fin으로 읽어오고 fout으로 읽어온 모든 데이터를 복사 붙여넣기함
//	fin.open("14-9.cpp");
//	fout.open("dset_2.cpp"); //요 경로는 cpp가 있는 경로를 의미하네
//
//	if (fin.fail() || fout.fail())
//	{
//		std::cout << "파일 오픈을 실패했습니다." << std::endl;
//		return;
//	}
//
//	while (fin.get(ch))
//	{
//		fout.put(ch);
//	}
//
//	fin.close();
//	fout.close();
//
//	return;
//}