#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "accounter.h"



int main()
{
    char c;
    setlocale(LC_ALL, "");
    std::system("chcp 1251");

    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    int count = 0;
    bool flag = false;

    if (answer == "да") {
        std::cout << "Введите начальное значение счётчика: ",
            std::cin >> count,
            flag = true;
    }

    Counter one = flag ? Counter(count) : Counter();

    char command;
    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    std::cin >> command;

    while (command != 'x') {
        if (command == '+') {
            one.plus();
        }
        else if (command == '-') {
            one.minus();
        }
        else if (command == '=') {

            one.look();
        }
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
    }
    if (command == 'x') {
        std::cout << "До свидания!";
    }

    return 0;
}
