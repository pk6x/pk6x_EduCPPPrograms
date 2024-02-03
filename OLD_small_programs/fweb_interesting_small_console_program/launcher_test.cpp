#include "applib.h"

using namespace std;

int main(void)
{
	cout << "resutl from SaySomething: " << endl;
	SaySomething("Hello World");
	cout << endl;

	char *str = pipecommand("dir /w");
	cout << "data from pipecommand: \n" << str << endl;
	cout << endl;

	char tgt[50]="";
	StrCpy(tgt, "hello world");
	cout << "tgt: " << tgt << endl;

	StrCat("Hello World", ", I am here", tgt);
	cout << "tgt: " << tgt << endl;

	int sum = add(20, 25);
	cout << "sum: " << sum << endl;

	double product = multiply(2.5, 4.8);
	cout << "product: " << product << endl;

	std::cin.get();
}