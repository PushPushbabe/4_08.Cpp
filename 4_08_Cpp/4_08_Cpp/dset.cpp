#include <iostream>
#include <fstream>

void main()
{
	std::ifstream fin;
	std::ofstream fout;

	char ch;

	fin.open("14-9.cpp");
	fout.open("dset.cpp"); //요 경로는 cpp가 있는 경로를 의미하네

	if (fin.fail() || fout.fail())
	{
		std::cout << "파일 오픈을 실패했습니다." << std::endl;
		return;
	}

	while (fin.get(ch))
	{
		fout.put(ch);
	}

	fin.close();
	fout.close();

	return;
}