#include <iostream>
using namespace std;
int main() {
  string a;
  string b;
  string ip[2][3];
  ip[1][0]="goodjack";
  ip[1][1]="Goodjack-Is-Handsome!";
  ip[1][2]="小克";
  cout<<"帳號:";
  cin>>a;
  cout<<"密碼:";
  cin>>b;
  if(a==ip[1][0]){
    if(b==ip[1][1]){
      cout<<"歡迎，";
      cout<<ip[1][2];
      cout<<"。我們希望您帶個披薩來。";
    }else{
      cout<<"帳號密碼錯誤，請重新輸入";
    }
  }
}
