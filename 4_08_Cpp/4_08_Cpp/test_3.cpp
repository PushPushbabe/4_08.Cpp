#include <iostream>

namespace test_3 {
	class Base {
	public :
		virtual void Prn();
	};

	void Base::Prn()
	{
		std::cout << "기반클래스의 멤버함수 Prn" << std::endl;
	}

	class Derived : public Base {
	public :
		void Prn();

	};


	void Derived::Prn()
	{
		std::cout << "파생클래스의 멤버함수 Prn" << std::endl;
	}

	void func1(Base &pRef)
	{
		pRef.Prn();
	}

	void func2(Base *pPtr)
	{
		pPtr->Prn();
	}

}


using namespace test_3;


//int main()
//{
//	Base pObj;
//	Derived cObj;
//	std::cout << "func1(pObj) ---->";
//	func1(pObj);
//	std::cout << "func1(cObj) ---->";
//	func1(cObj);
//	std::cout << "func2(&pObj) ---->";
//	func2(&pObj);
//	std::cout << "func2(&cObj) ---->";
//	func2(&cObj);
//
//	return 0;
//}