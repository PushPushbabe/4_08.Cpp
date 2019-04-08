#include <iostream>

//change를 템플릿 함수로 정의하라

template <typename DATATYPE,typename ARG_DATTYPE>

void change(DATATYPE a, DATATYPE b);
//void change(double & a, double & b);

//void main()
//{
//	int a = 10, b = 20;
//	change<int&, int>(a, b);
//	std::cout << a << "\t" <<b<< "\n";
//	double c = 10.5, d = 20.7;
//	change<double&, double>(c, d);
//	std::cout << c << "\t" << d << "\n";
//
//	return;
//}

template <typename DATATYPE, typename ARG_DATTYPE>
void change(DATATYPE a, DATATYPE b)
{
	ARG_DATTYPE t;
	t = a;
	a = b;
	b = t;
}
//
//void change(double &a, double &b)
//{
//	double t;
//	t = a;
//	a = b;
//	b = t;
//
//}