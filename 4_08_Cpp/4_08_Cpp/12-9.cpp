#include <iostream>

namespace ex_12_9 {
	class Base {
	public:
		Base();
		virtual ~Base();
	};

	Base::Base()
	{
		std::cout << " 기반 클래스의 생성자 " << std::endl;

	}

	Base::~Base()
	{
		std::cout << " 기반 클래스의 소멸자 " << std::endl;
	}

	class Derived : public Base {
	public:
		Derived();
		~Derived();
	};

	Derived::Derived()
	{
		std::cout << " 파생 클래스의 생성자 " << std::endl;
	}

	Derived::~Derived()
	{
		std::cout << " 파생 클래스의 소멸자 " << std::endl;
	}
}

using namespace ex_12_9;
//
//int main()
//{
//	Base *BasePtr = new Derived;
//	delete BasePtr;
//
//
//	return 0;
//}