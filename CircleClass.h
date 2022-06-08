#pragma once
#include<iostream>

const double PI = 3.141592;

struct C2dType//circle 2d type의 약자
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass //struct와 비슷하다/설계도와 비슷하다
{
public: //모든곳에서 접근가능

	CircleClass(); //생성자 
	CircleClass(double x, double y, double radius);
	~CircleClass(); //파괴자


	void initialize(double x, double y, double radius);

	double circleArea(); //면적구하기 기능
	double getDistance(CircleType target); //다겟과 거리구하기 기능
	bool lsOverlapped(CircleType target); //타겟과 오버렙 되어있는지 채크하는 기능

	CircleType circle;


private: //다른 곳에서 접근할 수 없음





protected: //자식까지는 접근할수 있음	






};