// Заголовковий файл для функцій шифрування Цезаря

#ifndef TASK1_ENCRYPTOR_H 
#define TASK1_ENCRYPTOR_H

#include <string> // Підключення бібліотеки для роботи з рядками

// Функція для шифрування рядка методом Цезаря
// Приймає: вихідний рядок та кількість зміщень
// Повертає: зашифрований рядок
std::string encryptCaesar(const std::string& text, int shift);

// Функція для розшифрування рядка методом Цезаря
// Приймає: зашифрований рядок та кількість зміщень
// Повертає: розшифрований рядок
std::string decryptCaesar(const std::string& text, int shift);

#endif // TASK1_ENCRYPTOR_H
