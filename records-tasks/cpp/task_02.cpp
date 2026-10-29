#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Model {
    std::string surname, firstName, patronymic, sex, nationality;
    int height, weight;
    std::string birthDate, address;
};

int main() {
    const std::vector<Model> models{
        {"Зайцева", "Лидия", "Павловна", "женский", "русская", 176, 54, "2002-11-03", "000000, Россия, Примерская область, Центральный, Примерск, Учебная, 12, 8"},
        {"Миронова", "Ксения", "Олеговна", "женский", "русская", 181, 56, "2004-06-17", "000000, Россия, Примерская область, Северный, Примерск, Тестовая, 7, 14"}
    };
    const auto youngest = std::max_element(models.begin(), models.end(),
        [](const Model& a, const Model& b) { return a.birthDate < b.birthDate; });
    if (youngest != models.end()) {
        std::cout << "\n=============================================\n"
              << "Самая молодая манекенщица:\n"
              << "=============================================\n"
              << youngest->surname << " " << youngest->firstName << " " << youngest->patronymic << '\n'
                  << "Пол: " << youngest->sex << '\n' << "Национальность: " << youngest->nationality << '\n'
                  << "Рост: " << youngest->height << '\n' << "Вес: " << youngest->weight << '\n'
                  << "Дата рождения: " << youngest->birthDate << '\n' << "Адрес: " << youngest->address << '\n'
                  << "---------------------------------------------\n";
    }
}