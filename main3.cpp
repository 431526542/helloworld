/*#include<iostream>

using namespace std;

constexpr int fac(int n) { 
	return n > 1 ? n * fac(n - 1) : 1; 
}

int main()
{
	unsigned x = 2999999999;
	cout << "x= " << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; //257
	someInteger *= 2; // 514 (someIneger = someIneger *2)
	someShort = static_cast<short>(someInteger); //someInteger=someShout = 514
	someLong = someShort * 10000; // 5140000
	someFloat = someLong + 0.785f;//5140000.785  (float은 범위가 앞자리부터 7자리까지) -> 5140000
	someDouble = static_cast<double>(someFloat) / 100000; // (someFloat=someDouble=5140000)/100000 = 51.4
	cout << someDouble << endl;


	int firstNum = 0;
	cout << "firstNum : "<< endl;
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : " << endl;
	cin >> secondNum;
	cout << "Sum :" << endl;
	cout << firstNum + secondNum << endl;

	const int a = 0; //절댓값지정 수정할 수 없다 >> a=1 이런식으로 설정 불가능
	constexpr int b = fac(4); //순서에 상관없이 먼저 값을 먼저 선정한다 >>머리속에서 지워라
	//int b = fac(4); //순서에 맞게 계산후 마지막에 계산
}
*/