/*
#include <iostream> //iostream 는 C++ 표준의 라이브러리를 가져오겠다

int main(int argc, char* argv[]) //main는 코드의 시작점, int 값은 실행 성공여부

{      
	int value1; // signed int는 음수 가능,  int는 기본적으로 signed이다.

	//------------초기화4가지방법-----------------//
	int value1 = 0;   =0은 0이란 값을 가지고 시작한다(초기화1).
	int a1(0);      굳이 0 이 아니라 원하는 숫자로 초기화 가능
	int a2 = { 0 };(최신용)
	int a3{ 0 }; (최신용)

	value1 = 0b1101011; // 0b는 뒤 숫자 이진법 표기 선언, 두 숫자 이진법
	value1 = 0123; //8진법 표기법
	value1 = 0x9f; //0x는 16진법 표기법
	unsigned int value2;//unsigned는 정수만 가능
	float value3; //실수 가능
	char c1 = 'b';//문자 가능
	c1 = '\101';//유니코드  (101=A)
	c1 = '\x41';//16진법    (41=A)

	std::cin >> c1; //값을 입력하기 전에 아래 출력을 하지않는다. 

	std::cout << "Hello World" << std::endl; //글자를 쓰고 화면에 띄운다
	std::cout << "There are " << c1 << " ways\n"<<"I love you" << std::endl; //어떤 타입이든지 조합 하여 출력할수 있다.
	value에 넣은 값을 그대로 출력한다.
	std::cout << "A\nBC\nDEF\nGH" << std::endl;

}
*/