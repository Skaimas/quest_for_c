#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ages(5);

    cout << "Vvedite vozrast kajdogo iz 5 chelovek cherez probel: ";
    for (int i = 0; i < 5; i++) {
        cin >> ages[i];
    }

    int youngest = *min_element(ages.begin(), ages.end());
    double discount = 50 * (youngest * 0.01); // Скидка определяется возрастом самого младшего человека
    double totalCost = 50 - discount; // Общая стоимость билетов

    cout << "Obshaiy stoimost biletov sostavliyet: " << totalCost << "$" << endl;

    return 0;
}
