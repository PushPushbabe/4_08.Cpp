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
//	std::cout << a << "의 절대값은 -> " << Abs(a) << std::endl;
//
//	double b = -3.4;
//	std::cout << b << "의 절대값은 -> " << Abs(b) << std::endl;
//
//	long int c = -20L;
//	std::cout << c << "의 절대값은 -> " << Abs(c) << std::endl;
//
//
//	return;
//}