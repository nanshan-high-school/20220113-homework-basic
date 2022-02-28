#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  string ac, pw , n , pwed;
  string been[3][10000] ;
  int a = 0 , b = 0;
  while(true){
    cout << "歡迎來到 Discord !\n\n";
    cout << "1. 註冊\n";
    cout << "2. 登入\n";
    cout << "3. 修改密碼\n\n";
    cout << "請輸入想執行的功能: ";
    cin >> a ;
    if(a==1){
      system("clear");
      cout << "帳號: ";
      cin >> ac ;
      for(int i =0 ; i < 10000 ; i++){
        if(ac == been[0][i]){
          system("clear");
          cout << "已經有相同的使用者帳號了。";
          break ;
        }else if(ac != been[0][i]){
          been[0][b] = ac;
          cout << "密碼: ";
          cin >> pw;
          been[1][b] = pw;
          cout << "姓名: ";
          cin >> n;
          been[2][b] = n;
          b++;
          system("clear");
          cout << "\n註冊成功！\n\n";
          break;
        }
      }
    }
    if(a == 2){
      system("clear");      cout << "帳號: ";
      cin >> ac;
      cout << "密碼: ";
      cin >> pw;
      for(int i = 0; i < 10000; i++){
        if(ac == been[0][i] && pw == been[1][i]){
          system("clear");
          cout << "\n歡迎，" << been[2][i] << "。我們希望您帶個披薩來。\n\n";
          break;
        }
        if(ac != been[0][i]){
          system("clear");
          cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
          break;
        }
        if(pw != been[1][i]){
          system("clear");
          cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
           break;   
        }
      }
    }
    if(a == 3){
      system("clear");      cout << "帳號: ";
      cin >> ac;          
      cout << "舊密碼: ";
      cin >> pw;
      for(int i = 0; i < 10000; i++){
        if(ac == been[0][i] && pw == been[1][i]){
          cout << "新密碼: ";
          cin >> pwed;
          been[1][i] = pwed;
          system("clear");
          cout << "\n修改完成，此後請使用新密碼登入。\n\n";
          break;
        }
        if(ac != been[0][i]){
          system("clear");
          cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
          break;
        }  
        if(pw != been[1][i]){
          system("clear");
          cout << "\n帳號密碼錯誤，請重新輸入。\n\n";
          break;
        }
      }
    }
  }
}
