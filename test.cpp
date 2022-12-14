#include<iostream>
using namespace std;

int main() {
    char str1[50];
    char str2[50];

    cout << "Please enter your name : ";
    cin >> str1;

    cout << "Please enter your date of birth : ";
    cin >> str2;

    cout << "Hello " << str1;
    cout << "Your age is is " << str2;
}