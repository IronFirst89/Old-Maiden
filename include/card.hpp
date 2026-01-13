#pragma once

#include <random>
#include <vector>
#include <algorithm>
#include <iostream>

#include "card_macro.hpp"

#define CLI_MODE
#define LIST_MODE 1

namespace Card
{
    class OM
    {
        public:
        int Draw();
        int At(long unsigned int);

        #ifdef CLI_MODE
        int _List();
        int _Read(int);
        #endif

        private:

        std::random_device rd;
        std::vector<int> m_hand;
    };
}