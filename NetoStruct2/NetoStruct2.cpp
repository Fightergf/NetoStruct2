#include <iostream>
#include <string>
#include <Windows.h>

struct bankUser
{
    int numberUser;
    std::string NameU;
    double balance;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bankUser UserDate;
    std::cout << "Введите номер счёта: \n";
    std::cin >> UserDate.numberUser;

    std::cout << "Введите имя владельца: \n";
    std::cin >> UserDate.NameU;

    std::cout << "Введите баланс: \n";
    std::cin >> UserDate.balance;

    double newBalance = 0;
    std::cout << "Введите новый баланс: \n";
    std::cin >> newBalance;

    UserDate.balance = newBalance;

    std::cout << "Ваш счёт:" << UserDate.NameU << ", " << UserDate.numberUser << ", " << UserDate.balance << ", ";
}