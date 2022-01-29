#include <iostream>
using namespace std;

int main() {
  string arr[100][3] = {"\0"};
  int people = 0;

  while (true) {
    cout << "歡迎來到 Discord！\n\n";
    cout << "1. 註冊\n" << "2. 登入\n" << "3. 修改密碼\n\n";
    cout << "請輸入想要執行的功能：";

    string answer;
    while (true) {
      cin >> answer;
      if (answer == "1" || answer == "2" || answer == "3") {
        break;
      }
      cout << "\n無此功能，請重新輸入想要執行的功能:";
    }
    
    string account = "";
    string password = "";
    string name = "";
    bool judgement = false;
    if (answer == "1") {
      cout << "\n註冊帳號:";
      cin >> account;
      for (int i = 0; i < people; i++) {
        if (arr[i][0] == account) {
          judgement = true;
          cout << "\n已經有相同的使用者帳號了。\n\n";
          break;
        }
      }

      if (judgement) {
        continue;
      } else {
        arr[people][0] = account;
        cout << "註冊密碼:";
        cin >> password;
        arr[people][1] = password;
        cout << "註冊姓名:";
        cin >> name;
        arr[people][2] = name;
        people ++;

        cout << "\n註冊成功!\n\n";
      }

    } else if (answer == "2") {
      cout << "\n登入帳號:";
      cin >> account;
      cout << "登入密碼:";
      cin >> password;
      for (int i = 0; i < people; i++) {
        if (arr[i][0] == account) {
          if (arr[i][1] == password) {
            cout << "\n歡迎，" << arr[i][2] << "。我們希望您帶個披薩來。\n\n";
            judgement = true;
            break;
          }
        }
      }

      if (judgement) {
        continue;
      } else {
        cout << "帳號密碼錯誤，請重新輸入。\n\n";
      }

    } else if (answer == "3") {
      cout << "\n需修改的帳號:";
      cin >> account;
      cout << "舊密碼:";
      cin >> password;
      for (int i = 0; i < people; i++) {
        if (arr[i][0] == account) {
          if (arr[i][1] == password) {
            cout << "新密碼:";
            cin >> password;
            arr[i][1] = password;
            cout << "\n修改完成，此後請使用新密碼登入。\n\n";
            break;
          } else {
            cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
            break;
          }
        }
      }

    }
  }
}
