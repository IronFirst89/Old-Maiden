#include <iostream>

#include "../include/card.hpp"

int main()
{
    Card::OM h_card;

    while(1)
    {
        h_card.Draw();
        h_card._List();
        std::getchar();
    }
}