#include <iostream>
using namespace std;

void PrintName(int year);

int main()
{
    PrintName(2025);
    return 0;
}

void PrintName(int year){
    cout<< "Arthur Lech Pisanko (" << (year - 2004) << ")" <<endl;
}