#include <iostream>

namespace ex_12_6 {
	class Shape
	{
	protected:
		double area;
	public:
		virtual void Draw() = 0;  //���� �����Լ��� ���� �߻�Ŭ����ȭ, �Ļ�Ŭ������ ���������Լ��� �������̵� ���� ������ �߻�Ŭ������ ��޵ȴ�.
		virtual double GetSize() = 0;
	};

	class Rect : public Shape {
	protected:
		int width;
		int height;
	public:
		Rect(int w = 0, int h = 0);
		void Draw();
		double GetSize();

	};

	Rect::Rect(int w, int h)
	{
		width = w;
		height = h;
	}

	void Rect::Draw()  //�������̵�
	{
		std::cout << "�簢���� �׸��� " << std::endl;
	}
	double Rect::GetSize()   //�������̵�
	{
		area = width * height;
		return area;
	}

	class Circle : public Shape {
	protected:
		int radius;
	public:
		Circle(int r = 0);
		void Draw();
		double GetSize();
	};

	Circle::Circle(int r)
	{
		radius = r;
	}

	void Circle::Draw()   //�������̵�
	{
		std::cout << "���� �׸��� " << std::endl;
	}
	double Circle::GetSize()   //�������̵�
	{
		area = radius * radius * 3.14;
		return area;
	}

	void CommonPrn(Shape *ptr) //�Ϲ��Լ�
	{
		ptr->Draw();  //�̰� ����Ű�� ��ü�� Draw() ����Լ��� ȣ���϶�

	}

}

using namespace ex_12_6;

//int main()
//{
//
//	Rect recObj(8, 10);
//	recObj.Draw();
//	std::cout << "�簢���� ���� : " << recObj.GetSize() << std::endl;
//
//	Circle cirObj(5);
//	cirObj.Draw();
//	std::cout << "���� ���� : " << cirObj.GetSize() << std::endl;
//
//	return 0;
//
//}