//
//  Controller.cpp
//  ConsoleOutputProject
//
//  Created by Heaps, Dane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;


int looped = 13;
string name = "Dane Heaps";
string * sPtr = &name;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << name << endl;
    for (int i = 0; i < 19; i++)
    {
        cout << looped << endl;
        looped++;
    }
    cout << "HI " << "my name is " << name << " " << sPtr << endl;
    
}
