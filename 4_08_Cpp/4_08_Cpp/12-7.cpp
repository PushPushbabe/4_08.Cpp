#include <iostream>

namespace ex_12_7 {
	class Shape
	{
	protected:
		double area;
	public:
		virtual void Draw() = 0;  //완전 가상함수의 선언 추상클래스화, 파생클래스는 완전가상함수를 오버라이딩 하지 않으면 추상클래스로 취급된다.
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

	void Rect::Draw()  //오버라이딩
	{
		std::cout << "사각형을 그린다 " << std::endl;
	}
	double Rect::GetSize()   //오버라이딩
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

	void Circle::Draw()   //오버라이딩
	{
		std::cout << "원을 그린다 " << std::endl;
	}
	double Circle::GetSize()   //오버라이딩
	{
		area = radius * radius * 3.14;
		return area;
	}

	void CommonPrn(Shape *ptr) //추상클래스의 포인터
	{
		ptr->Draw();  //이걸 가리키는 객체의 Draw() 멤버함수를 호출하라

	}

}

using namespace ex_12_7;

//int main()
//{
//	CommonPrn(new Rect);
//	CommonPrn(new Circle);
//
//	Rect recObj(8, 10);
//	recObj.Draw();
//	std::cout << "사각형의 면적 : " << recObj.GetSize() << std::endl;
//
//	Circle cirObj(5);
//	cirObj.Draw();
//	std::cout << "원의 면적 : " << cirObj.GetSize() << std::endl;
//
//	return 0;
//
//}