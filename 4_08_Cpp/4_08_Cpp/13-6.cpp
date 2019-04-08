#include <iostream>

namespace ex13_6 {

	template <typename TYPE, typename ARG_TYPE>
	class Data {
	private:
		TYPE value;
	public:
		Data(TYPE v);
		void CopyData(ARG_TYPE & v);
		TYPE GetData();
	};

	template <typename TYPE, typename ARG_TYPE>
	Data<typename TYPE, typename ARG_TYPE>::Data(TYPE v)
	{
		value = v;
	}

	template <typename TYPE, typename ARG_TYPE>
	void Data<typename TYPE, typename ARG_TYPE>::CopyData(ARG_TYPE &v)
	{
		value = v;
	}

	template <typename TYPE, typename ARG_TYPE>
	TYPE Data<typename TYPE, typename ARG_TYPE>::GetData()
	{
		return value;
	}
}

using namespace ex13_6;
//
//void main()
//{
//	int a = 10;
//
//	Data<int, int &> obj1(10);
//	std::cout << obj1.GetData() << std::endl;
//
//	obj1.CopyData(a);
//	std::cout << obj1.GetData() << std::endl;
//	double b = 3.4;
//
//	Data<double, double &> obj2(1.5);
//
//	std::cout << obj2.GetData() << std::endl;
//	obj2.CopyData(b);
//	std::cout << obj2.GetData() << std::endl;
//
//	return;
//}