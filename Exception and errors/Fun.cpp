#include "Fun.h"
#include <exception>

int findLenght(std::string Word, int banLength)
{
    if (banLength == Word.length())
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    };

    return static_cast<int>(Word.length());

}