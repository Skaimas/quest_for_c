#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

struct Record {
    std::string phoneNumber;
    std::string fullName;
    std::string address;
};

bool compareRecords(const Record &a, const Record &b) {
    return a.phoneNumber < b.phoneNumber;
}

int main() {
    std::ifstream inputFile("lib8in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Unable to open input file." << std::endl;
        return 1;
    }

    std::vector<Record> records;
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        Record record;
        iss >> record.phoneNumber >> record.fullName >> record.address;
        records.push_back(record);
    }
    inputFile.close();

    std::sort(records.begin(), records.end(), compareRecords);

    std::ofstream outputFile("lib8out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open output file." << std::endl;
        return 1;
    }

    for (const auto &record : records) {
        outputFile << record.phoneNumber << " " << record.fullName << " " << record.address << std::endl;
    }
    outputFile.close();

    std::cout << "Records sorted and saved in output.txt." << std::endl;

    return 0;
}