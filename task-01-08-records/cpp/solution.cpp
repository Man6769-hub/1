#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string surname;
    string firstName;
    string patronymic;
    string sex;
    string nationality;
    int height;
    int weight;
    string birthDate;
};

struct Address {
    string postalCode;
    string country;
    string region;
    string district;
    string city;
    string street;
    string house;
    string apartment;
};

struct FootballPlayer {
    Person person;
    string phone;
    string team;
    int teamNumber;
    string role;
    int goals;
    int games;
};

struct Model {
    Person person;
    Address address;
};

struct InternationalCompany {
    string name;
    string website;
    Address headquarters;
    int yearsOnMarket;
    int employees;
    int europeanBranches;
};

struct Zoo {
    string name;
    map<string, int> animalCounts;
    Address address;
    int totalAnimals;
    int employees;
};

struct Cartoon {
    string title;
    string directorSurname;
    string directorFirstName;
    int releaseYear;
    string country;
    double cost;
    double revenue;
    double profit;
    string company;
};

struct BasketballPlayer {
    Person person;
    string phone;
    string team;
    int teamNumber;
    string role;
    int points;
    int games;
};

struct Region {
    string name;
    string regionalCenter;
    int population;
    double area;
    string governor;
};

struct Motorcycle {
    string make;
    string color;
    string serialNumber;
    string registrationNumber;
    int manufactureYear;
    int inspectionYear;
    double price;
};

void printHeader(const string& title) {
    cout << "\n=============================================\n";
    cout << title << '\n';
    cout << "=============================================\n";
}

template <typename T>
void printField(const string& name, const T& value) {
    cout << name << ": " << value << '\n';
}

void printPerson(const Person& person) {
    printField("Фамилия", person.surname);
    printField("Имя", person.firstName);
    printField("Отчество", person.patronymic);
    printField("Пол", person.sex);
    printField("Национальность", person.nationality);
    printField("Рост", person.height);
    printField("Вес", person.weight);
    printField("Дата рождения", person.birthDate);
}

void printAddress(const Address& address) {
    printField("Почтовый индекс", address.postalCode);
    printField("Страна", address.country);
    printField("Область", address.region);
    printField("Район", address.district);
    printField("Город", address.city);
    printField("Улица", address.street);
    printField("Дом", address.house);
    printField("Квартира", address.apartment);
}

int main() {
    const Address address{
        "101000", "Россия", "Московская область", "", "Москва", "Тверская", "1", "10"
    };
    const Person person{
        "Иванов", "Иван", "Иванович", "мужской", "русский", 185, 80, "2000-05-12"
    };

    // Задача 1. Футболисты
    const vector<FootballPlayer> footballers{
        {person, "+70000000000", "Динамо", 10, "нападающий", 12, 63}
    };
    printHeader("Футболисты, сыгравшие больше 50 матчей:");
    for (const auto& player : footballers) {
        if (player.games > 50) {
            printPerson(player.person);
            printField("Телефон", player.phone);
            printField("Команда", player.team);
            printField("Номер в команде", player.teamNumber);
            printField("Амплуа", player.role);
            printField("Голы", player.goals);
            printField("Игры", player.games);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 2. Манекенщицы
    const vector<Model> models{
        {person, address},
        {{"Петрова", "Анна", "Сергеевна", "женский", "русская", 180, 57, "2003-08-20"}, address}
    };
    printHeader("Самая молодая манекенщица:");
    const auto youngest = max_element(models.begin(), models.end(),
        [](const Model& first, const Model& second) {
            return first.person.birthDate < second.person.birthDate;
        });
    if (youngest != models.end()) {
        printPerson(youngest->person);
        printAddress(youngest->address);
    }

    // Задача 3. Международные компании
    const vector<InternationalCompany> companies{
        {"Пример", "https://example.com", address, 25, 12000, 30}
    };
    printHeader("Международные компании с числом сотрудников больше 10000:");
    for (const auto& company : companies) {
        if (company.employees > 10000) {
            printField("Название", company.name);
            printField("Сайт", company.website);
            printAddress(company.headquarters);
            printField("Лет на мировом рынке", company.yearsOnMarket);
            printField("Сотрудники", company.employees);
            printField("Филиалы в Европе", company.europeanBranches);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 4. Зоопарки
    const vector<Zoo> zoos{
        {"Городской зоопарк", {{"Уссурийский тигр", 2}}, address, 500, 80}
    };
    printHeader("Зоопарки, в которых есть уссурийские тигры:");
    for (const auto& zoo : zoos) {
        const auto tiger = zoo.animalCounts.find("Уссурийский тигр");
        if (tiger != zoo.animalCounts.end() && tiger->second > 0) {
            printField("Название", zoo.name);
            printField("Уссурийские тигры", tiger->second);
            printAddress(zoo.address);
            printField("Всего животных", zoo.totalAnimals);
            printField("Работники", zoo.employees);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 5. Мультфильмы
    const vector<Cartoon> cartoons{
        {"Пример мультфильма", "Дисней", "Уолт", 1937, "США", 1000000, 5000000, 4000000, "Walt Disney"}
    };
    printHeader("Мультфильмы компании Walt Disney:");
    for (const auto& cartoon : cartoons) {
        if (cartoon.company == "Walt Disney") {
            printField("Название", cartoon.title);
            printField("Режиссер", cartoon.directorSurname + " " + cartoon.directorFirstName);
            printField("Год выхода", cartoon.releaseYear);
            printField("Страна", cartoon.country);
            printField("Стоимость", cartoon.cost);
            printField("Доход", cartoon.revenue);
            printField("Прибыль", cartoon.profit);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 6. Баскетболисты
    const vector<BasketballPlayer> basketballPlayers{
        {person, "+70000000001", "Спартак", 7, "защитник", 180, 20}
    };
    printHeader("Баскетболисты, набравшие больше 150 очков:");
    for (const auto& player : basketballPlayers) {
        if (player.points > 150) {
            printPerson(player.person);
            printField("Телефон", player.phone);
            printField("Команда", player.team);
            printField("Номер в команде", player.teamNumber);
            printField("Амплуа", player.role);
            printField("Очки", player.points);
            printField("Игры", player.games);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 7. Области
    const vector<Region> regions{
        {"Примерная область", "Примерск", 800000, 45000, "Иванов И. И."}
    };
    printHeader("Области с населением меньше 1 млн жителей:");
    for (const auto& region : regions) {
        if (region.population < 1000000) {
            printField("Название", region.name);
            printField("Областной центр", region.regionalCenter);
            printField("Население", region.population);
            printField("Площадь", region.area);
            printField("Губернатор", region.governor);
            cout << "---------------------------------------------\n";
        }
    }

    // Задача 8. Мотоциклы
    const vector<Motorcycle> motorcycles{
        {"HarleyDavidson", "черный", "HD123", "А123АА", 2020, 2025, 1500000}
    };
    printHeader("Мотоциклы марки HarleyDavidson:");
    for (const auto& motorcycle : motorcycles) {
        if (motorcycle.make == "HarleyDavidson") {
            printField("Марка", motorcycle.make);
            printField("Цвет", motorcycle.color);
            printField("Серийный номер", motorcycle.serialNumber);
            printField("Регистрационный номер", motorcycle.registrationNumber);
            printField("Год выпуска", motorcycle.manufactureYear);
            printField("Год техосмотра", motorcycle.inspectionYear);
            printField("Цена", motorcycle.price);
            cout << "---------------------------------------------\n";
        }
    }

    return 0;
}
