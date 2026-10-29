#include <iostream>
#include <string>
#include <vector>

struct BasketballPlayer {
    std::string surname, firstName, patronymic, sex, nationality, birthDate, phone, team, role;
    int height, weight, teamNumber, points, games;
};

int main() {
    const std::vector<BasketballPlayer> players{
        {"Сидоров", "Петр", "Алексеевич", "мужской", "русский", "1999-02-10", "+70000000001", "Спартак", "защитник", 198, 90, 7, 180, 20}
    };
    std::cout << "\n=============================================\n"
              << "Баскетболисты, набравшие больше 150 очков:\n"
              << "=============================================\n";
    for (const auto& player : players) {
        if (player.points > 150) {
            std::cout << "ФИО: " << player.surname << " " << player.firstName << " " << player.patronymic << '\n'
                      << "Пол: " << player.sex << '\n' << "Национальность: " << player.nationality << '\n'
                      << "Рост: " << player.height << '\n' << "Вес: " << player.weight << '\n'
                      << "Дата рождения: " << player.birthDate << '\n' << "Телефон: " << player.phone << '\n'
                      << "Команда: " << player.team << '\n' << "Номер: " << player.teamNumber << '\n'
                      << "Амплуа: " << player.role << '\n' << "Очки: " << player.points << '\n'
                      << "Игры: " << player.games << '\n'
                      << "---------------------------------------------\n";
        }
    }
}