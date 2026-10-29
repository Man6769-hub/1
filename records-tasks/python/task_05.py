# Задача 5. Мультфильмы
cartoons = [{
    "Название": "Приключение в лесу", "Режиссер": "Алексей Лесной", "Год выхода": 2021,
    "Страна": "Россия", "Стоимость": 2000000, "Доход": 5600000,
    "Прибыль": 3600000, "Компания": "Walt Disney",
}]

print("\n" + "=" * 45)
print('Мультфильмы компании "Walt Disney":')
print("=" * 45)
for cartoon in cartoons:
    if cartoon["Компания"] == "Walt Disney":
        for name, value in cartoon.items():
            print(f"  {name}: {value}")
        print("-" * 45)