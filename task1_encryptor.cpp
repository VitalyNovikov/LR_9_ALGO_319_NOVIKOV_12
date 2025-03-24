// Файл реалізації функцій шифрування Цезаря

#include "task1_encryptor.h" // Підключаємо заголовковий файл

// Функція для шифрування тексту методом Цезаря
std::string encryptCaesar(const std::string& text, int shift) {
    std::string result = text; // Копіюємо вхідний текст
    
    // Проходимо по кожному символу рядка
    for (char& c : result) {
        // Перевіряємо, чи є символ літерою латинського алфавіту
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a'; // Визначаємо базовий символ (A чи a)
            c = (c - base + shift) % 26 + base; // Виконуємо зміщення
        }
    }
    return result; // Повертаємо зашифрований рядок
}

// Функція для розшифрування тексту методом Цезаря
std::string decryptCaesar(const std::string& text, int shift) {
    return encryptCaesar(text, 26 - shift); // Використовуємо зворотне зміщення
}
