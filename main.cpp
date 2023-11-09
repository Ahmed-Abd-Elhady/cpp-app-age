#include <iostream>
using namespace std;
#define days 9
int main()
{

    int user_age;
    cout << "--------------------------\n";
    cout << "-Your Age Applection-\n";
    cout << "--------------------------\n";
    cout << "Write your age here sir : \n";
    cin >> user_age;
    cout << "================================\n";
    cout << "You lived : " << user_age * 365 / 12 << " mounths\n";
    cout << "You lived : " << user_age * 365 / 12 / 7 << " weeks\n";
    cout << "You lived : " << user_age * 365 << " days\n";
    cout << "You lived : " << user_age * 365 * 24 << " hourts\n";
    cout << "You lived : " << user_age * 365 * 24 * 60 << " min\n";
    cout << "You lived : " << user_age * 365 * 24 * 60 * 60 << " secounds\n";
    cout << "================================\n";
}
