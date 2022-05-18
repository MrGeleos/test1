#include <iostream>

using namespace std;

int main()
{
    int A, B, S;
    setlocale(LC_ALL, "Russian");
    cout << "Введите число A и B\n";
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    S = A + B;
    cout << "Сумма чисел А и B равна " << S << endl; // выдаются сумма чисел A и B
    return 0;
}