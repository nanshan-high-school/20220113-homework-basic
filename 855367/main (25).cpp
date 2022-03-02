#include <iostream>
using namespace std;
int main(){
int fc;
cout << "歡迎來到discord\n";
cout << "1.註冊\n";
cout << "2.登入\n";
cout << "3.修改密碼\n";
string account [100][3] = {};
string ac = "";
string pw = "";
string na = "";
string inac = "";
string inpw = "";
string inna ="";
string newpw = "";
int i;
int j;
int y = 0;
while(fc != 4){
  cout << "請輸入想執行的模式a:";
  cin >> fc;
  if(fc == 1){
    cout << "1帳號:";
    cin >> inac;
    y=0;
    for(i = 0; i < 100; i++){
      if(inac == account[i][0]){
        cout << "已有此帳號\n";
        y = 1;
        break;
      }
    }
  if(y == 0){
    for(i = 0; i < 100; i++){
      if (account[i][0] == ""){
        cout << "1密碼:";
        cin >> inpw;
        cout << "1姓名:";
        cin >> inna;
        account [i][0] = inac;
        account [i][1] = inpw;
        account [i][2] = inna;
        cout << "註冊成功\n";  
        break;
      }
    }
    }
    }
  if(fc == 2){
    cout << "2帳號:";
    cin >> inac;
    cout << "2密碼:";
    cin >> inpw;
    for(i = 0; i < 100; i++){
      if(inac == account[i][0] &&  inpw == account[i][1]){
        cout << string(account[i][2]) +" ,歡迎\n";
        y = 1;
        break;  
      }
    }
    if(y == 0){
      cout << "密碼或帳號錯誤，請重新輸入\n";
    }
    }
  if(fc == 3){
    cout << "3帳號:";
    cin >> inac;
    cout << "3密碼:";
    cin >> inpw;
    for(i = 0; i < 100; i++){
      if(inac == account[i][0] && inpw == account[i][1]){
        cout << "請輸入新密碼:";
        cin >> account[i][1];
        cout << "以後請使用新密碼登入\n";
        y = 1;
      }  
    }
    if(y == 0){
      cout << "密碼或帳號錯誤，請重新輸入\n";
    }
  }
  }
  }