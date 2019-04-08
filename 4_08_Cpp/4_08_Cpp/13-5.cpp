#include <iostream>

namespace ex13_5 {

	class Data {
	private :
		int value;
	public :
		Data(int v);
		void CopyData(int & v);
		int GetData();
	};


	Data::Data(int v)
	{
		value = v;
	}

	void Data::CopyData(int &v)
	{
		value = v;
	}

	int Data::GetData()
	{
		return value;
	}
}

using namespace ex13_5;

//void main()
//{
//	int a = 10;
//
//	Data obj1(10);
//	std::cout << obj1.GetData() << std::endl;
//
//	obj1.CopyData(a);
//	std::cout << obj1.GetData() << std::endl;
//	double b = 3.4;
//
//	/*Data obj2(1.5);
//
//	std::cout << obj2.GetData() << std::endl;
//	obj2.CopyData(b);
//	std::cout << obj2.GetData() << std::endl;*/
//
//	return;
//}