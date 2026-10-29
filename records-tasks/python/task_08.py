# Задача 8. Мотоциклы
motorcycles = [
    {
        "Марка": "HarleyDavidson", "Цвет": "синий", "Серийный номер": "HD-FAKE-104",
        "Регистрационный номер": "TEST-001", "Год выпуска": 2022,
        "Год техосмотра": 2025, "Цена": 1850000,
    },
    {
        "Марка": "Roadster", "Цвет": "серый", "Серийный номер": "RD-FAKE-208",
        "Регистрационный номер": "TEST-002", "Год выпуска": 2021,
        "Год техосмотра": 2024, "Цена": 920000,
    },
]

print("\n" + "=" * 45)
print('Мотоциклы марки "HarleyDavidson":')
print("=" * 45)
for motorcycle in motorcycles:
    if motorcycle["Марка"] == "HarleyDavidson":
        for name, value in motorcycle.items():
            print(f"  {name}: {value}")
        print("-" * 45)