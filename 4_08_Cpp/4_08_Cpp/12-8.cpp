#include <iostream>

namespace ex_12_8 {
	class Base {
	public :
		Base();
		~Base();
	};

	Base::Base()
	{
		std::cout << " ��� Ŭ������ ������ " << std::endl;

	}

	Base::~Base()
	{
		std::cout << " ��� Ŭ������ �Ҹ��� " << std::endl;
	}

	class Derived : public Base {
	public :
		Derived();
		~Derived();
	};

	Derived::Derived()
	{
		std::cout << " �Ļ� Ŭ������ ������ " << std::endl;
	}

	Derived::~Derived()
	{
		std::cout << " �Ļ� Ŭ������ �Ҹ��� " << std::endl;
	}
}

using namespace ex_12_8;
//
//int main()
//{
//	Base *BasePtr = new Derived;
//	delete BasePtr;
//
//
//	return 0;
//}