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
	someFloat = someLong + 0.785f;//5140000.785  (float�� ������ ���ڸ����� 7�ڸ�����) -> 5140000
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

	const int a = 0; //�������� ������ �� ���� >> a=1 �̷������� ���� �Ұ���
	constexpr int b = fac(4); //������ ������� ���� ���� ���� �����Ѵ� >>�Ӹ��ӿ��� ������
	//int b = fac(4); //������ �°� ����� �������� ���
}
*/