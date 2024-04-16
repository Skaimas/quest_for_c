#include <iostream>
#include <fstream>
#include <stack>

int main() {
    std::ifstream inputFile("fail.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Nevozmojno otkrit fail dliy chteniiy." << std::endl;
        return 1;
    }

    std::stack<char> bracketStack;
    char character;
    int lineNumber = 1;
    bool balanced = true;

    while (inputFile.get(character)) {
        if (character == '{') {
            bracketStack.push('{');
        } else if (character == '}') {
            if (bracketStack.empty()) {
                balanced = false;
                break;
            } else {
                bracketStack.pop();
            }
        } else if (character == '\n') {
            lineNumber++;
        }
    }

    if (!bracketStack.empty() || !balanced) {
        std::cout << "Nesbalansirovannie figurnie skobki naideni na stroke " << lineNumber << std::endl;
        outputFile << "Nesbalansirovannie figurnie skobki naideni na stroke " << lineNumber << std::endl;
    } else {
        std::cout << "figurnie skobki sbalansirovani" << std::endl;
        outputFile << "figurnie skobki sbalansirovani" << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}