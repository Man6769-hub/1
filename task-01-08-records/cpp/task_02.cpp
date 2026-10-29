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
        {"Иванова", "Мария", "Ивановна", "женский", "русская", 178, 55, "2001-04-15", "101000, Россия, Москва, Тверская, 1, кв. 10"},
        {"Петрова", "Анна", "Сергеевна", "женский", "русская", 180, 57, "2003-08-20", "101000, Россия, Москва, Тверская, 2, кв. 5"}
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