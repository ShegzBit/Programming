#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "decrypt.h"

using namespace std;
string Encrypt()
{
        //take input 
    string test;
    std::cout << "Enter the sentence you wish to encrypt: ";
    std::cin.ignore();
    getline(cin >> ws, test);
    std::cin.clear();
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


char Decide()
{
    //function to let use choose what to do read, write or self destruct diary;
    char choice;
    std::cout << "Do you want to read your diary or write to it or initiate a self destruct ('r' read / 'w' write / 'd' self destuct): ";
    std::cin >> choice;
    std::cout << endl;
    if (choice == 'r')
    {   //creating a password requirement for decryption and encryption
        string password;
        std::cout << "Enter password: ";
        std::cin >> password;
        std::cout << endl;
        //reading the password from a file
        fstream myfile;
        myfile.open("password.txt", ios::in);
        if (myfile.is_open())
        {
            string pw;
            getline(myfile,pw);
            //testing password
            if (password == pw)
            {
                return 'r';
            }
            else
            {
                return 'f';
            }
            myfile.close();
        }

    }
    else if (choice == 'w')
    {   //creating a password requirement for decryption and encryption
        string password;
        std::cout << "Enter password: ";
        std::cin >> password;
        std::cout << endl;
        //reading the password from a file
        fstream myfile;
        myfile.open("password.txt", ios::in);
        if (myfile.is_open())
        {
            string pw;
            getline(myfile,pw);
            //testing password
            if (password == pw)
            {
                return 'w';
            }
            else
            {
                return 'f';
            }
            myfile.close();
        }

        return 'q';

    }
    else if (choice == 'd')
    {   //creating a password requirement for decryption and encryption
        string password;
        std::cout << "Enter password: ";
        std::cin >> password;
        std::cout << endl;
        //reading the password from a file
        fstream myfile;
        myfile.open("password.txt", ios::in);
        if (myfile.is_open())
        {
            string pw;
            getline(myfile,pw);
            //testing password
            if (password == pw)
            {
                return 'd';
            }
            else
            {
                return 'f';
            }
            myfile.close();
        }

    }
    //program to run if user chooses unrecognised operation
    else 
    {
        std::cout << "Wrong input try again";
        Decide();
        std::cout << endl;
    }
    return 'q';
}

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


void write()
{
    //handling write request
    string Enc = Encrypt();
    fstream myEnc;
    myEnc.open("vnc.txt", ios::app);
    if (myEnc.is_open())
    {
        myEnc << Enc << endl;
        myEnc.close();
    }
    else{
        cout << "failed to open" << endl;
    }

}

void signup()
{
    //function to create a password for diary
    string first;
    string second;
    string password;
    std::cout <<"Enter your the password for your diary. \"password must be 8 or more\": ";
    std::cin >> first;
    std::cout << endl;
    std::cout << "Retype password: ";
    std::cin >> second;
    std::cout << endl;
    //test for accuracy of both password
    if (first == second && second.length() >= 8)
    {
        password = first = second;
        fstream file;
        file.open("password.txt", ios::out);
        if (file.is_open())
        {
            file << password << endl;
            file.close();
        }
    }
    //program to run if password is less than 8
    else if (second.length() < 8)
    {
        std::cout <<"Password too short try again with a longer password" << endl;
        signup();
    }
    //program to run for inaccurate password
    else{
        std::cout << "Error password must be the same" << endl;
        signup();
    }


}

void read()
{
    
        fstream Decrypt;
        Decrypt.open("vnc.txt", ios::in);
        string line;
        while(getline(Decrypt, line))
        {
            decrypt(line);
        }
}
void confirm()
{
    fstream confirm;
    confirm.open("password.txt", ios::in);
    if (confirm.is_open())
    {
        string now;
        getline(confirm,now);
        if(now.length() > 3)
        {
            
        }
        else{
            signup();
        }
    }
}



void Destruct()
{
    //function to delete every secret in the diary
    char valid;
    std::cout << "Are you sure you want delete? Every single memory in your diary will be deleted (y/yes | n/no): ";
    std::cin >> valid;
    std::cout << endl;
    //program to run if y is inputted
    if (valid == 'y' or valid == 'Y')
    {
        fstream myfile;
        myfile.open("vnc.txt", ios::out);
        if (myfile.is_open())
        {//emptying every file in diary
        myfile << "";
        myfile.close();
        }

        else
        {
            std::cerr << "Failed to open file " << endl;
        }
    }
    //program to run if n is inputted
    else if (valid == 'n' or valid == 'N')
    {
       std::cout <<"Self desturct TERMINATED!!!" << endl;
    }
    //program to run if a wrong option is inputted
    else{
        std::cout << "Wrong option pls try again and be sure to pick (y/n)";
        Destruct();
        std::cout << endl;
        
    }

}

