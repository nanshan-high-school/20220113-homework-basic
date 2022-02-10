#include <iostream>
using namespace std;

int main() {
    int num = 1;
    string users[100][3];
    string work;
    string id,password, name;
    int tf = 1;
    while (tf) {
        cout << "歡迎來到 Discord！\n\n1. 註冊\n2. 登入\n3. 修改密碼\n\n請輸入想要執行的功能：";
        cin >> work;
        cout << "\n";
        if (work == "1") {
            cout << "帳號：";
            cin >> id;
            for (int i = 0; i < num; i++) {
                if (id == users[i][0]) {
                    cout << "\n已經有相同的使用者帳號了。\n";
                    break;
                } else {
                    cout << "密碼：";
                    cin >> password;
                    cout << "姓名：";
                    cin >> name;
                    users[num - 1][0] = {id};
                    users[num - 1][1] = {password};
                    users[num - 1][2] = {name};
                    cout << "\n註冊成功！\n";
                    num++;
                    break;
                }
            }
        }else if (work == "2") {
            while (tf) {
            cout << "帳號:";
            cin >> id;
            cout << "密碼:";
            cin >> password;
            for (int i = 0; i < num; i++) {
                if (id == users[i][0]) {
                    if (password == users[i][1]) {
                        cout << "\n歡迎，" << users[i][2] <<"。我們希望您帶個披薩來。\n";
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
        }else if (work == "3") {
            string password_o, password_n;
            cout << "帳號：";
            cin >> id;
            cout << "舊密碼：";
            cin >> password_o;
            cout << "新密碼：";
            cin >> password_n;
            for (int i = 0; i < num; i++) {
                if (id == users[i][0]) {
                    if (password_o == users[i][1]) {
                        users[i][1] = password_n;
                        cout << "\n修改完成，此後請使用新密碼登入。\n";
                        break;
                    } else {
                        cout << "\n帳號或密碼錯誤，請重新輸入。\n";
                        break;    
                    }
                } else {
                    cout << "帳號或密碼錯誤，請重新輸入。\n";
                    break;
                }
            }
        }else {
            cout << "請重新輸入數字\n";
        }
    }
}