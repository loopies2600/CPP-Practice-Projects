#include <iostream>
#include "input.h"

using namespace std;

int requestInt(string msg)
{
    int input{};
    cout << msg;
    cin >> input;

    return input;
}
