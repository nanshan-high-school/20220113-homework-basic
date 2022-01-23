#include <iostream>
#include <string>
using namespace std;

string account[100][3];
int main() {
    int f = 0;
    cout << account[0][1];
    while (true){
        string id, password;
    cout << "歡迎來到 Discord！\n\n1. 註冊\n2. 登入\n3. 修改密碼\n\n請輸入想要執行的功能：";
    cin >> f;
    if (f == 1) {
        for (int i = 0; i < 100; i++) {
            if (account[i] != 0) {
                cout << "帳號:";
                cin >> id;
                for (int j = 0; j < 100; i++) {
                    if (id == account[j][0]) {
                        cout << "已經有相同的使用者帳號了。";
                        break;
                    } else {
                        account[i][0] = id;
                    }
                    break;
                }
                cout << "\n密碼:";
                cin >> account[i][1];
                cout << "\n姓名:";
                cin >> account[i][2];
                cout << "\n\n註冊成功！\n";
            }
            break;
        }
    } else if (f == 2) {
    cout << "帳號:";
    cin >> id;
    cout << "\n密碼:";
    cin >> password;
    while (true) {
    for (int i = 0; i < 100; i++){
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
    } else if (f == 3) {
        bool a = true;
        while (a == true) {
        string newpassword;
        cout << "帳號:";
        cin >> id;
        cout << "\n舊密碼:";
        cin >> password;
        for (int i = 0; i < 100; i++) {
            if (id == account[i][0]) {
                if (password == account[i][1]) {
                    cout << "新密碼:";
                    cin >> newpassword;
                    account[i][1] = newpassword;
                    a = false;
                    break;
                }
            }else {
                break;
            }
            cout << "帳號密碼錯誤，請重新輸入。";
            break;
        }
        }
    }
    }
}
