#include <iostream>
#include <string>
#include <vector>

struct Region {
    std::string name, regionalCenter, governor;
    int population;
    double area;
};

int main() {
    const std::vector<Region> regions{
        {"Примерная область", "Примерск", "Иванов И. И.", 800000, 45000}
    };
    std::cout << "\n=============================================\n"
              << "Области с населением меньше 1 млн жителей:\n"
              << "=============================================\n";
    for (const auto& region : regions) {
        if (region.population < 1000000) {
            std::cout << "Название: " << region.name << '\n' << "Областной центр: " << region.regionalCenter << '\n'
                      << "Население: " << region.population << '\n' << "Площадь: " << region.area << '\n'
                      << "Губернатор: " << region.governor << '\n'
                      << "---------------------------------------------\n";
        }
    }
}