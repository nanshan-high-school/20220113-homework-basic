#include <iostream>
using namespace std;

int main() {
    string account[][3] {
        {"goodjack0","Goodjack-Is-Handsome!0","小克0"},
        {"goodjack1","Goodjack-Is-Handsome!1","小克1"},
        {"goodjack2","Goodjack-Is-Handsome!2","小克2"}
    };
    int n = 3;
    string id, password;
    cout << "帳號:";
    cin >> id;
    cout << "\n密碼:";
    cin >> password;
    while (true) {
    for (int i = 0; i < n; i++){
        if (id == account[i][0]) {
            if (password == account[i][1]) {
                cout << "歡迎，" << account[i][2] << "。我們希望您帶個披薩來。";
                break;
            }else {
                cout << "帳號或密碼錯誤，請重新輸入。\n";
                break;
            }
        }else {
            cout << "帳號或密碼錯誤，請重新輸入。\n";
            break;
        }
    }
    break;
    }
} 
