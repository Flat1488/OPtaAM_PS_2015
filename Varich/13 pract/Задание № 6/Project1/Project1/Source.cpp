#include "Windows.h"
#include "iostream"
#include "cstdlib"
#include "istream"

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}

int main()
{
	char c;
	int a;
	SetColor(10, 0);
	cout << "Enter letter:" << endl;
	cin >> c;
	cin.ignore();
	SetColor(12, 0);
	cout << "Now number: " << endl;
	cin >> a;
	SetColor(10, 0);
	cout << "Enter: " << endl;
	cout << c << "&" << a << endl;
	SetColor(7, 0);
	system("pause");
}