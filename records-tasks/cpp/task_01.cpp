#include <iostream>
#include <string>
#include <vector>

struct FootballPlayer {
    std::string surname, firstName, patronymic, sex, nationality, birthDate, phone, team, role;
    int height, weight, teamNumber, goals, games;
};

int main() {
    const std::vector<FootballPlayer> players{
        {"Орлов", "Артем", "Сергеевич", "мужской", "русский", "2001-03-14", "+7-000-000-00-01", "Сокол", "полузащитник", 181, 76, 8, 9, 72},
        {"Фомин", "Егор", "Денисович", "мужской", "русский", "2002-11-06", "+7-000-000-00-02", "Вымпел", "защитник", 188, 82, 4, 2, 38}
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