#include <iostream>
#include <string>
#include <vector>

struct Cartoon {
    std::string title, directorSurname, directorFirstName, country, company;
    int releaseYear;
    double cost, revenue, profit;
};

int main() {
    const std::vector<Cartoon> cartoons{
        {"Приключение в лесу", "Лесной", "Алексей", "Россия", "Walt Disney", 2021, 2000000, 5600000, 3600000}
    };
    std::cout << "\n=============================================\n"
              << "Мультфильмы компании Walt Disney:\n"
              << "=============================================\n";
    for (const auto& cartoon : cartoons) {
        if (cartoon.company == "Walt Disney") {
            std::cout << "Название: " << cartoon.title << '\n'
                      << "Режиссер: " << cartoon.directorSurname << " " << cartoon.directorFirstName << '\n'
                      << "Год выхода: " << cartoon.releaseYear << '\n' << "Страна: " << cartoon.country << '\n'
                      << "Стоимость: " << cartoon.cost << '\n' << "Доход: " << cartoon.revenue << '\n'
                      << "Прибыль: " << cartoon.profit << '\n'
                      << "---------------------------------------------\n";
        }
    }
}