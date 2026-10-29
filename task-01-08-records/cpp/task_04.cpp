#include <iostream>
#include <map>
#include <string>
#include <vector>

struct Zoo {
    std::string name, address;
    std::map<std::string, int> animals;
    int totalAnimals, employees;
};

int main() {
    const std::vector<Zoo> zoos{
        {"Городской зоопарк", "Москва, Россия", {{"Уссурийский тигр", 2}}, 500, 80}
    };
    std::cout << "\n=============================================\n"
              << "Зоопарки с уссурийскими тиграми:\n"
              << "=============================================\n";
    for (const auto& zoo : zoos) {
        const auto tiger = zoo.animals.find("Уссурийский тигр");
        if (tiger != zoo.animals.end() && tiger->second > 0) {
            std::cout << "Название: " << zoo.name << '\n' << "Уссурийских тигров: " << tiger->second << '\n'
                      << "Адрес: " << zoo.address << '\n' << "Всего животных: " << zoo.totalAnimals << '\n'
                      << "Работники: " << zoo.employees << '\n'
                      << "---------------------------------------------\n";
        }
    }
}