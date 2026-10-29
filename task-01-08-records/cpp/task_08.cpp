#include <iostream>
#include <string>
#include <vector>

struct Motorcycle {
    std::string make, color, serialNumber, registrationNumber;
    int manufactureYear, inspectionYear;
    double price;
};

int main() {
    const std::vector<Motorcycle> motorcycles{
        {"HarleyDavidson", "черный", "HD123", "А123АА", 2020, 2025, 1500000}
    };
    std::cout << "\n=============================================\n"
              << "Мотоциклы марки HarleyDavidson:\n"
              << "=============================================\n";
    for (const auto& motorcycle : motorcycles) {
        if (motorcycle.make == "HarleyDavidson") {
            std::cout << "Марка: " << motorcycle.make << '\n' << "Цвет: " << motorcycle.color << '\n'
                      << "Серийный номер: " << motorcycle.serialNumber << '\n'
                      << "Регистрационный номер: " << motorcycle.registrationNumber << '\n'
                      << "Год выпуска: " << motorcycle.manufactureYear << '\n'
                      << "Год техосмотра: " << motorcycle.inspectionYear << '\n'
                      << "Цена: " << motorcycle.price << '\n'
                      << "---------------------------------------------\n";
        }
    }
}