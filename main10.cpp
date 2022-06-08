
#include <iostream>
#include "employeestruct.h"
#include"CircleClass.h"

using namespace std;
/*
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

double circleArea(CircleType c)
{
	//반지름 * 반지름 * PI = 원의 넓이 
	return c.radius * c.radius * PI;
}

double getDistance(CircleType c1, CircleType c2)  //피타고라스의 정리
{        
	double dx = c1.center.x - c2.center.x;    
	double dy = c1.center.y - c2.center.y;    
	double dCntr = sqrt(dx * dx + dy * dy); //sqrt:제곱근    
	return dCntr; 
}

bool lsOverlapped(CircleType c1, CircleType c2)
{
	double distance = getDistance(c1, c2); //원 두개가 겹치는지 안겹치는지
	return(distance < c1.radius + c2.radius);
}
*/

int main()
{
	/*
	CircleType c1, c2;
	c1.center.x = 10;
	c1.center.y = 10;
	c1.radius = 10;

	c2.center.x = 30;
	c2.center.y = 30;
	c2.radius = 10;

	bool blsOverlapped = lsOverlapped(c1, c2);
	cout << " lsOverlapped = " << boolalpha << blsOverlapped << noboolalpha << endl;

	Employee aaa;
	*/

	CircleClass cc1 = { 10,10,10 };
	CircleClass cc2 = { 30,30,10 };
	bool blsOverlapped = cc1.lsOverlapped(cc2.circle);
	cout<<" lsOverlapped = "<< boolalpha << blsOverlapped << noboolalpha << endl;

}
