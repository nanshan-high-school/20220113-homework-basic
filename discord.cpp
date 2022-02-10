#include <iostream>
using namespace std;
​
int main() {
    string users[100][3] = {
        {"goodjack1", "Goodjack1-Is-Handsome!", "小克1"}, 
        {"goodjack2", "Goodjack2-Is-Handsome!", "小克2"}, 
        {"goodjack3", "Goodjack3-Is-Handsome!", "小克3"}
    };
    string id,password;
    int num = 3;
    int tf = 1;
    while (tf) {
        cout << "帳號:";
        cin >> id;
        cout << "密碼:";
        cin >> password;
        for (int i = 0; i < num; i++) {
            if (id == users[i][0]) {
                if (password == users[i][1]) {
                    cout << "歡迎，" << users[i][2] <<"。我們希望您帶個披薩來。\n";
                    tf = 0;
                    break;
                } else {
                    cout << "帳號或密碼錯誤，請重新輸入。\n";
                    break;    
                }
            } else {
                cout << "帳號或密碼錯誤，請重新輸入。\n";
                break;
            }
        }
    }
}