#include <iostream>
using namespace std;
int main() {
int num;
num = 1;
string ID,password;
string discord[3][3] = {
  {"A","BBY","ABBY"},
  {"Ｂ","enny","Benny"},
  {"E","llen","Ellen"}
};
while(num){
  cout <<"帳號:";
    cin >> ID;
  cout <<"密碼:";
  cin >> password;
  for (int k = 0; k < 3; k++){
    if (ID == discord[k][0]){
      if (password == discord[k][1]){
        cout << discord[k][2]<<"剛剛滑入了伺服器中。\n";
        num = 0;
        break;
      }else;{
        cout <<"帳號密碼或錯誤，請重新輸入。\n";
        break;
      }
    }else {
      cout << "帳號或密碼錯誤，請重新輸入。\n";
      break;
    }  
  }
}
} 