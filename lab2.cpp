#include <iostream>

int main() {
    // Количество пассажиров, ожидающих на автовокзале
    int total_passengers;
    std::cout << "Vvedite kolichestvo passajirov, ojidaushih na avtovokzale: ";
    std::cin >> total_passengers;

    // Рассчитываем количество свободных мест в последнем автобусе
    int remaining_seats = total_passengers % 50;
    remaining_seats = 50 - remaining_seats;
    
    std::cout << "V poslednem avtobuse budet " << remaining_seats << " svibodnih mest." << std::endl;

    return 0;
}