#include <iostream>
#include <fstream>
//
//void main(int argc, char * argv[]) //copy�� ������ ����, �������� ��ġ�� �����̸�, ���纻�̸��� �����ϸ� ������ ���纻 �̸����� ����
//{
//	std::ifstream fin;
//	std::ofstream fout;
//
//	char ch;
//
//	if(argc != 3)
//	{
//		std::cout << "��ɾ� �Է��� �� ���� ���ϸ�� ���纻 ���ϸ��� �Է��ϼ���" << std::endl;
//		exit(0);
//	}
//
//
//
//	fin.open(argv[1]); //argv[0]�� ȣ���
//	fout.open(argv[2]);
//	
//	if (fin.fail() || fout.fail())
//	{
//		std::cout << "���� ������ �����޽��ϴ�." << std::endl;
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