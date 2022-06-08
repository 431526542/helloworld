/*
#include <iostream>
#include<bitset>

using namespace std;

int main()
{
    //5번//
	int a = { 0 };
	cout << "주민번호 뒷자리를 입력하시오 : ";
	cin >> a;
	a /= 1000000;

	switch (a)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "남자" << endl;
		break;
	case 2:
	case 4:
		cout << "여자" << endl;
		break;
	default:
		cout << "ㅋㅋㅋ 너간첩이냐" << endl;
		break;
	}
    
	//4번//
	int a = { 0 };
	cout << " 숫자한개입력 ";
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

    
	//3번//
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

	
	//1번//
	int Score = { 0 };
	cin >> Score;
	
	Score /= 10;

	switch (Score)
	{
	case 10: //폴스루(흘려보내기)시킬수 있다 break가 없으면 걸리지 않는다.    __fallthrough;가 명령어이다.
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

	//2번//
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

    //if문으로 이렇게도 사용한다//
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