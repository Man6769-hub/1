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
        {"Лесная область", "Березовск", "Смирнова А. В.", 740000, 38200},
        {"Речная область", "Исток", "Крылов М. П.", 1240000, 51700}
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