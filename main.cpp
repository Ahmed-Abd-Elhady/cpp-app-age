#include <iostream>
using namespace std;

int user_age;
int user_choose;

void showcase()
{
  cout << "--------------------------\n";
  cout << "-Your Age Applection-\n";
  cout << "--------------------------\n";
  cout << "1-Calc Age : \n";
  cout << "2-Exit : \n";
  cin >> user_choose;
}

void cal()
{

  do
  {
    showcase();
    switch (user_choose)
    {
    case 1:
      cout << "Enter your age here sir : \n";
      cin >> user_age;
      cout << "================================\n";
      cout << "You lived : " << user_age * 365 / 12 << " mounths\n";
      cout << "You lived : " << user_age * 365 / 7 << " weeks\n";
      cout << "You lived : " << user_age * 365 << " days\n";
      cout << "You lived : " << user_age * 365 * 24 << " hourts\n";
      cout << "You lived : " << user_age * 365 * 24 * 60 << " min\n";
      cout << "You lived : " << user_age * 365 * 24 * 60 * 60 << " secounds\n";
      cout << "================================\n";
      cal();
      break;
    }
  } while (user_choose < 1);
}

int main()
{
  cal();
}
