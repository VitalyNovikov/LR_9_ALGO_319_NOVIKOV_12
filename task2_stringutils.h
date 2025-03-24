// Заголовковий файл для утиліт роботи з рядками

#ifndef TASK2_STRINGUTILS_H 
#define TASK2_STRINGUTILS_H

#include <string>  // Підключення бібліотеки для роботи з рядками

using namespace std;

// Функція підрахунку кількості слів у рядку
// Приймає: вихідний рядок
// Повертає: кількість слів
int countWords(const string& text);

// Функція реверсу рядка
// Приймає: вихідний рядок
// Повертає: реверсований рядок
string reverseString(const string& text);

#endif // TASK2_STRINGUTILS_H
