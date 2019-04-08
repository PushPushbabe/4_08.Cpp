#include <iostream>

namespace ex_12_9 {
	class Base {
	public:
		Base();
		virtual ~Base();
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
	public:
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