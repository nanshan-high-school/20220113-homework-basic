#include <iostream>
using namespace std;
int main() {
  string accounts[3][3] = {{"stalin","iosif","史達林"},{"hitler","adolf","希特勒"},{"churchill","winston","邱吉爾"}};
  string account = "";
  string password = "";
  int length = sizeof accounts/sizeof accounts[0];
  while (true){
    cout << "帳號:";
    cin >> account;
    cout << "密碼:";
    cin >> password;
    for ( int i = 0 ; i < length ; i++ ) {
      if (account == accounts[i][0]) {
        if (password == accounts[i][1]){
          cout << "歡迎" << accounts[i][2] << "，我們希望您帶個披薩來";
          return 0;
        }
      }
      if (i == 2) {
        cout << "帳號或密碼錯誤，請重新輸入" << "\n";
      }
    }
  }
} 