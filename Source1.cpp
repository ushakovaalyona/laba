#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите два числа ";
    cin >> a >> b;
    cout << "Сумма чисел равна " << a + b << endl;
    cout << "Разнсть чисел равна " << abs(a - b) << endl;
    cout << "Среднее арифметическое модулей этих чисел равно " << (abs(a) + abs(b)) / 2 << endl;
    cout << "Произведение чисел равно " << a*b << endl;
    int ch;
    if (a > b) { ch = a / b; }
    else { ch = b / a; }
    cout << "Частное чисел равно " << ch << endl;

    return 0;
}