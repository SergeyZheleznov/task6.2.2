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
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> answer;

    int count = 0;
    bool flag = false;

    if (answer == "��") {
        std::cout << "������� ��������� �������� ��������: ",
            std::cin >> count,
            flag = true;
    }

    Counter one = flag ? Counter(count) : Counter();

    char command;
    std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> command;
    }
    if (command == 'x') {
        std::cout << "�� ��������!";
    }

    return 0;
}
