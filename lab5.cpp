#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string numStr = to_string(num);
    int left = 0;
    int right = numStr.length() - 1;

    while (left < right) {
        if (numStr[left] != numStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int number;
    cout << "Vvedite chislo dliy proverki na palindrom: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " iyvliyetsiy palindromom" << endl;
    } else {
        cout << number << " ne iyvliyetsiy palindromom" << endl;
    }

    return 0;
}
