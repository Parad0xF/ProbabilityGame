//
//  Header.cpp
//  Lab6
//
//  Created by Parad0xFF on 6/7/20.
//  Copyright © 2020 Baron. All rights reserved.
//

#include "Header.hpp"

int Game::tossCoin(int start) {
    try {
        if (start <= 0)
        {
            throw std::invalid_argument("You should enter a poitive integer");
        }

        int head = 0;
        int ishead;
        for (int x = 0; x < start; x++)
        {

            ishead = rand() % 2;
            if (ishead == 1)
                head++;
        }
        
        std::cout << "Coins were fliped " << start << " times ,and " << std::endl <<"There were " << head << " times when it landed heads!";
        return head;
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Wrong Input " << e.what() << std::endl;

    }
    return 0;
}

int Game::rollDice(int start) {

    try {
        if (start <= 0)
        {
            throw std::invalid_argument("Wrong Input");
        }

        int eyes = 0;
        int iseyes;
        for (int x = 0; x < start; x++)
        {

            iseyes = rand() % 12 + 1;
            if (iseyes == 2)
                eyes++;
        }
        std::cout << "Number of snake eyes " << eyes << " out of " << start << " throws";
         return eyes;
    }catch (const std::invalid_argument& e) {
        std::cout << "invalid argument " << e.what() << std::endl;

    }
    return 0;
}


int Game::factorial(int n)
{
    int fact1 = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact1 *= i;
    }
    return fact1;
}

int Game::acesHand(int x)
{
    try
    {

        if (x> 7 || x<1)
        {
            throw std::invalid_argument("value should be in range of 1 to 7");
        }
        int perm = factorial(7) / factorial(7 - x);
        std::cout << "Number of permutations is " << perm << std::endl;
        return perm;
    }
    catch (const std::invalid_argument& e) {
        std::cout << "invalid argument " <<std::endl<< e.what() << std::endl;

    }
    return 0;
}

