#include <iostream>
using namespace std;

int main()
{
    PrintName(2025);
    return 0;
}

void PrintName(int year){
    cout<< "Arthur Pisanko (" << (year - 2004) << ")" <<endl;
}