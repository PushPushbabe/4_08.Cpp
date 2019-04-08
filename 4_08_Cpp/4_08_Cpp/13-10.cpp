#include <iostream>

namespace ex_13_10 {

	void divide(int a, int b)
	{
		int c, d;

		std::cout << "*** divide 함수 ***" << std::endl;

		if (b == 0)
			throw b; // 이 함수에 try문과 catch가 없어도 예외처리 요청 가능
		
		c = a / b;
		std::cout << "몫은 -> " << c << std::endl;
		d = a % b;
		std::cout << "나머지는 -> " << d << std::endl;


	}

}

using namespace ex_13_10;


//void main()
//{
//	try { //호출한 함수에서의 예외처리는 예외 발생 이후로는 실행이 안된다, 
//		divide(10, 2);
//		divide(10, 0);
//		divide(10, 4);
//	}
//	catch (int ex)
//	{
//		std::cout << ex << "으로 나누려는 시도가 있었으므로 예외발생 " << std::endl;
//	}
//
//
//	return;
//}