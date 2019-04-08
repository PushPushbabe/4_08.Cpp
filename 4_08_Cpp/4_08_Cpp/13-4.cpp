#include <iostream>

namespace ex13_4 {
	template <typename DATATYPE>
	class Test {
		DATATYPE value;
	public:
		Test(DATATYPE v);
		void SetValue(DATATYPE v);
		DATATYPE GetValue();

	};

	template <typename DATATYPE>
	Test<DATATYPE>::Test(DATATYPE v)
	{
		value = v;
	}

	template <typename DATATYPE>
	void Test<DATATYPE>::SetValue(DATATYPE v)
	{
		value = v;
	}

	template <typename DATATYPE>
	DATATYPE Test<DATATYPE>::GetValue()
	{
		return value;
	}
}

using namespace ex13_4;
//void main()
//{
//	Test<int> obj1(10);
//	obj1.SetValue(10);
//	std::cout << obj1.GetValue() << std::endl;
//
//	Test<double> obj2(5.7);
//	std::cout << obj2.GetValue() << std::endl;
//
//	return;
//}
