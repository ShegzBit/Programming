#include <iostream>
#include <fstream>
#include "diary_app_encrypt.h"

using namespace std;

int main()
{
    string Enc = Encrypt();
    fstream myEnc;
    myEnc.open("vnc.txt", ios::app);
    if (myEnc.is_open())
    {
        myEnc << Enc << endl;
        myEnc.close();
    }
    else{
        cout << "failed to open";
    }

}