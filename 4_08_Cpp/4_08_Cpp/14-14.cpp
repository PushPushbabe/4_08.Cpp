#include <iostream>
#include <fstream>

struct insa {
	char name[20];
	int age;
	char address[20];
};

void main()
{
	insa man;
	std::ifstream fin;
	
	int pos;

	bool bFind = true;

	fin.open("..\\4_08_Cpp\\insa.bin");

	if (fin.fail())
	{
		printf("Error : file open error\n");
		return;
	}


	std::cout << "���Ͽ��� ���° ��ġ�� �����͸� �а� ��������? => ";
	std::cin >> pos;

	for (int i = 0; i < pos; i++) //4��° �����͸� �а�ʹٸ� 3��°���� �տ��� �а���
	{
		fin.read((char*)&man, sizeof(man));
		
			if (!fin.good()) //��û ���ڵ� ã�� ����
		{
			bFind = false;
			break;
		}
		
	}
	if (bFind == true) 
	{
		std::cout << man.name << "    " << man.age << "    " << man.address << std::endl;

	}
	else
		std::cout << "ã���� �ϴ� �����Ͱ� ����." << std::endl;

	fin.close();

	return;
}
