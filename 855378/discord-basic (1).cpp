#include <iostream>
using namespace std;
int main() {
  string idpsna[3][3] = {
        {"hank","barry","kyle"},
        {"abc","def","ghi"},
        {"Hank","Barry","Kyle"}
        };
  string id;
  string ps;
  bool fin = false;
  
  while (fin == false){
    cout << "帳號:";
    cin >> id;
    cout << "密碼:";
    cin >> ps;
    for (int i = 0;i < 3;i++) {  
      if (string(id) == idpsna[0][i]){
          
          if (ps == idpsna[1][i]) {
            cout << "Welcome " << idpsna[2][i];
            fin = true;
            break;
            }else {
            cout << "輸入錯誤 請重新輸入。";
            }
          
        
        
    }
  }
  
}
  
}