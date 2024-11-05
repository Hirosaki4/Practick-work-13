#include <iostream>
#include <Windows.h>

// Функція, що приймає вказівник на ціле число і збільшує його значення на 1
void increment(int* num) {
    if (num != nullptr) { // Перевіряємо, що вказівник не є нульовим
        (*num)++;         // Збільшуємо значення за вказівником
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int value = 10;
    std::cout << "Початкове значення: " << value << std::endl;

    increment(&value); // Передаємо адресу змінної value у функцію

    std::cout << "Значення після збільшення: " << value << std::endl;
    return 0;
}
