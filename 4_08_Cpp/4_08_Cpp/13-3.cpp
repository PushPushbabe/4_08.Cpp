#include <iostream>

namespace ex13_3 {
	class Test {
		int value;
	public :
		Test(int v);
		void SetValue(int v);
		int GetValue();
	};

	Test::Test(int v)
	{
		value = v;
	}

	void Test::SetValue(int v)
	{
		this->value = v;
	}

	int Test::GetValue()
	{
		return value;
	}

}

using namespace ex13_3;
//
//void main()
//{
//	Test obj1(10);
//	obj1.SetValue(10);
//	std::cout << obj1.GetValue() << std::endl;
//
//	Test obj2(5.7);
//	std::cout << obj2.GetValue() << std::endl;
//
//	return;
//}
