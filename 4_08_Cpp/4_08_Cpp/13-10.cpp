#include <iostream>

namespace ex_13_10 {

	void divide(int a, int b)
	{
		int c, d;

		std::cout << "*** divide �Լ� ***" << std::endl;

		if (b == 0)
			throw b; // �� �Լ��� try���� catch�� ��� ����ó�� ��û ����
		
		c = a / b;
		std::cout << "���� -> " << c << std::endl;
		d = a % b;
		std::cout << "�������� -> " << d << std::endl;


	}

}

using namespace ex_13_10;


//void main()
//{
//	try { //ȣ���� �Լ������� ����ó���� ���� �߻� ���ķδ� ������ �ȵȴ�, 
//		divide(10, 2);
//		divide(10, 0);
//		divide(10, 4);
//	}
//	catch (int ex)
//	{
//		std::cout << ex << "���� �������� �õ��� �־����Ƿ� ���ܹ߻� " << std::endl;
//	}
//
//
//	return;
//}