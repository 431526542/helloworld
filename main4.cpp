#include<iostream>
#include"employeestruct.h"

using namespace std;

enum PieceType1 {PieceTypeking=1, PieceTypeQueen, PieceTypeRook=10, PieceTypePawn}; //순서대로 고유의 숫자가 붙는다.

enum class PieceType : unsigned long {King=1, Queen, Rook=10,Pawn};

int main()
{
	PieceType1 myPiece1 = PieceTypeRook; //위에 enum은 자동으로 변환이 가능하다.
	int a = myPiece1;

	PieceType myPiece2 = PieceType:: King; //위에 enum class값은 자동으로 변환되지 않는다. 그래서 위와 같이 unsifend long을 사용한다.
	//int b = myPiece; 

	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstlnitial = 'M';
	anEmployee.lastlnitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstlnitial <<
							anEmployee.lastlnitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary & " << anEmployee.salary << endl;

}