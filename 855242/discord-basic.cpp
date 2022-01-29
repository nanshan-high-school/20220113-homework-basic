#include <iostream>
using namespace std;

int main() {
  string arr[3][3] = {{"小克","goodjack","Goodjack-Is-Handsome!"},{"不良小克","badjack","Badjack-Is-Maybe-Handsome!"},{"REPL","C++","Hahahaha"}};
  string account = "";
  string password = "";
  bool error = true;

  cout << "帳號:";
  cin >> account;
  cout << "密碼:";
  cin >> password;
  for (int i = 0; i < 3; i++) {
    if(arr[i][1] == account) {
      if (arr[i][2] == password) {
        error = false;
        cout << "歡迎，" << arr[i][0] << "。我們希望您帶個披薩來。";
      }
    }
  }

  if (error) {
    cout << "帳號密碼錯誤，請重新輸入。";
  }
}
