//
//  main.cpp
//  Lab6
//
//  Created by Parad0xFF(Radu Enachi) on 6/7/20.
//  Copyright © 2020 Baron. All rights reserved.
//

#include <iostream>
#include "Header.hpp"

using namespace std;



int main() {
    
    
    Game A;
    srand(time(NULL));
    int selection;
    do {
        cout << endl <<
            "*******************************************" << endl <<
            "*================Micro casino=============*" << endl <<
            "*******************************************" << endl <<
            " 1) Flip a coin                           *" << endl <<
            " 2) Roll dice for snake - eyes            *" << endl <<
            " 3) Permutation of number of aces         *" << endl <<
            " 0) Quit:                                 *" << endl <<
            "*******************************************" << endl <<
            "*Please make your selection: ";

        cin >> selection;
        if (selection == 1)
        {
            int number;
            cout << "Enter number of times you want to flip :";
            cin >> number;
            A.tossCoin(number);
            cout << endl;
        }
        else if (selection == 2)
        {
            int number;
            cout << "Enter number of times you want to roll :";
            cin >> number;
            A.rollDice(number);
            cout << endl;
        }
        else if (selection == 3)
        {
            int number;
            cout << "Enter X in the range ( 1 to 7): ";
            cin >> number;
            A.acesHand(number);
        }
        else if (selection == 0)
            break;
        else
            cout << "Wrong choice selection Please try again. " << endl;

    } while (selection != 0);




    system("pause");
}
