#include <iostream>
#include <string>
#include <Windows.h>

struct bankUser
{
    int numberUser;
    std::string NameU;
    double balance;
};

void UserDateBlanace(bankUser *date,double newBalance)
{
    date->balance = newBalance;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bankUser UserDate;
    double newBalance = 0;

    std::cout << "Введите номер счёта: \n";
    std::cin >> UserDate.numberUser;

    std::cout << "Введите имя владельца: \n";
    std::cin >> UserDate.NameU;

    std::cout << "Введите баланс: \n";
    std::cin >> UserDate.balance;

    std::cout << "Введите новый баланс: \n";
    std::cin >> newBalance;

    UserDateBlanace(&UserDate, newBalance);

    std::cout << "Ваш счёт:" << UserDate.NameU << ", " << UserDate.numberUser << ", " << UserDate.balance << ", ";
}