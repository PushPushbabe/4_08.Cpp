#include <iostream>

//�������� ����Ŭ���� ����
//������,��,����� �Ļ�Ŭ���� ����


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
		std::cout << "�������� ���̴� " << this->age << "�Դϴ�.\n";
		std::cout << "�������� �������� " << this->energy << "�Դϴ�.\n";
		std::cout << "�� �����̴� �ӽſ��� : " << this->pregnant << std::endl;

	}


	void Monkey::PlayGame()
	{
		std::cout << "�����̿� ����־����ϴ�." << std::endl;
		std::cout << "������ 10 ���� " << std::endl;
		this->energy -= 10;
	}

	void Monkey::Singing()
	{
		std::cout << "�����̰� �뷡�� �θ��ϴ�." << std::endl;
		std::cout << "������ 10 ���� " << std::endl;
		this->energy -= 10;
	}

	void Monkey::Eating()
	{
		std::cout << "�����̰� ���� �Խ��ϴ�." << std::endl;
		std::cout << "������ 30 ���� " << std::endl;
		this->energy += 30;
	}

	void Monkey::SwingTail()
	{
		std::cout << "�����̰� ������ ���ϴ�." << std::endl;
		std::cout << "������ 10 ���� " << std::endl;
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