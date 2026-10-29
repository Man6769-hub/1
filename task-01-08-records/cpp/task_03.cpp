#include <iostream>
#include <string>
#include <vector>

struct Company {
    std::string name, website, headquarters;
    int yearsOnMarket, employees, europeanBranches;
};

int main() {
    const std::vector<Company> companies{
        {"Пример", "https://example.com", "Москва, Россия", 25, 12000, 30}
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