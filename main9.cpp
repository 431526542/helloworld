/*
#include <iostream>
#include<array>
#include<vector>

using namespace std;

int main()
{
	
	{
	int myArray[5] = { 0 };// myArray라는 변수가 5개 만들어진다.
	myArray[0] = 1;        // 각각 값을 지정해준다.
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;

	int myArray1[] = { 1,2,3,4 }; //이 array값은 자동적으로 4개가 생성됨
	int myArray1[]{ 1,2,3,4 };    //위와 똑같다
	int myArray1[5] = { 1,2,3 }; // 나머지 4, 5는 0으로 초기화


	//2차원배열
	int myArray2[3][4] = { 0 }; //아래와 같이 생성된다

	//0 0 0 0
	//0 0 0 0
	//0 0 0 0

	int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} }; //아래와 같이 생성된다 -> int myArray2[8] = { 1,2,3,4,5,6,7,8 }; 이거와  같다

	// 1 2 3 4
	// 5 6 7 8

	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;  //배열 추가 방법

	auto [a1, a2, a3] = arr; //위 arr의 a1에 1을 넣고 a2에 2을 넣고 a3에 3을 넣는다.



	vector<int>myVector = { 11,22 };
	myVector.push_back(33); //배열 추가 방법이다
	myVector.push_back(44); //결과값은 {11,22,33,44}
	}
	//////////////////////////////////////////////////////////
	{
	//myVector에 모든 값을 더한 값을 출력해보자
	vector<int> myVector = { 11,22,33 };

	int vectorSize = myVector.size(); //myVector.size()는 위 myVector의 {11,22,33} 갯수 이다.
	cout << " vectorsize = " << vectorSize << endl;
	int sum = 0;

	//for문을 사용하는 3가지 방법

	for (int i : myVector)
	{
		sum += i; // i가 vector값을 차례로 읽는다 0,1,2
	}

	for (auto iter = myVector.begin(); iter < myVector.ende(); iter++) // i 는 0부터 시작한다. i는 myVector.size보다 작다에 참이면 돌아간다. i가 하나씩 증가한다.
	{
		sum += *iter; //myVector[0]의 값인 11을 더한다 ->(진행)->myVector[3]이 되면 탈출 // 11+22+33값이 출력된다.
	}                 //iter 는 각각의 원소의 주소값, *는 주소안에 있는 값을 읽기

	//for(auto iter = myVector.begin(); iter < myVector.end(); iter++)
	for (int i = 0; i < myVector.size(); ++i) // i 는 0부터 시작한다. i는 myVector.size보다 작다에 참이면 돌아간다. i가 하나씩 증가한다.
	{
		sum += myVector[i]; //myVector[0]의 값인 11을 더한다 ->(진행)->myVector[3]이 되면 탈출 // 11+22+33값이 출력된다.
	}
	cout << " Sum = " << sum << endl;

	//myArray에 모든 값에 1씩 더해보자 : 11,22,33 -> 12,23,34
	int myArray[3] = { 11,22,33 };
	for (int& i : myArray) // &을 넣지 않으면 myArray[12] = 12 이렇게 안나온다. : &은 참조 값이므로 원본에도 영향을 준다.
	{
		i++;
	}
	for (int i : myArray)
	{
		cout << " myArray["<<i<<"] = "<< i << endl;
	}
	}

	{
	vector<int> myVector = { 11,22,33 };

	int vectorSize = myVector.size();
	cout << " vectorsize = " << vectorSize << endl;
	int sum = 0;

	int i = 0;
	while (i < 3) //괄호안 조건식을 판별하고 조건식이 참이면 연속으로 계산 거짓이면 구문 빠져나감
	{
		sum += myVector[i]; //i=0이고 myVector[0]의 값을 더한다
		i++;                //i를 한단계 업글시킨다
	}

	sum = 0;
	i = 0;                //do~while은 한번 계산 하고 체크를 하고 while은 체크를 하고 계산을 한다.
	do {
		sum += myVector[i];
		i++;
	} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls"); // 틀린답을 했을때 싹다 지워주고 다시 문장을 띄운다
			cout << " Whar do you like? : \n";
			cout << "1)Red\n";
			cout << "2)Blue\n";
			cout << "3)Black\n";
			cout << "4)Whire\n";
			cin >> selection;
		} while (!(4 >= selection && selection >= 0)); //!는 반대

		cout << " You like " << selection << endl;
	}
	

	{
		do {
			system("cls"); 
			int a, b = { 0 };
			cout << " put number [A B] : \n";
			cin >> a >> b;

			
			cout << " A+B = " << a + b << endl;
			cout << " Quit ? (Y/N) : ";
			char q = ' ';
			cin >> q;
			if (q == 'Y')
			{
				break;
			}
		} while (1);
	}
}
*/