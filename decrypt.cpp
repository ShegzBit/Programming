#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decrypt(string Holder)
{
    string test = Holder;
    int size = test.length();
    char Enc[size];

    for (int i = 0; i < test.length(); i++)
    {
        switch(test[i])
        {
            case '*':
                Enc[i] = 'a';
                break;
            case '!':
                Enc[i] = 'b';
                break;
            case '@':
                Enc[i] = 'c';
                break;
            case '#':
                Enc[i] = 'd';
                break;
            case '$':
                Enc[i] = 'e';
                break;
            case '%':
                Enc[i] = 'f';
                break;
            case '^':
                Enc[i] = 'g';
                break;
            case '&':
                Enc[i] = 'h';
                break;
            case '(':
                Enc[i] = 'i';
                break;
            case '+':
                Enc[i] = 'j';
                break;
            case ')':
                Enc[i] = 'k';
                break;
            case '-':
                Enc[i] = 'l';
                break;
            case '=':
                Enc[i] = 'm';
                break;
            case '_':
                Enc[i] = 'n';
                break;
            case '}':
                Enc[i] = 'o';
                break;
            case ']':
                Enc[i] = 'p';
                break;
            case '[':
                Enc[i] = 'q';
                break;
            case '{':
                Enc[i] = 'r';
                break;
            case '\\':
                Enc[i] = 's';
                break;
            case '|':
                Enc[i] = 't';
                break;
            case ',':
                Enc[i] = 'u';
                break;
            case '?':
                Enc[i] = 'v';
                break;
            case '/':
                Enc[i] = 'w';
                break;
            case '\'':
                Enc[i] = 'x';
                break;
            case '~':
                Enc[i] = 'y';
                break;
            case '`':
                Enc[i] = 'z';
                break;
            default:
            Enc[i] = ' ';
        }
    }
    string ret = Enc;
    std::cout << ret;

}

int main()
{
    fstream Decrypt;
    Decrypt.open("vnc.txt", ios::in);
    string line;
    while(getline(Decrypt, line))
    {
        decrypt(line);
    }

}