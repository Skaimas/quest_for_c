#include <iostream>
#include <cmath>

using namespace std;

bool canQueenMove(int x1, int y1, int x2, int y2) {
    // Проверяем, находятся ли клетки на одной диагонали или на одной горизонтали/вертикали
    return (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2));
}

int main() {
    int x1, y1, x2, y2;
    
    // Ввод координат первой клетки
    cout << "Vvedite koordinati pervoi kletki (x y): ";
    cin >> x1 >> y1;
    
    // Ввод координат второй клетки
    cout << "Vvedite koordinati vtoroi kletki (x y): ";
    cin >> x2 >> y2;
    
    // Проверяем, может ли ферзь совершить ход из первой клетки во вторую
    if (canQueenMove(x1, y1, x2, y2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
