#include <iostream>
#include <fstream>
//
//void main(int argc, char * argv[]) //copy와 유사한 동작, 실행파일 위치에 원본이름, 복사본이름을 지정하면 원본을 복사본 이름으로 복사
//{
//	std::ifstream fin;
//	std::ofstream fout;
//
//	char ch;
//
//	if(argc != 3)
//	{
//		std::cout << "명령어 입력한 후 원본 파일명과 복사본 파일명을 입력하세요" << std::endl;
//		exit(0);
//	}
//
//
//
//	fin.open(argv[1]); //argv[0]는 호출명
//	fout.open(argv[2]);
//	
//	if (fin.fail() || fout.fail())
//	{
//		std::cout << "파일 오픈을 실패햇습니다." << std::endl;
//		return;
//
//	}
//
//	while (fin.get(ch))
//	{
//		fout.put(ch);
//	}
//
//	fin.close();
//	fout.close();
//}