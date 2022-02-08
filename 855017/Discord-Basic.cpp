#include <iostream>
using namespace std;

int main() {

  string login[100][3] = {""};

  string inputAccount;
  string inputPassword;

  login[0][0] = "goodjack";
  login[0][1] = "Goodjack-Is-Handsome!";
  login[0][2] = "小克";

  while(true){

      cout << "帳號: ";
      cin >> inputAccount;
      cout << "密碼: ";
      cin >> inputPassword;


      string account;
      string password;
      string name;

      for (int i = 0; i < 100; i++){

        if (inputAccount == login[i][0]){

          account = login[i][0];
          password = login[i][1];
          name = login[i][2];

        }

      }

      if (inputPassword == password && inputAccount == account){

        cout << "歡迎，" << name << "。我們希望您帶個披薩來。\n";
        
        break;

      } else {

        cout << "帳號密碼錯誤，請重新輸入。\n";

      }
    
  }


} 