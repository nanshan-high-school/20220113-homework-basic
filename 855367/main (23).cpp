#include <iostream>
using namespace std;
int main() {
int fc;
cout << "歡迎來到discord\n";
cout << "1.註冊\n";
cout << "2.登入\n";
cout << "3.修改密碼\n";
string account [1][3] = {};
string ac = "";
string pw = "";
string na = "";
string inac = "";
string inpw = "";
string newpw = "";
while(fc != 4){
  cout << "請輸入想執行的模式:";
  cin >> fc;
  if(fc == 1){
  cout << "帳號:";
  cin >> account [0][0];
  cout << "密碼:";
  cin >> account [0][1];
  cout << "姓名:";
  cin >> account [0][2];
  cout << "註冊成功\n";
  cout << "請輸入想執行的模式:";
  cin >> fc;
  }
if(fc == 2){
  cout << "帳號:";
  cin >> inac;
  cout << "密碼:";
  cin >> inpw;
  while(inac != account[0][0] || inpw != account[0][1]){
  cout << "密碼或帳號錯誤，請重新輸入\n";
  cout << "帳號:";
  cin >> inac;
  cout << "密碼:";
  cin >> inpw;
  }
  if(inac == account[0][0] &&  inpw == account[0][1]){
  cout <<string(account[0][2]) +" ,歡迎\n";
  }
  }
if(fc == 3){
  cout << "帳號:";
  cin >> inac;
  cout << "密碼:";
  cin >> inpw;
  while(inac != account[0][0] || inpw != account[0][1]){
  cout << "密碼或帳號錯誤，請重新輸入\n";
  cout << "帳號:";
  cin >> inac;
  cout << "密碼:";
  cin >> inpw;
  }
  if(inac == account[0][0] &&  inpw == account[0][1]){
    cout << "請輸入新密碼:";
    cin >> account[0][1];
    cout << "以後請使用新密碼登入\n";
  }
}
}
}