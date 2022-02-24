#include <iostream>
using namespace std;
int main() {
  int sel = 0,idnum = 0;
  string id = "",ps = "",na = "";
  string idpsna[3][100] = {
      {},
      {},
      {}
  };
  while (true) {
    cout << "歡迎來到 Discord！\n1. 註冊\n2. 登入\n3. 修改密碼\n請輸入想要執行的功能：";
    cin >> sel;
 
    if (sel == 1) {
      cout << "帳號:";
      cin >> id;
      for (int i = 0;i < 100;i++) {
        if(idpsna[0][i] == id) {
          cout << "已經有相同的使用者帳號了。";
          break;
        }
        if(i = 99 && idpsna[0][100] != id) {
          idpsna[0][idnum] = id;
          cout <<　"密碼:";
          cin >> idpsna[1][idnum];
          cout <<　"姓名:";
          cin >> idpsna[2][idnum];
          idnum ++;
          sel = 0;
          cout << "註冊成功！\n";
          break;
        }
      }
    }
    if (sel == 2) {
      id = "";
      ps = "";
      cout << "帳號:";
      cin >> id;
      cout << "密碼:";
      cin >> ps;
      for (int i = 0;i < 100;i++) {
        if (idpsna[0][i] == id) {
          if (idpsna[1][i] == ps) {
            cout << "歡迎，" << idpsna[2][i] << "。我們希望您帶個披薩來。\n";
            break;
          }else {
            cout << "帳號密碼錯誤，請重新輸入。";
            break;
          }
        }
        if (i == 99 && idpsna[0][i] != id) {
          cout <<　"帳號密碼錯誤，請重新輸入。";
          break;
        }
      }
  }
    if (sel == 3) {
      id = "";
      ps = "";
      cout << "帳號:";
      cin >> id;
      cout << "舊密碼:";
      cin >> ps;
      for (int i = 0;i < 100;i++) {
        if (idpsna[0][i] == id) {
          if (idpsna[1][i] == ps) {
            cout << "新密碼:";
            ps = "";
            cin >> ps;
            idpsna[1][i] = ps;
            cout << "修改完成，此後請使用新密碼登入。";
            break;
          }else {
            cout << "帳號密碼錯誤，請重新輸入。";
            break;
          }
        }
        if (i == 99 && idpsna[0][i] != id) {
          cout <<　"帳號密碼錯誤，請重新輸入。";
          break;
        }
      }
  }
  }        
}

