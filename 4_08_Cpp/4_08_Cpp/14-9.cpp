#include <iostream>
#include <fstream>
//
//void main()//���� �Է��� ������� �����ϱ�
//{
//	std::ifstream fin;
//	std::ofstream fout;
//
//	char ch;
//	//fin���� �о���� fout���� �о�� ��� �����͸� ���� �ٿ��ֱ���
//	fin.open("14-9.cpp");
//	fout.open("dset_2.cpp"); //�� ��δ� cpp�� �ִ� ��θ� �ǹ��ϳ�
//
//	if (fin.fail() || fout.fail())
//	{
//		std::cout << "���� ������ �����߽��ϴ�." << std::endl;
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