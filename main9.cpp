/*
#include <iostream>
#include<array>
#include<vector>

using namespace std;

int main()
{
	
	{
	int myArray[5] = { 0 };// myArray��� ������ 5�� ���������.
	myArray[0] = 1;        // ���� ���� �������ش�.
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;

	int myArray1[] = { 1,2,3,4 }; //�� array���� �ڵ������� 4���� ������
	int myArray1[]{ 1,2,3,4 };    //���� �Ȱ���
	int myArray1[5] = { 1,2,3 }; // ������ 4, 5�� 0���� �ʱ�ȭ


	//2�����迭
	int myArray2[3][4] = { 0 }; //�Ʒ��� ���� �����ȴ�

	//0 0 0 0
	//0 0 0 0
	//0 0 0 0

	int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} }; //�Ʒ��� ���� �����ȴ� -> int myArray2[8] = { 1,2,3,4,5,6,7,8 }; �̰ſ�  ����

	// 1 2 3 4
	// 5 6 7 8

	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;  //�迭 �߰� ���

	auto [a1, a2, a3] = arr; //�� arr�� a1�� 1�� �ְ� a2�� 2�� �ְ� a3�� 3�� �ִ´�.



	vector<int>myVector = { 11,22 };
	myVector.push_back(33); //�迭 �߰� ����̴�
	myVector.push_back(44); //������� {11,22,33,44}
	}
	//////////////////////////////////////////////////////////
	{
	//myVector�� ��� ���� ���� ���� ����غ���
	vector<int> myVector = { 11,22,33 };

	int vectorSize = myVector.size(); //myVector.size()�� �� myVector�� {11,22,33} ���� �̴�.
	cout << " vectorsize = " << vectorSize << endl;
	int sum = 0;

	//for���� ����ϴ� 3���� ���

	for (int i : myVector)
	{
		sum += i; // i�� vector���� ���ʷ� �д´� 0,1,2
	}

	for (auto iter = myVector.begin(); iter < myVector.ende(); iter++) // i �� 0���� �����Ѵ�. i�� myVector.size���� �۴ٿ� ���̸� ���ư���. i�� �ϳ��� �����Ѵ�.
	{
		sum += *iter; //myVector[0]�� ���� 11�� ���Ѵ� ->(����)->myVector[3]�� �Ǹ� Ż�� // 11+22+33���� ��µȴ�.
	}                 //iter �� ������ ������ �ּҰ�, *�� �ּҾȿ� �ִ� ���� �б�

	//for(auto iter = myVector.begin(); iter < myVector.end(); iter++)
	for (int i = 0; i < myVector.size(); ++i) // i �� 0���� �����Ѵ�. i�� myVector.size���� �۴ٿ� ���̸� ���ư���. i�� �ϳ��� �����Ѵ�.
	{
		sum += myVector[i]; //myVector[0]�� ���� 11�� ���Ѵ� ->(����)->myVector[3]�� �Ǹ� Ż�� // 11+22+33���� ��µȴ�.
	}
	cout << " Sum = " << sum << endl;

	//myArray�� ��� ���� 1�� ���غ��� : 11,22,33 -> 12,23,34
	int myArray[3] = { 11,22,33 };
	for (int& i : myArray) // &�� ���� ������ myArray[12] = 12 �̷��� �ȳ��´�. : &�� ���� ���̹Ƿ� �������� ������ �ش�.
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
	while (i < 3) //��ȣ�� ���ǽ��� �Ǻ��ϰ� ���ǽ��� ���̸� �������� ��� �����̸� ���� ��������
	{
		sum += myVector[i]; //i=0�̰� myVector[0]�� ���� ���Ѵ�
		i++;                //i�� �Ѵܰ� ���۽�Ų��
	}

	sum = 0;
	i = 0;                //do~while�� �ѹ� ��� �ϰ� üũ�� �ϰ� while�� üũ�� �ϰ� ����� �Ѵ�.
	do {
		sum += myVector[i];
		i++;
	} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls"); // Ʋ������ ������ �ϴ� �����ְ� �ٽ� ������ ����
			cout << " Whar do you like? : \n";
			cout << "1)Red\n";
			cout << "2)Blue\n";
			cout << "3)Black\n";
			cout << "4)Whire\n";
			cin >> selection;
		} while (!(4 >= selection && selection >= 0)); //!�� �ݴ�

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