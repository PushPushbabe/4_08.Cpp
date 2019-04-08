#include <iostream>

namespace ex_13_11 {

	void divide(int a, int b)
	{
		int c, d;

		std::cout << "*** divide 함수 ***" << std::endl;

		try {
			if (b == 0)
				throw b; // 이 함수에 try문과 catch가 없어도 예외처리 요청 가능

			c = a / b;
			std::cout << "몫은 -> " << c << std::endl;
			d = a % b;
			std::cout << "나머지는 -> " << d << std::endl;

		}
		catch (int ex)
		{
			std::cout << ex << "으로 나누려는 시도가 있었으므로 예외발생 " << std::endl;
		}
	}

}

using namespace ex_13_11;

//예외가 발생한 함수 내에서 직접 try구문으로 처리하는 방법
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