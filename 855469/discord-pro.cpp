#include <iostream>
using namespace std;
int main() {
  string A[100][3];
  int N = 1; //帳號個數+1
  bool run = true;

  while(run){
    char action;
    cout <<"歡迎來到 Discord！\n1. 註冊\n2. 登入\n3. 修改密碼\n\t請輸入想要執行的功能：";
    cin >> action;
    if(action == '1'){
      string ID, Password, Name;
      bool one = true;

      while(one){
        bool success = true;
        cout << "\t帳號：";
        cin >> ID;
        for(int i = 0; i < N; i++){
          if(ID == A[i][0]){
            cout << "已經有相同的使用者帳號了。\n";
            success = false;
          }
        }

        if(success){
          cout << "\t密碼：";
          cin >> Password;
          cout << "\t姓名：";
          cin >> Name;
          cout << "註冊成功！\n";

          A[N-1][0] = ID;
          A[N-1][1] = Password;
          A[N-1][2] = Name;
          N++;
          one = false;
        }
      }
      cout << "\n";

    }else if(action == '2'){
      string ID, Password;
      bool two = true;
      while(two){
        cout << "\t帳號：";
        cin >> ID;
        cout << "\t密碼：";
        cin >> Password;

        bool ID_true = false;
        for(int i = 0; i < N; i++){
          if(ID == A[i][0]){
            if(Password == A[i][1]){
              ID_true = true;
              cout << "歡迎，" << A[i][2] << "。我們希望您帶個披薩來。\n";
              two = false;
              break;
            }
          }
        }

        if(!ID_true){
          cout << "帳號密碼錯誤，請重新輸入。\n";
        }
      }
      cout << "\n";

    }else if(action == '3'){
      string ID, Password, New;
      bool three = true;
      while(three){
        cout << "\t帳號：";
        cin >> ID;
        cout << "\t密碼：";
        cin >> Password;

        bool ID_true = false;
        for(int i = 0; i < N; i++){
          if(ID == A[i][0]){
            if(Password == A[i][1]){
              ID_true = true;

              cout << "\t新密碼：";
              cin >> New;
              A[i][1] = New;
              cout << "修改完成，此後請使用新密碼登入。\n";
              three = false;
              break;
            }
          }
        }

        if(!ID_true){
          cout << "帳號密碼錯誤，請重新輸入。\n";
        }
      }
      cout << "\n";

    }else{
      cout << "輸入錯誤\n\n";
    }
  }
}
