#include <iostream>

namespace test_2{
class Parent {
public:
	virtual void Prn();
};

void Parent::Prn()
{
	std::cout << "Parent Method" << std::endl;
}

class Child : public Parent {
public:
	void Prn();
};

void Child::Prn()
{
	std::cout << "Child Method" << std::endl;
	}
}

using namespace test_2;

//int main()
//{
//	Parent pObj;
//	Child cObj;
//	Parent *pPtr = &cObj;
//	Child *cPtr = (Child*)pPtr; //�ٿ�ĳ���� ����� ������
//	pPtr->Prn();
//
//	return 0;
//}