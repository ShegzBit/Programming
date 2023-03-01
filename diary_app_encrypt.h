#include <iostream>
#include <string>

using std::endl;
using std::string;

string Encrypt()
{
        //take input 
    string test;
    std::cout << "Enter the sentence you wish to encrypt: ";
    getline(std::cin,test);
    int size = test.length();
    char Enc[size];

    for (int i = 0; i < test.length(); i++)
    {
        switch(test[i])
        {
            case 'a':
                Enc[i] = '*';
                break;
            case 'b':
                Enc[i] = '!';
                break;
            case 'c':
                Enc[i] = '@';
                break;
            case 'd':
                Enc[i] = '#';
                break;
            case 'e':
                Enc[i] = '$';
                break;
            case 'f':
                Enc[i] = '%';
                break;
            case 'g':
                Enc[i] = '^';
                break;
            case 'h':
                Enc[i] = '&';
                break;
            case 'i':
                Enc[i] = '(';
                break;
            case 'j':
                Enc[i] = '+';
                break;
            case 'k':
                Enc[i] = ')';
                break;
            case 'l':
                Enc[i] = '-';
                break;
            case 'm':
                Enc[i] = '=';
                break;
            case 'n':
                Enc[i] = '_';
                break;
            case 'o':
                Enc[i] = '}';
                break;
            case 'p':
                Enc[i] = ']';
                break;
            case 'q':
                Enc[i] = '[';
                break;
            case 'r':
                Enc[i] = '{';
                break;
            case 's':
                Enc[i] = '\\';
                break;
            case 't':
                Enc[i] = '|';
                break;
            case 'u':
                Enc[i] = ',';
                break;
            case 'v':
                Enc[i] = '?';
                break;
            case 'w':
                Enc[i] = '/';
                break;
            case 'x':
                Enc[i] = '\'';
                break;
            case 'y':
                Enc[i] = '~';
                break;
            case 'z':
                Enc[i] = '`';
                break;
            default:
            Enc[i] = ' ';
        }
    }
    string ret = Enc;
   
    return ret;

   
}
