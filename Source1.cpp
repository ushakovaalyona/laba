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


    return 0;
}S