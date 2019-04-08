#include <iostream>


namespace ex13_13 {
	void func(int a) throw(const char *, int)
	{
		if (a == 0) {
		throw "변수의 값이 0이다.";
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
//		std::cout << "된건가?";
//		std::cout << str << std::endl;
//	}
//	catch (int ex)
//	{
//		std::cout << "숫자 " << ex << "로 인한 예외발생" << std::endl;
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
//		std::cout << "숫자 " << ex << "로 인한 예외발생" << std::endl;
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
//		std::cout << "숫자 " << ex << "로 인한 예외발생" << std::endl;
//	}
//
//	return;
//}