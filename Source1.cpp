#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "������� ��� ����� ";
    cin >> a >> b;
    cout << "����� ����� ����� " << a + b << endl;
    cout << "������� ����� ����� " << abs(a - b) << endl;
    cout << "������� �������������� ������� ���� ����� ����� " << (abs(a) + abs(b)) / 2 << endl;
    cout << "������������ ����� ����� " << a*b << endl;
    int ch;
    if (a > b) { ch = a / b; }
    else { ch = b / a; }
    cout << "������� ����� ����� " << ch << endl;

    return 0;
}