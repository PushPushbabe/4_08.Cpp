#include <iostream>

template <typename T>

T Abs(T num)
{
	if (num < 0)
		num = -num;
	return num;
}

//
//
//void main()
//{
//	int a = -10;
//	std::cout << a << "�� ���밪�� -> " << Abs(a) << std::endl;
//
//	double b = -3.4;
//	std::cout << b << "�� ���밪�� -> " << Abs(b) << std::endl;
//
//	long int c = -20L;
//	std::cout << c << "�� ���밪�� -> " << Abs(c) << std::endl;
//
//
//	return;
//}