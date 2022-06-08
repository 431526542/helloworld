/*
#include<iostream>
#include<bitset>//비트를 보기위해사용하는 표준 라이브러리

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++; 
		//b = ++a;
		b = a--;
		//b = --a;
		cout << "a= " << a << "b= " << b << endl;
		
	}
	{
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false; //true or false에 원하는 값을 넣을 수 있다.
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;
		result = (a > 0 || b > 0) ? true : false;
		result = (a < 0 && --b>0) ? true : false; //c++은 앞에있는게 false면 뒤에건 실행안함 .>>그래서 원래 b=-6이여야하는데 b=-5이다
		result = !(a > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << " b =" << b << endl; //true false로 보고 싶으면 boolalpha를 붙인다.
		cout << "Result = " <<   result << " b =" << b << endl;
	}
	{
		int num = 10;
		cout << "2진법 num bit =" << bitset<32>(num) << endl; //int는 32bit이다.
		cout << "8진법 num bit = "<< oct << num << endl;
		cout << "10진법 num bit = " << dec << num << endl;
		cout << "16진법 num bit = " << hex << num << endl;
		int x = 0x35;
		int y = 0xf0;
		cout << "x = "<< bitset<32>(x) << endl;
		cout << "y = "<< bitset<32>(y) << endl;
		cout << " x & y = " << bitset<32>(x & y) << endl;//and
		cout << " x | y = " << bitset<32>(x | y) << endl;//or
		cout << " x ^ y = " << bitset<32>(x ^ y) << endl;//xor
		cout << " ~x = " << bitset<32>(~x) << endl;//not 

		int x1 = x << 2;//2단계왼쪽밀기
		cout << "x1 = " << bitset<32>(x1) << endl;

		char cX = 0b10010100; //char는 8bit
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;// 맨앞자리 bit를 복사해서 이동한다 
												 //10010100이면 앞숫자가 1로 나오고 000101000이면 앞숫자가 0으로 나온다.
	}
	{
		//형변환

		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar; //intVar는 int형으로 1로 변환된다.
		floatVar = intVar;

		//자료형 우선 순위
		//char < int < long < float < double < long double

		intVar = doubleVar + intVar * floatVar; // intVar*floatVar는 float형으로 변환 -> double형으로 변환 -> int형으로 변환
	}
	{
		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 대 수식에 지정된 그대로 변환함 (제일 빠름)
		//dynamic_cast: 기초 클래스와 파생 클래스 간의 포인터 또는 참고 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast: 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역의로 변환함
		//const_cast: const 지정을 일시 해제함

		double d = 10.5;
		int a = static_cast<int>(d); //명시적으로 변환된 코드
	}
}
*/