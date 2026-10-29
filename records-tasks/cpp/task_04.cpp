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
        {"Лесной парк", "Примерск, улица Учебная, 5", {{"Уссурийский тигр", 3}, {"Лисица", 4}}, 215, 42},
        {"Зеленый уголок", "Примерск, улица Тестовая, 9", {{"Волк", 5}}, 80, 19}
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