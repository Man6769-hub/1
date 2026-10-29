# Задача 5. Мультфильмы
cartoons = [{
    "Название": "Пример мультфильма", "Режиссер": "Уолт Дисней", "Год выхода": 1937,
    "Страна": "США", "Стоимость": 1000000, "Доход": 5000000,
    "Прибыль": 4000000, "Компания": "Walt Disney",
}]

print("\n" + "=" * 45)
print('Мультфильмы компании "Walt Disney":')
print("=" * 45)
for cartoon in cartoons:
    if cartoon["Компания"] == "Walt Disney":
        for name, value in cartoon.items():
            print(f"  {name}: {value}")
        print("-" * 45)