#include <iostream>

namespace ex13_1 {

	int abs(int num)
	{
		if (num < 0)
			num = -num;
		return num;
	}

	double abs(double num)
	{
		if (num < 0)
			num = -num;
		return num;
	}


	long int abs(long int num)
	{
		if (num < 0)
			num = -num;
		return num;
	}
}

//using namespace ex13_1;
//
//void main()
//{
//	int a = -10;
//	std::cout << a << "�� ���밪�� -> " << abs(a) << std::endl;
//
//	double b = -3.4;
//	std::cout << b << "�� ���밪�� -> " << abs(b) << std::endl;
//
//	long int c = -20L;
//	std::cout << c << "�� ���밪�� -> " << abs(c) << std::endl;
//
//
//	return;
//}