#include <iostream>
#include <fstream>

void main()
{
	std::ifstream fin;
	std::ofstream fout;

	char ch;

	fin.open("14-9.cpp");
	fout.open("dset_2.cpp"); //�� ��δ� cpp�� �ִ� ��θ� �ǹ��ϳ�

	if (fin.fail() || fout.fail())
	{
		std::cout << "���� ������ �����߽��ϴ�." << std::endl;
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