#include <iostream>
using namespace std;
int main() {
  string Jacks[][3]{
    {"goodjack_0", "Goodjack-Is-Handsome!_0", "小克_0"},
    {"goodjack_1", "Goodjack-Is-Handsome!_1", "小克_1"},
    {"goodjack_2", "Goodjack-Is-Handsome!_2", "小克_2"},
    {"goodjack_3", "Goodjack-Is-Handsome!_3", "小克_3"},
    {"goodjack_4", "Goodjack-Is-Handsome!_4", "小克_4"},
    {"goodjack_5", "Goodjack-Is-Handsome!_5", "小克_5"},
    {"goodjack_6", "Goodjack-Is-Handsome!_6", "小克_6"},
    {"goodjack_7", "Goodjack-Is-Handsome!_7", "小克_7"},
    {"goodjack_8", "Goodjack-Is-Handsome!_8", "小克_8"},
    {"goodjack_9", "Goodjack-Is-Handsome!_9", "小克_9"}
    };
  int N = 10; //帳號個數
  
  string ID, Password;
  bool b = true;
  while(b){
    cout << "帳號：";
    cin >> ID;
    cout << "密碼：";
    cin >> Password;
    for(int i = 0; i < N; i++){
      if(ID == Jacks[i][0]){
        if(Password == Jacks[i][1]){
          cout << "歡迎，" << Jacks[i][2] << "。我們希望您帶個披薩來。\n";
          b = false;
          break;
        }else{
          cout << "帳號密碼錯誤，請重新輸入。\n";
        }
      }
    }
  }
}
