#include <iostream>
#include <string>
#include <vector>

struct FootballPlayer {
    std::string surname, firstName, patronymic, sex, nationality, birthDate, phone, team, role;
    int height, weight, teamNumber, goals, games;
};

int main() {
    const std::vector<FootballPlayer> players{
        {"Иванов", "Иван", "Иванович", "мужской", "русский", "2000-05-12", "+70000000000", "Динамо", "нападающий", 185, 80, 10, 12, 63}
    };
    std::cout << "\n=============================================\n"
              << "Футболисты, сыгравшие больше 50 матчей:\n"
              << "=============================================\n";
    for (const auto& player : players) {
        if (player.games > 50) {
            std::cout << "ФИО: " << player.surname << " " << player.firstName << " " << player.patronymic << '\n'
                      << "Пол: " << player.sex << '\n' << "Национальность: " << player.nationality << '\n'
                      << "Рост: " << player.height << '\n' << "Вес: " << player.weight << '\n'
                      << "Дата рождения: " << player.birthDate << '\n' << "Телефон: " << player.phone << '\n'
                      << "Команда: " << player.team << '\n' << "Номер: " << player.teamNumber << '\n'
                      << "Амплуа: " << player.role << '\n' << "Голы: " << player.goals << '\n'
                      << "Игры: " << player.games << '\n'
                      << "---------------------------------------------\n";
        }
    }
}