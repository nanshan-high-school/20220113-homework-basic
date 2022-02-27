#include <iostream>
using namespace std;

int main() {
    int options = 0, num = 0;
    string account, password, username, passwordPlus;
    string user[3][100] = {};
    while(true){
      cout << "歡迎來到discord!\n\n" << "1. 註冊\n" << "2. 登入\n" << "3. 修改密碼\n\n" << "請輸入想要執行的內容:";
      cin >> options;
      cout << "\n";
      if(options == 1){
        cout << "帳號:";
        cin >> account;
        
        for(int i = 0; i < 100; i++){
          if(account == user[0][i]){
            cout << "\n已經有相同的使用者帳號了。\n\n";
            break;            
          }
          
          if(i == 99 && account != user[0][i]){
            user[0][num] = account;
            cout << "密碼:";
            cin >> password;
            user[1][num] = password;
            cout << "姓名:";
            cin >> username;
            user[2][num] = username;
            num++;
            cout << "\n註冊成功！\n\n";
          }
        }
      }
      if(options == 2){
        cout << "帳號:";
        cin >> account;
        cout << "密碼:";
        cin >> password;
        
        for(int i = 0; i < 100; i++){
          if(account == user[0][i] && password == user[1][i]){
            cout << "\n歡迎，" << user[2][i] << "。我們希望您帶個披薩來。\n\n";
            break;
          }
          if(i == 99 && account != user[0][i]){
             cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
            break;
          }
          if(i == 99 && password != user[1][i]){
             cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
             break;   
          }
        }
      
    }
      if(options == 3){
          cout << "帳號:";
          cin >> account;          
          cout << "舊密碼:";
          cin >> password;
          for(int i = 0; i < 100; i++){
            if(account == user[0][i] && password == user[1][i]){
              cout << "新密碼:";
              cin >> passwordPlus;
              user[1][i] = passwordPlus;
              cout << "\n修改完成，此後請使用新密碼登入。\n\n";
              break;
            }
            if(account != user[0][i] && i == 99){
              cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
              break;
            }  
            if(i == 99 && password != user[1][i]){
              cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
              break;
            }
        }
      }
      
    }
}

  
    
