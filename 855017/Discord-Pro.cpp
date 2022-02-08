#include <iostream>
using namespace std;

int main() {

  string login[100][3] = {""};

  int count = 1;

  string inputNum;
  string inputAccount;
  string inputPassword;
  string inputName;

  login[0][0] = "goodjack";
  login[0][1] = "Goodjack-Is-Handsome!";
  login[0][2] = "小克";

  while (true) {

    cout << "-----------------------\n";
    cout << "歡迎來到Discord !\n\n1. 註冊\n2. 登入\n3. 修改密碼\n\n請輸入想要執行的功能：";

    cin >> inputNum;

    if (inputNum == "1") { //register

      cout << "-----------------------\n";

      cout << "帳號: ";
      cin >> inputAccount;

      bool beenUsed = false;

      for (int i = 0; i < 100; i++){

            if (inputAccount == login[i][0]){

              cout  << "\n" << "已經有相同的使用者帳號了。\n";

              beenUsed = true;

              break;

            }

      }
              
      if (beenUsed == false) {

        cout << "密碼: ";
        cin >> inputPassword;

        cout << "姓名: ";
        cin >> inputName;

        login[count][0] = inputAccount;
        login[count][1] = inputPassword;
        login[count][2] = inputName;
        
        count += 1;

        cout  << "\n" << "註冊成功!\n";

      }

    } else if (inputNum == "2") { //Login

      cout << "-----------------------\n";

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

      }for (int i = 0; i < 100; i++){

        if (inputAccount == login[i][0]){

          account = login[i][0];
          password = login[i][1];
          name = login[i][2];

        }

      }

      if (inputPassword == password && inputAccount == account){

        cout  << "\n" << "歡迎，" << name << "。我們希望您帶個披薩來。\n";

      } else {

        cout  << "\n" << "帳號密碼錯誤，請重新輸入。\n";

      }
          
        

    } else if (inputNum == "3") { //ResetPassword

      cout << "-----------------------\n";

      cout << "帳號: ";
      cin >> inputAccount;

      cout << "舊密碼: ";
      cin >> inputPassword;

      string password;
      string account;

      int location;

      for (int i = 0; i < 100; i++){

        if (inputAccount == login[i][0]){

          account = login[i][0];
          password = login[i][1];
          location = i;
          break;

        }

      }

      if (inputPassword == password) {

        cout << "新密碼: ";
        cin >> inputPassword;

        login[location][1] = inputPassword;

        cout << "\n" << "修改完成，此後請使用新密碼登入。\n";

      } else {

        cout << "\n"  << "帳號密碼錯誤，請重新輸入。\n";

      }


    } else {

      cout << "\n錯誤! 沒有這個功能\n";

      inputNum = "";

    }

  }
  
} 
