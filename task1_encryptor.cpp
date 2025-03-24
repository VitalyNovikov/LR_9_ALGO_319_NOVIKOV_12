// Файл реалізації функцій шифрування Цезаря

#include "task1_encryptor.h" // Підключаємо заголовковий файл

using namespace std;

// Функція для шифрування тексту методом Цезаря
string encryptCaesar(const string& text, int shift) {
    string result = text; // Копіюємо вхідний текст
    
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
string decryptCaesar(const string& text, int shift) {
    return encryptCaesar(text, 26 - shift); // Використовуємо зворотне зміщення
}
