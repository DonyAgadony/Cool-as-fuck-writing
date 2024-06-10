#include <iostream>
#include <stdio.h>
#include <chrono> // std::chrono::microseconds
#include <thread> // std::this_thread::sleep_for

using namespace std;
void Write(std::string SecretWord);
int main()
{
    Write("Boaz You should kill yourself");
    return 0;
}
void Write(std::string SecretWord)
{
    std::string guess = "";
    for (int j = 0; j < SecretWord.length(); j++)
    {
        for (char i = '0'; i <= 127; i++)
        {
            std::cout << guess << i << '\n';
            std::this_thread::sleep_for(std::chrono::microseconds{5000});
            if (SecretWord[j] == i)
            {
                guess += SecretWord[j];
                break;
            }
        }
    }
}
