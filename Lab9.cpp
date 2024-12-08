#include <iostream>
#include <Windows.h>
using namespace std;

struct Circle {
    double x, y; // Координати центру
    double r;    // Радіус
};

int main() {
    system("chcp 65001");
    Circle c;
    double px, py; // Координати точки

    cout << "Введіть центр кола (x y): ";
    cin >> c.x >> c.y;
    cout << "Введіть радіус кола: ";
    cin >> c.r;

    cout << "Введіть координати точки (x y): ";
    cin >> px >> py;

    double dx = px - c.x, dy = py - c.y;
    if (dx * dx + dy * dy <= c.r * c.r) {
        cout << "Точка лежить всередині кола\n";
    } else {
        cout << "Точка не лежить всередині кола\n";
    }

    return 0;
}
