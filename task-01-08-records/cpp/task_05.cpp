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
        {"Пример мультфильма", "Дисней", "Уолт", "США", "Walt Disney", 1937, 1000000, 5000000, 4000000}
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