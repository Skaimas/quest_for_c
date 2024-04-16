#include <iostream>
#include <vector>
#include <cmath>
#include <clocale>

using namespace std;

// Структура для представления точки в 2D пространстве
struct Point {
    double x, y;
};

// Функция для вычисления площади многоугольника
double calculateArea(const vector<Point>& vertices) {
    int n = vertices.size();
    double area = 0.0;

    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        area += (vertices[i].x * vertices[j].y - vertices[j].x * vertices[i].y);
    }

    return abs(area) / 2.0;
}

int main() {
	
	setlocale(LC_ALL, "rus");
	
    int n;
    cout << "Vvedite kolichestvo vershin mnogougolnika: ";
    cin >> n;

    vector<Point> vertices(n);

    cout << "Vvedite koordinali vershin mnogougolnika:\n";
    for (int i = 0; i < n; ++i) {
        cout << "vershina " << i + 1 << ":\n";
        cout << "x: ";
        cin >> vertices[i].x;
        cout << "y: ";
        cin >> vertices[i].y;
    }

    double area = calculateArea(vertices);
    cout << "Ploshad mnogougolnika: " << area << endl;

    return 0;
}