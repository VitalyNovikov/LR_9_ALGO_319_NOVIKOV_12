// Головний файл програми
// Використовується для демонстрації роботи всіх задач

#include <iostream>         // Підключення стандартної бібліотеки для введення/виведення
#include "task1_encryptor.h" // Підключення заголовочного файлу шифрування
#include "task2_stringutils.h" // Підключення заголовочного файлу роботи з рядками

using namespace std;

int main() {
    int choice;
    string text;

    while (true) {
        // Меню вибору завдання
        cout << "\nМеню вибору:" << endl;
        cout << "1. Шифрування тексту зі зміщенням на 3" << endl;
        cout << "2. Підрахунок кількості слів у рядку" << endl;
        cout << "0. Вихід" << endl;
        cout << "Введіть вибір (1, 2 або 0): ";
        cin >> choice;
        cin.ignore(); // Очищення буфера введення

        if (choice == 0) {
            cout << "Вихід з програми..." << endl;
            break; // Вихід з програми
        }

        if (choice == 1) {
            // Введення користувачем рядка для шифрування
            string text;
            cout << "Введіть текст для шифрування: ";
            getline(cin, text);

            // Виконуємо шифрування тексту зі зміщенням на 3
            string encrypted = encryptCaesar(text, 3);
            cout << "Зашифрований текст: " << encrypted << endl;

            // Розшифровуємо текст назад
            string decrypted = decryptCaesar(encrypted, 3);
            cout << "Розшифрований текст: " << decrypted << endl;

        }
        else if (choice == 2) {
            // Введення користувачем речення для роботи з рядками
            cout << "\nВведіть речення: ";
            getline(cin, text);

            // Підрахунок кількості слів у рядку
            int wordCount = countWords(text);
            cout << "Кількість слів у реченні: " << wordCount << endl;

            // Реверс рядка
            string reversed = reverseString(text);
            cout << "Реверсований рядок: " << reversed << endl;
        }
        else {
            cout << "Невірний вибір! Спробуйте ще раз." << endl;
        }
    }
    return 0; // Завершення програми
}
