#include <iostream>


namespace ex13_13 {
	void func(int a) throw(const char *, int)
	{
		if (a == 0) {
		throw "������ ���� 0�̴�.";
		}
		else
			throw a;
	}

}

using namespace ex13_13;
//
//void main()
//{
//	try {
//		func(10);
//		func(20);
//		func(0);
//	}
//	catch (const char *str) {
//		std::cout << "�Ȱǰ�?";
//		std::cout << str << std::endl;
//	}
//	catch (int ex)
//	{
//		std::cout << "���� " << ex << "�� ���� ���ܹ߻�" << std::endl;
//	}
//
//	try {
//		func(20);
//	}
//	catch (const char *str) {
//		std::cout << str << std::endl;
//	}
//	catch (int ex)
//	{
//		std::cout << "���� " << ex << "�� ���� ���ܹ߻�" << std::endl;
//	}
//
//
//	try {
//		func(0);
//	}
//	catch (const char *str) {
//		std::cout << str << std::endl;
//	}
//	catch (int ex)
//	{
//		std::cout << "���� " << ex << "�� ���� ���ܹ߻�" << std::endl;
//	}
//
//	return;
//}