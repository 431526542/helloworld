#include<iostream>
#include"employeestruct.h"

using namespace std;

enum PieceType1 {PieceTypeking=1, PieceTypeQueen, PieceTypeRook=10, PieceTypePawn}; //������� ������ ���ڰ� �ٴ´�.

enum class PieceType : unsigned long {King=1, Queen, Rook=10,Pawn};

int main()
{
	PieceType1 myPiece1 = PieceTypeRook; //���� enum�� �ڵ����� ��ȯ�� �����ϴ�.
	int a = myPiece1;

	PieceType myPiece2 = PieceType:: King; //���� enum class���� �ڵ����� ��ȯ���� �ʴ´�. �׷��� ���� ���� unsifend long�� ����Ѵ�.
	//int b = myPiece; 

	//���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstlnitial = 'M';
	anEmployee.lastlnitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstlnitial <<
							anEmployee.lastlnitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary & " << anEmployee.salary << endl;

}