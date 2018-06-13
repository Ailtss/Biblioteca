#include <iostream>
#include <MathBasic.h>

using namespace std;
using namespace mbasic;




int main(int argc, char const *argv[])
{
	int a = 2;
	int b = 3;

	cout << MathBasic::add(a,b) << endl;
	cout << MathBasic::dif(a,b) << endl;
	cout << MathBasic::mux(a,b) << endl;
	cout << MathBasic::div(a,b) << endl;
	return 0;
}