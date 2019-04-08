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


	std::cout << "파일에서 몇번째 위치의 데이터를 읽고 싶은가요? => ";
	std::cin >> pos;

	for (int i = 0; i < pos; i++) //4번째 데이터를 읽고싶다면 3번째까지 앞에서 읽게함
	{
		fin.read((char*)&man, sizeof(man));
		
			if (!fin.good()) //요청 레코드 찾기 실패
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
		std::cout << "찾고자 하는 데이터가 없다." << std::endl;

	fin.close();

	return;
}
