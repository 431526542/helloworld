/*
#include<iostream>
#include<bitset>//��Ʈ�� �������ػ���ϴ� ǥ�� ���̺귯��

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
		result = (a > b) ? true : false; //true or false�� ���ϴ� ���� ���� �� �ִ�.
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;
		result = (a > 0 || b > 0) ? true : false;
		result = (a < 0 && --b>0) ? true : false; //c++�� �տ��ִ°� false�� �ڿ��� ������� .>>�׷��� ���� b=-6�̿����ϴµ� b=-5�̴�
		result = !(a > 0) ? true : false;
		cout << "Result = " << boolalpha << result << noboolalpha << " b =" << b << endl; //true false�� ���� ������ boolalpha�� ���δ�.
		cout << "Result = " <<   result << " b =" << b << endl;
	}
	{
		int num = 10;
		cout << "2���� num bit =" << bitset<32>(num) << endl; //int�� 32bit�̴�.
		cout << "8���� num bit = "<< oct << num << endl;
		cout << "10���� num bit = " << dec << num << endl;
		cout << "16���� num bit = " << hex << num << endl;
		int x = 0x35;
		int y = 0xf0;
		cout << "x = "<< bitset<32>(x) << endl;
		cout << "y = "<< bitset<32>(y) << endl;
		cout << " x & y = " << bitset<32>(x & y) << endl;//and
		cout << " x | y = " << bitset<32>(x | y) << endl;//or
		cout << " x ^ y = " << bitset<32>(x ^ y) << endl;//xor
		cout << " ~x = " << bitset<32>(~x) << endl;//not 

		int x1 = x << 2;//2�ܰ���ʹб�
		cout << "x1 = " << bitset<32>(x1) << endl;

		char cX = 0b10010100; //char�� 8bit
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;// �Ǿ��ڸ� bit�� �����ؼ� �̵��Ѵ� 
												 //10010100�̸� �ռ��ڰ� 1�� ������ 000101000�̸� �ռ��ڰ� 0���� ���´�.
	}
	{
		//����ȯ

		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar; //intVar�� int������ 1�� ��ȯ�ȴ�.
		floatVar = intVar;

		//�ڷ��� �켱 ����
		//char < int < long < float < double < long double

		intVar = doubleVar + intVar * floatVar; // intVar*floatVar�� float������ ��ȯ -> double������ ��ȯ -> int������ ��ȯ
	}
	{
		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ�� (���� ����)
		//dynamic_cast: ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast: �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ���Ƿ� ��ȯ��
		//const_cast: const ������ �Ͻ� ������

		double d = 10.5;
		int a = static_cast<int>(d); //��������� ��ȯ�� �ڵ�
	}
}
*/