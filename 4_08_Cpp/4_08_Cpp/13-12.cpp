#include <iostream>

namespace ex13_12 {

	void func(int a)
	{
		try {
			if (a == 0)
				throw "������ ���� 0�̴�.";
			else
				throw a;
		}
		catch (const char * str)
		{
			std::cout << str << std::endl;
		}
		catch (int ex)
		{
			std::cout << "���� " << ex << "�� ���� ���� �߻�" << std::endl;
		}
	}
}

using namespace ex13_12;
//
//void main()
//{
//	func(10);
//	func(0);
//	func(20);
//
//	return;
//}