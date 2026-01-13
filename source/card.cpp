#include "../include/card.hpp"
//#error "fuc"
namespace Card
{
    int OM::Draw()
    {
        int card;

        auto it = std::find(m_hand.begin(), m_hand.end(), JOKER);

        std::mt19937 gen(rd());
        if (it != m_hand.end())
        {
            std::uniform_int_distribution<> dist(0, 56);
            card = dist(gen);
        }
        else
        {
            std::uniform_int_distribution<> dist(1, 56);
            card = dist(gen);
        }
        
        m_hand.emplace_back(card);

        return card;
    }

    int OM::At(long unsigned int i)
    {
        if (i+1 > m_hand.size())
            return -1;

        return m_hand.at(i);
    }

    #ifdef CLI_MODE
    int OM::_List()
    {
        int i{1};

        if constexpr (LIST_MODE == 1)
        {
            for (auto& card : m_hand)
            {
                std::cout << i << ": ";
                _Read(card);;
                i++;
            }
        }
        else
        {
            for (auto& card : m_hand)
            {         
                std::cout << i << ": " << card << std::endl;
                i++;
            }
        }

        return i;
    }

    int OM::_Read(int i)
    {
        switch (i)
        {
        case JOKER:
            std::cout << "Joker" << std::endl;
            break;

        /* ACES */
        case ACE_SPADES:
            std::cout << "Ace Of Spades" << std::endl;
            break;
        case ACE_CLUBS:
            std::cout << "Ace Of Clubs" << std::endl;
            break;
        case ACE_HEARTS:
            std::cout << "Ace Of Hearts" << std::endl;
            break;
        case ACE_DIAMONDS:
            std::cout << "Ace Of Diamonds" << std::endl;
            break;

        /* NUMBERS SPADES*/
        case ONE_SPADES:
            std::cout << "One Of Spades" << std::endl;
            break;
        case TWO_SPADES:
            std::cout << "Two Of Spades" << std::endl;
            break;
        case THREE_SPADES:
            std::cout << "Three Of Spades" << std::endl;
            break;
        case FOUR_SPADES:
            std::cout << "Four Of Spades" << std::endl;
            break;
        case FIVE_SPADES:
            std::cout << "Five Of Spades" << std::endl;
            break;
        case SIX_SPADES:
            std::cout << "Six Of Spades" << std::endl;
            break;
        case SEVEN_SPADES:
            std::cout << "Seven Of Spades" << std::endl;
            break;
        case EIGHT_SPADES:
            std::cout << "Eight Of Spades" << std::endl;
            break;
        case NINE_SPADES:
            std::cout << "Nine Of Spades" << std::endl;
            break;
        case TEN_SPADES:
            std::cout << "Ten Of Spades" << std::endl;
            break;

        /* NUMBERS CLUBS */
        case ONE_CLUBS:
            std::cout << "One Of Clubs" << std::endl;
            break;
        case TWO_CLUBS:
            std::cout << "Two Of Clubs" << std::endl;
            break;
        case THREE_CLUBS:
            std::cout << "Three Of Clubs" << std::endl;
            break;
        case FOUR_CLUBS:
            std::cout << "Four Of Clubs" << std::endl;
            break;
        case FIVE_CLUBS:
            std::cout << "Five Of Clubs" << std::endl;
            break;
        case SIX_CLUBS:
            std::cout << "Six Of Clubs" << std::endl;
            break;
        case SEVEN_CLUBS:
            std::cout << "Seven Of Clubs" << std::endl;
            break;
        case EIGHT_CLUBS:
            std::cout << "Eight Of Clubs" << std::endl;
            break;
        case NINE_CLUBS:
            std::cout << "Nine Of Clubs" << std::endl;
            break;
        case TEN_CLUBS:
            std::cout << "Ten Of Clubs" << std::endl;
            break;
        
        /* NUMBERS HEARTS */
        case ONE_HEARTS:
            std::cout << "One Of Hearts" << std::endl;
            break;
        case TWO_HEARTS:
            std::cout << "Two Of Hearts" << std::endl;
            break;
        case THREE_HEARTS:
            std::cout << "Three Of Hearts" << std::endl;
            break;
        case FOUR_HEARTS:
            std::cout << "Four Of Hearts" << std::endl;
            break;
        case FIVE_HEARTS:
            std::cout << "Five Of Hearts" << std::endl;
            break;
        case SIX_HEARTS:
            std::cout << "Six Of Hearts" << std::endl;
            break;
        case SEVEN_HEARTS:
            std::cout << "Seven Of Hearts" << std::endl;
            break;
        case EIGHT_HEARTS:
            std::cout << "Eight Of Hearts" << std::endl;
            break;
        case NINE_HEARTS:
            std::cout << "Nine Of Hearts" << std::endl;
            break;
        case TEN_HEARTS:
            std::cout << "Ten Of Hearts" << std::endl;
            break;
        
        /* NUMBERS DIAMONDS */
        case ONE_DIAMONDS:
            std::cout << "One Of Diamonds" << std::endl;
            break;
        case TWO_DIAMONDS:
            std::cout << "Two Of Diamonds" << std::endl;
            break;
        case THREE_DIAMONDS:
            std::cout << "Three Of Diamonds" << std::endl;
            break;
        case FOUR_DIAMONDS:
            std::cout << "Four Of Diamonds" << std::endl;
            break;
        case FIVE_DIAMONDS:
            std::cout << "Five Of Diamonds" << std::endl;
            break;
        case SIX_DIAMONDS:
            std::cout << "Six Of Diamonds" << std::endl;
            break;
        case SEVEN_DIAMONDS:
            std::cout << "Seven Of Diamonds" << std::endl;
            break;
        case EIGHT_DIAMONDS:
            std::cout << "Eight Of Diamonds" << std::endl;
            break;
        case NINE_DIAMONDS:
            std::cout << "Nine Of Diamonds" << std::endl;
            break;
        case TEN_DIAMONDS:
            std::cout << "Ten Of Diamonds" << std::endl;
            break;
        
        /* JACKS */
        case JACK_SPADES:
            std::cout << "Jack Of Spades" << std::endl;
            break;
        case JACK_CLUBS:
            std::cout << "Jack Of Clubs" << std::endl;
            break;
        case JACK_HEARTS:
            std::cout << "Jack Of Hearts" << std::endl;
            break;
        case JACK_DIAMONDS:
            std::cout << "Jack Of Diamonds" << std::endl;
            break;
        
        /* QUEENS */
        case QUEEN_SPADES:
            std::cout << "Queen Of Spades" << std::endl;
            break;
        case QUEEN_CLUBS:
            std::cout << "Queen Of Clubs" << std::endl;
            break;
        case QUEEN_HEARTS:
            std::cout << "Queen Of Hearts" << std::endl;
            break;
        case QUEEN_DIAMONDS:
            std::cout << "Queen of Diamonds" << std::endl;
            break;
        
        /* KINGS */
        case KING_SPADES:
            std::cout << "King Of Spades" << std::endl;
            break;
        case KING_CLUBS:
            std::cout << "King Of Clubs" << std::endl;
            break;
        case KING_HEARTS:
            std::cout << "King Of Hearts" << std::endl;
            break;
        case KING_DIAMONDS:
            std::cout << "King Of Diamonds" << std::endl;
            break;
        
        default:
            std::cout << "Illegal value." << std::endl;
            break;
        }

        return i;
    }
    #endif
}