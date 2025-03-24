// Файл реалізації утиліт роботи з рядками

#include "task2_stringutils.h" // Підключаємо заголовковий файл
#include <sstream> // Підключаємо бібліотеку для роботи з потоками

using namespace std;

// Функція підрахунку кількості слів у рядку
int countWords(const string& text) {
    istringstream stream(text); // Створюємо потік для розбиття рядка на слова
    int count = 0; // Лічильник слів
    string word; // Змінна для зберігання окремого слова
    
    // Читаємо слова з потоку
    while (stream >> word) {
        count++; // Збільшуємо лічильник слів
    }
    return count; // Повертаємо загальну кількість слів
}

// Функція реверсу рядка
string reverseString(const string& text) {
    return string(text.rbegin(), text.rend()); // Використовуємо реверсний ітератор
}
