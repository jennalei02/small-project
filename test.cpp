#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string newIsbn;
    cout << "Please enter an isbn:\n";
    cin >> newIsbn;
    cin.ignore(20, '\n'); //flush the buffer

    int convertChar = 0;
    int key = 0;
    int a = 3;
    int length = newIsbn.size();

    for (int i = 1; i < length; i++)
    {
        convertChar = int(newIsbn[i]);
        key += convertChar * pow(128, length - 1 - i);
    }
    

}

hash_insert,0-13-198619-8,Data Structures Outside In,Pearson Prentice Hall
hash_insert,0-003-830-543,Classification Algorithms,Collins
