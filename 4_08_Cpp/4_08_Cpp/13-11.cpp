#include <iostream>

namespace ex_13_11 {

	void divide(int a, int b)
	{
		int c, d;

		std::cout << "*** divide �Լ� ***" << std::endl;

		try {
			if (b == 0)
				throw b; // �� �Լ��� try���� catch�� ��� ����ó�� ��û ����

			c = a / b;
			std::cout << "���� -> " << c << std::endl;
			d = a % b;
			std::cout << "�������� -> " << d << std::endl;

		}
		catch (int ex)
		{
			std::cout << ex << "���� �������� �õ��� �־����Ƿ� ���ܹ߻� " << std::endl;
		}
	}

}

using namespace ex_13_11;

//���ܰ� �߻��� �Լ� ������ ���� try�������� ó���ϴ� ���
//void main()
//{
//	 
//		divide(10, 2);
//		divide(10, 0);
//		divide(10, 4);
//
//
//	return;
//}