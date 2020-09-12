#include <iostream>
using namespace std;

void printSomething(); //fucntion protocal

int main(){
    printSomething();
    cout << "\n";
    system("pause");
    return 0;
}

void printSomething(){
    cout << "im a calling a function oooooo" << endl;
}