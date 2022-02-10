#include <iostream>
using namespace std;

int main() {
  string main[100][3] {""};
  int d = 0 , dacc = 0, aacc = 0;

  string account, password, name, func, newpassword;

  while (true){
    cout << "-----------------------\n";
    cout << "歡迎來到Discord !\n\n1. 註冊\n2. 登入\n3. 修改密碼\n\n請輸入想要執行的功能：";
    cin >> func;
    dacc = 0;

    //P1 註冊帳號
    if (func == "1"){
      cout << "帳號：";
      cin >> account;
      cout << "密碼：";
      cin >> password;
      cout << "姓名：";
      cin >> name;

      for (int i = 0 ; i < 100 ; i++){
        if (main[i][0] == account){
          dacc = 1;
        }
      }

      if (dacc == 0){
        main[aacc][0] = account;
        main[aacc][1] = password;
        main[aacc][2] = name;
        cout << "註冊成功！\n";
        // cout << "編號：";
        // cout << aacc << "\n";
        aacc += 1;
      } else {
        cout << "已經有相同的使用者帳號了。\n";
      }
    }

    //P2 登入帳號
    if (func == "2"){
      cout << "帳號：";
      cin >> account;
      cout << "密碼：";
      cin >> password;
      for (int i = 0 ; i < 100 ; i++){
        if (main[i][0] == account){
          if (main[i][1] == password){
            dacc = 1;
          }
        }
      }
      if (dacc != 1){
        cout << "帳號密碼錯誤，請重新輸入。\n";
      } else {
          cout << "歡迎，" + main[0][2] + "。我們希望您帶個披薩來。\n";
        }
    }

    //P3 修改密碼
    if (func == "3"){
      cout << "帳號：";
      cin >> account;
      cout << "舊密碼：";
      cin >> password;
      cout << "新密碼：";
      cin >> newpassword;
      for (int i = 0 ; i < 100 ; i++){
        if (main[i][0] == account){
          if (main[i][1] == password){
            main[i][1] = newpassword;
            dacc = 1;
          }
        }
      }
      if (dacc != 1){
        cout << "帳號密碼錯誤，請重新輸入。\n";
      } else {
          cout << "修改完成，此後請使用新密碼登入。\n";
      }
    }
  }
} 