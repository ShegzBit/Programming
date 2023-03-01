#include <iostream>
#include <string>

using std::string;
using std::endl;


int main()

{
    int x = 0;
    int n;
    char choice;
    while (true)
    {
        std::cin >> n;
        n = n*n;
        x += n;
        std::cout << x << endl;
        std::cout << "Do you want to input more numbers (y/yes  || n/no) " << endl;
        std::cin >> choice;
        if ( choice == 'y' )
        {
            continue;
        }
        else if ( choice == 'n' )
        {
            std::cout << "Final result is " << x << endl;
            break;
        }

        else {
            std::cout << "Invalid input terminating now" << endl;
            break;
        }
    }   

    
}