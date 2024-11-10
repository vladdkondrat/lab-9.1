#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Глобальні змінні
int n;
double x, x_p, x_k, dx, e, a, s;

// Оголошення функції обчислення доданку
void dod() {
    a *= x / n; // Доданок домножується на коефіцієнт рекурентності
}

// Оголошення функції обчислення суми ряду
void sum() {
    n = 0;
    a = 1;
    s = a;

    do {
        n++;
        dod(); // Виклик функції обчислення доданку
        s += a;
    } while (fabs(a) > e); // Повторювати, поки абсолютне значення доданку більше точності
}

// Основна функція
int main() {
    cout << " x (x_p) = "; cin >> x_p;
    cout << " x (x_k) = "; cin >> x_k;
    cout << "(dx) = "; cin >> dx;
    cout << "(e) = "; cin >> e;
    cout << endl;

    cout << setw(10) << "x" << setw(20) << "sum" << setw(20) << "exp(x)" << setw(20) << "sum of terms" << endl;
    cout << string(70, '-') << endl;

    for (x = x_p; x <= x_k; x += dx) {
        sum(); // Виклик функції обчислення суми ряду Тейлора
        cout << setw(10) << x << setw(20) << s << setw(20) << exp(x) << setw(20) << n << endl;
    }

    return 0;
}