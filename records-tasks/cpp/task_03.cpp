#include <iostream>
#include <string>
#include <vector>

struct Company {
    std::string name, website, headquarters;
    int yearsOnMarket, employees, europeanBranches;
};

int main() {
    const std::vector<Company> companies{
        {"Северные технологии", "https://example.org", "Учебный проспект, 10, Примерск", 12, 14500, 18},
        {"Тестовая мастерская", "https://example.net", "Тестовая улица, 4, Примерск", 8, 9600, 3}
    };
    std::cout << "\n=============================================\n"
              << "Компании с числом сотрудников больше 10000:\n"
              << "=============================================\n";
    for (const auto& company : companies) {
        if (company.employees > 10000) {
            std::cout << "Название: " << company.name << '\n' << "Сайт: " << company.website << '\n'
                      << "Адрес главного офиса: " << company.headquarters << '\n'
                      << "Лет на мировом рынке: " << company.yearsOnMarket << '\n'
                      << "Сотрудники: " << company.employees << '\n'
                      << "Филиалы в Европе: " << company.europeanBranches << '\n'
                      << "---------------------------------------------\n";
        }
    }
}