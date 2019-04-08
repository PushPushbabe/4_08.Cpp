#include <iostream>

//포유류의 가상클래스 생성
//원숭이,개,고양이 파생클래스 생성


namespace exercise {
	class mammal
	{
	protected:
		int age;
		double energy;
		bool pregnant;
	public:
		virtual ~mammal();
		virtual void PlayGame() = 0;
		virtual void Singing() = 0;
		virtual void Eating() = 0;
		virtual void StatPrn() = 0;
	};

	mammal::~mammal()
	{

	}

	class Monkey : mammal
	{
	protected:
		void SwingTail();
	public:
		Monkey(int age = 1, double energy = 100, bool preganant = false);
		virtual void PlayGame();
		virtual void Singing();
		virtual void Eating();
		virtual void StatPrn();
	};

	Monkey::Monkey(int age, double energy, bool preganant)
	{
		this->age = age;
		this->energy = energy;
		this->pregnant = preganant;

	}

	void Monkey::StatPrn()
	{
		std::cout << "원숭이의 나이는 " << this->age << "입니다.\n";
		std::cout << "원숭이의 에너지는 " << this->energy << "입니다.\n";
		std::cout << "이 원숭이는 임신여부 : " << this->pregnant << std::endl;

	}


	void Monkey::PlayGame()
	{
		std::cout << "원숭이와 놀아주었습니다." << std::endl;
		std::cout << "에너지 10 감소 " << std::endl;
		this->energy -= 10;
	}

	void Monkey::Singing()
	{
		std::cout << "원숭이가 노래를 부릅니다." << std::endl;
		std::cout << "에너지 10 감소 " << std::endl;
		this->energy -= 10;
	}

	void Monkey::Eating()
	{
		std::cout << "원숭이가 밥을 먹습니다." << std::endl;
		std::cout << "에너지 30 증가 " << std::endl;
		this->energy += 30;
	}

	void Monkey::SwingTail()
	{
		std::cout << "원숭이가 꼬리를 흔듭니다." << std::endl;
		std::cout << "에너지 10 감소 " << std::endl;
		this->energy -= 10;
	}

	void CommonPrn(Monkey * ptr)
	{
		ptr->StatPrn();
	}

};

using namespace exercise;
//
//int main( void)
//{
//	Monkey x;
//	Monkey * y = &x;
//	x.PlayGame();
//	x.Singing();
//	x.Eating();
//	CommonPrn(&x);
//
//	return 0;
//}