#pragma once
#include<iostream>

const double PI = 3.141592;

struct C2dType//circle 2d type�� ����
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass //struct�� ����ϴ�/���赵�� ����ϴ�
{
public: //�������� ���ٰ���

	CircleClass(); //������ 
	CircleClass(double x, double y, double radius);
	~CircleClass(); //�ı���


	void initialize(double x, double y, double radius);

	double circleArea(); //�������ϱ� ���
	double getDistance(CircleType target); //�ٰٰ� �Ÿ����ϱ� ���
	bool lsOverlapped(CircleType target); //Ÿ�ٰ� ������ �Ǿ��ִ��� äũ�ϴ� ���

	CircleType circle;


private: //�ٸ� ������ ������ �� ����





protected: //�ڽı����� �����Ҽ� ����	






};