#include <iostream>
#include <vector>

class Queue {
private:
    std::vector<int> data;

public:
    void add(int element) {
        data.push_back(element);
    }

    void remove() {
        if (data.empty()) {
            std::cout << "Ochered pusta. Nevozmojno udalit element." << std::endl;
        } else {
            data.erase(data.begin());
        }
    }

    void print() {
        std::cout << "Ochered: ";
        for (int i = 0; i < data.size(); ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    queue.add(5);
    queue.add(10);
    queue.add(15);

    queue.print(); // Очередь: 5 10 15

    queue.remove();
    queue.print(); // Очередь: 10 15

    return 0;
}
