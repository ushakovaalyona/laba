#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int  n;
	cout << "??????? ????? ?? 1 ?? 9999 " << endl;
	cin >> n;
	int a;
	a = n / 1000;
	if (a == 1) { cout << "???? ?????? "; }
	if (a == 2) { cout << "??? ?????? "; }
	if (a == 3) { cout << "??? ?????? "; }
	if (a == 4) { cout << "?????? ?????? "; }
	if (a == 5) { cout << "???? ????? "; }
	if (a == 6) { cout << "????? ????? "; }
	if (a == 7) { cout << "???? ????? "; }
	if (a == 8) { cout << "?????? ????? "; }
	if (a == 9) { cout << "?????? ????? "; }
	if (n % 1000 == 0) { cout << "??????"; }

	int b;
	b = (n % 1000) / 100;
	if (b == 1) { cout << "??? "; }
	if (b == 2) { cout << "?????? "; }
	if (b == 3) { cout << "?????? "; }
	if (b == 4) { cout << "????????? "; }
	if (b == 5) { cout << "??????? "; }
	if (b == 6) { cout << "???????? "; }
	if (b == 7) { cout << "??????? "; }
	if (b == 8) { cout << "????????? "; }
	if (b == 9) { cout << "????????? "; }
	if (n % 100 == 0) { cout << "??????"; }

	int c;
	c = (n % 100) / 10;
	if (c == 2) { cout << "???????? "; }
	if (c == 3) { cout << "???????? "; }
	if (c == 4) { cout << "????? "; }
	if (c == 5) { cout << "????????? "; }
	if (c == 6) { cout << "?????????? "; }
	if (c == 7) { cout << "????????? "; }
	if (c == 8) { cout << "??????????? "; }
	if (c == 9) { cout << "????????? "; }

	int co;
	co = n % 100;
	if (co == 10) { cout << "?????? ??????"; }
	else if (co == 11) { cout << "??????????? ??????"; }
	else if (co == 12) { cout << "?????????? ??????"; }
	else if (co == 13) { cout << "?????????? ??????"; }
	else if (co == 14) { cout << "???????????? ??????"; }
	else if (co == 15) { cout << "?????????? ??????"; }
	else if (co == 16) { cout << "??????????? ??????"; }
	else if (co == 17) { cout << "?????????? ??????"; }
	else if (co == 18) { cout << "???????????? ??????"; }
	else if (co == 19) { cout << "???????????? ??????"; }
	else {
		int d;
		d = n % 10;
		if (d == 1) { cout << "???? ????? "; }
		if (d == 2) { cout << "??? ????? "; }
		if (d == 3) { cout << "??? ????? "; }
		if (d == 4) { cout << "?????? ????? "; }
		if (d == 5) { cout << "???? ?????? "; }
		if (d == 6) { cout << "????? ?????? "; }
		if (d == 7) { cout << "???? ?????? "; }
		if (d == 8) { cout << "?????? ?????? "; }
		if (d == 9) { cout << "?????? ?????? "; }
	}
}