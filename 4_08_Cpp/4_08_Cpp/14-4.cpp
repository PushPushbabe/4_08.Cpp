#include <iostream>
#include <fstream>


void main()
{
	char ch;

	while (std::cin.get(ch)) //입력버퍼에 있는 값이 없을때까지 긁어오기
		std::cout.put(ch); //출력버퍼에 있는거 긁어서 내보내기


	return;
}
