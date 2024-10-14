#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void print(string file) {

    int slash = file.find_last_of("\\/");

    string exampleA;
    if (slash >= 0) {
        exampleA = file.substr(0, slash);
    }
    else {
        exampleA = "";
    }

    string exampleB;
    if (slash >= 0) {
        int twoslash = file.find_last_of("\\/", slash - 1);
        if (twoslash >= 0) {
            exampleB = file.substr(twoslash + 1, slash - twoslash - 1);
        }
        else {
            exampleB = file.substr(0, slash);
        }
    }
    else {
        exampleB = "";
    }

    string exampleC;
    if (slash >= 0) {
        exampleC = file.substr(slash + 1);
    }
    else {
        exampleC = file;
    }

    string exampleD;
    int point = exampleC.find_last_of('.');
    if (point >= 0) {
        exampleD = exampleC.substr(point);
    }
    else {
        exampleD = "";
    }

    string exampleE;
    if (point >= 0) {
        exampleE = exampleC.substr(0, point);
    }
    else {
        exampleE = exampleC;
    }

    cout << "a) " << exampleA << endl;
    cout << "b) " << exampleB << endl;
    cout << "c) " << exampleC << endl;
    cout << "d) " << exampleD << endl;
    cout << "e) " << exampleE << endl;
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string file = "C:\\Users\\legan\\OneDrive\\Рабочий\\С++(ООП)\\Dz10.cpp";
    print(file);

    return 0;
}
