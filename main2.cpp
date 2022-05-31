/*#include<iostream>

using namespace std; // 앞서 배웠던 std::cout에 std를 뺄 수 있다.

namespace myNS1 { int n = 10; } 
namespace myNS2 { int n = 20; }
int n = 30; //전역변수 다른함수 안에서 접근가능

int main(int argc, char* argv[]) {
	int n = 40; //지역변수 함수안에서만 접근가능

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl; 
	cout << n << endl;
	

	float myFloat = 3.14f;
	int i1 = (int)myFloat;//비추
	int i2 = int(myFloat);//비추
	int i3 = static_cast<int>(myFloat); //정확한 형변환 방법


	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; // 이렇게 표현하고 값은 12*(10^2) 이다.
	double d4 = 1.2e+3; // 이렇게도 표현하고 값을 읽을 때는 위와 똑같이 1.2*(10^3) 형식으로 읽는다. -는 마이너스 제곱이다.
	cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << endl;
}
//n이 똑같이 여러개가 있다. 하지만 값이 다르기 때문에 똑닽은 n이 아니다. 이n값을 다르게 출력 할 수 있다.
*/