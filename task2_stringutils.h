// Заголовковий файл для утиліт роботи з рядками

#ifndef TASK2_STRINGUTILS_H 
#define TASK2_STRINGUTILS_H

#include <string>  // Підключення бібліотеки для роботи з рядками

// Функція підрахунку кількості слів у рядку
// Приймає: вихідний рядок
// Повертає: кількість слів
int countWords(const std::string& text);

// Функція реверсу рядка
// Приймає: вихідний рядок
// Повертає: реверсований рядок
std::string reverseString(const std::string& text);

#endif // TASK2_STRINGUTILS_H
