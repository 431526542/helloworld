/*
#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    //5��//
	int a = { 0 };
	cout << "�ֹι�ȣ ���ڸ��� �Է��Ͻÿ� : ";
	cin >> a;
	a /= 1000000;

	switch (a)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "����" << endl;
		break;
	case 2:
	case 4:
		cout << "����" << endl;
		break;
	default:
		cout << "������ �ʰ�ø�̳�" << endl;
		break;
	}
    
	//4��//
	int a = { 0 };
	cout << " �����Ѱ��Է� ";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "red" << endl;
		break;
	case 2:
		cout << "blue" << endl;
		break;
	case 3:
		cout << "black" << endl;
		break;
	case 4:
		cout << "white" << endl;
		break;
	default:
		cout << "?????" << endl;
		break;
	}

    
	//3��//
	int a, b, c = { 0 };
	cout << " A is ? ";
	cin >> a;
	cout << " B is ? ";
	cin >> b;
	cout << " c is ? ";
	cin >> c;

	bool result = (a + b = c);
	switch (result)
	{
	case true:
		cout << a + b << endl;
		break;
	default:
		cout << c << endl;
		break;
	}

	
	//1��//
	int Score = { 0 };
	cin >> Score;
	
	Score /= 10;

	switch (Score)
	{
	case 10: //������(���������)��ų�� �ִ� break�� ������ �ɸ��� �ʴ´�.    __fallthrough;�� ��ɾ��̴�.
		__fallthrough;
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}

	//2��//
	int a, b = { 0 };
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;

	bool result = (a - b > 0);
	
	switch(result)
	{
		case true:
			cout << "true" << endl;
			break;
		default:
			cout << "false" << endl;
			break;
	}

    //if������ �̷��Ե� ����Ѵ�//
	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << "B" << endl;
	}
	else if(80>Score&&Score>=70)
	{
		cout << "C" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "D" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E" << endl;
	}
	else 
	{
		cout << "F" << endl;
	}
	
}*/