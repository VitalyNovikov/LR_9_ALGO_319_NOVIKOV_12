// Файл реалізації утиліт роботи з рядками

#include "task2_stringutils.h" // Підключаємо заголовковий файл
#include <sstream> // Підключаємо бібліотеку для роботи з потоками

// Функція підрахунку кількості слів у рядку
int countWords(const std::string& text) {
    std::istringstream stream(text); // Створюємо потік для розбиття рядка на слова
    int count = 0; // Лічильник слів
    std::string word; // Змінна для зберігання окремого слова
    
    // Читаємо слова з потоку
    while (stream >> word) {
        count++; // Збільшуємо лічильник слів
    }
    return count; // Повертаємо загальну кількість слів
}

// Функція реверсу рядка
std::string reverseString(const std::string& text) {
    return std::string(text.rbegin(), text.rend()); // Використовуємо реверсний ітератор
}
