//
// Created by NickD on 11/5/2022.
//
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

void flip_over(string x) {
    int i = x.length();
    int z = i;
    string b;
    int a;
    for (a = 0; a < i; a += 1) {
        char X = x[z -= 1];
        b += X;}
    cout << b << endl;
}
int main() {
    string c;
    c="123.567";
    flip_over(c);
    return 0;
}

input :  1234.567
output:  765.4321
