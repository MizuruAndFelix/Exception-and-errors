#include <iostream>
#include <string>
#include <exception>
#include <windows.h>
#include "Fun.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, ".UTF8");
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    string Word = " ";//слово
    int lengthWorld = 0; //длинна
    int banLength = 0; //длинна исключение
    bool checkBanLength = false; //переключатель   if (banLength > 0)


    do
    {
        cout << "Введите запретную длину: ";
        cin >> banLength;

        if (banLength > 0)
        {
            checkBanLength = true;
        }
        if (banLength <= 0)
        {
            cout << "Неверная длина. Введите любое другое число больше 0" << endl;
        }
    } while (!checkBanLength); cout << endl;


    try
    {
        do
        {
            cout << "Введите слово: ";
            cin >> Word;

            lengthWorld = findLenght(Word, banLength);

            cout << "Длина слова " << "'" << Word << "'" << " равна " << lengthWorld << endl;

        } while (banLength != lengthWorld);
    }


    catch (const exception& excep)
    {
        cout << endl << excep.what() << endl;
    }
}