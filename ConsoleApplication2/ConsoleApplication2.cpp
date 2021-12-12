#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 0, b = 0;
    char operation;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите операцию: ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Ответ: " << a + b << endl;
        break;
    case '-':
        cout << "Ответ: " << a - b << endl;
        break;
    case '*':
        cout << "Ответ: " << a * b << endl;
        break;
    case '/':
        cout << "Ответ: " << a / b << endl;
        break;
    default:
        cout << "Ошибка" << endl;
    }
    return 0;
}