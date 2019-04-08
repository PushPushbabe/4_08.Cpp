#include <iostream>

template <typename T>
class Add {
	T a;
	T b;
public :
	Add(T a, T b);
	T Sum();
};

template <typename T>
Add<typename T>::Add(T a, T b)
{
	this->a = a;
	this->b = b;
}

template <typename T>
T Add<typename T>::Sum()
{
	return a + b;
}

//void main()
//{
//	Add<int> obj(10, 20);
//	std::cout << obj.Sum() << std::endl;
//
//	return;
//
//}

