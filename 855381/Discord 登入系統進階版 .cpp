#include <iostream>
#include <stdio.h>
using  namespace std;
int main(){
  string list  [100];
  string list2 [100];
  string list3 [100];
  string list4 [1];
  string list5 [2];
  int num ,n=0,t=1; 
  while(t !=0){
    cout << "歡迎來到 Discord\n"<< "1. 註冊\n"<<"2. 登入\n"<<"3. 修改密碼\n";
    cout <<"請輸入想要執行的功能：";
    cin >> num;
    if(num ==1){
      int ture =0 ,p =0;
      cout <<"帳號：";  
      cin >> list4 [0];
      cout <<"密碼：";
      cin >> list2 [n];
      cout <<"姓名：";
      cin >> list3 [n];
      while(p !=100){
        if(list4 [0] == list [p]){
          cout << list3 [n] << "\n";
          cout << "\n已經有相同的使用者帳號了\n" << "\n";
          p = 100;
          ture = 1;
        }else  if (list4 [0] != list [p]){
          p += 1 ;
        }
      }
      if(ture == 0){
        cout <<"\n"<< "註冊成功！" << "\n"<< "\n";
        list [n] = list4 [0];
        n+=1;
      }
      num =0;
    }
    if(num ==2){
      int ture =0 ,p =0;
      cout <<"帳號：";  
      cin >> list4 [0];
      cout <<"密碼：";
      cin >> list5 [0];
      while(p !=100){
        if(list4 [0] == list [p]){
          if(list5 [0] == list2 [p]){
            cout << "\n歡迎，"<<list3 [p]<< "。我們希望您帶個披薩來。\n" << "\n";
            ture = 1;
          }
          p = 100;
        }else{
          p += 1 ;
        }
      }
      if(ture == 0){
        cout << "\n帳號密碼錯誤，請重新輸入。\n" << "\n";
      }
    }
    if(num ==3){
      int ture =0 ,p =0;
      cout <<"帳號：";  
      cin >> list4 [0];
      cout <<"舊密碼：";
      cin >> list5 [0];
      cout <<"新密碼：";
      cin >> list5 [1];
      while(p !=100){
        if(list4 [0] == list [p]){
          if(list5 [0] == list2 [p]){
            cout << "\n修改完成，此後請使用新密碼登入。\n" << "\n";
            ture = 1;
            list2 [p] = list5 [1];
          }
          p = 100;
        }else{
          p += 1 ;
        }
      }
      if(ture == 0){
        cout << "\n帳號密碼錯誤，請重新輸入。\n" << "\n";
      }
    }
  } 
}