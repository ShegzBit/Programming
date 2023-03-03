#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <vector>

std::string encrypt(const std::string& input)
{
    const std::vector<std::string> symbols = {"*", "!", "@", "#", "$", "%", "^", "&", "(", "+", ")", "-", "=", "_", "}", "]", "[", "{", "\\", "|", ",", "?", "/", "'", "~", "`"};

    std::string output;

    for (char c : input)
    {
        if (c >= 'a' && c <= 'z')
        {
            output += symbols[c - 'a'];
        }
        else
        {
            output += c;
        }
    }

    return output;
}

std::string decrypt(const std::string& input)
{
    const std::vector<std::string> symbols = {"*", "!", "@", "#", "$", "%", "^", "&", "(", "+", ")", "-", "=", "_", "}", "]", "[", "{", "\\", "|", ",", "?", "/", "'", "~", "`"};

    std::string output;

    for (char c : input)
    {
        bool found = false;

        for (int i = 0; i < symbols.size(); i++)
        {
            if (c == symbols[i][0])
            {
                output += 'a' + i;
                found = true;
                break;
            }
        }

        if (!found)
        {
            output += c;
        }
    }
    return output;
}
