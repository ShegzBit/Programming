#include <iostream>
#include <fstream>
#include <string>
#include "diary_app_encrypt.h"

using namespace std;

int main()
{ 
    //checking if user has created a password
    confirm();
    
    int value = 0;

    // calling function decide
    char option = Decide();
    //handling write request
    if (option == 'w')
    {
        write();

    }
    //handling return f situation
    else if (option == 'f')
    {
        //limiting amount of time user can enter wrong pasword
        std::cout << "Incorrect pasword you have one trial left: " << endl;
        //tncreasing the value of try by 1 on each failed attempt
        value ++;
        if (value < 2)
        {
            main();
        }
        else 
        {
            std::cout << "You've exceeded the number of try time" << endl;
        }
    }

    else if (option == 'd')
    {
        Destruct();
    }
    else if (option == 'r')
    {
        read();
    }
    else{

    }


}