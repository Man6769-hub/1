# Задача 8. Мотоциклы
motorcycles = [{
    "Марка": "HarleyDavidson", "Цвет": "черный", "Серийный номер": "HD123",
    "Регистрационный номер": "А123АА", "Год выпуска": 2020,
    "Год техосмотра": 2025, "Цена": 1500000,
}]

print("\n" + "=" * 45)
print('Мотоциклы марки "HarleyDavidson":')
print("=" * 45)
for motorcycle in motorcycles:
    if motorcycle["Марка"] == "HarleyDavidson":
        for name, value in motorcycle.items():
            print(f"  {name}: {value}")
        print("-" * 45)