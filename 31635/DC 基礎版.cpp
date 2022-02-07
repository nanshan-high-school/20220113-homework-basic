#include <iostream>
using namespace std;

int main() {
    string users[100][3] = {
        {"leon", "noel", "詹豊洋"}, 
        {"goodjack", "Goodjack-Is-Handsome!", "小克"}, 
        {"ABBY", "ABBY IS PIG", "FAT ABBY"}
    };
    string id,password;
    int num = 3 , t = 1;
    while (t) {
        cout << "帳號:";
        cin >> id;
        cout << "密碼:";
        cin >> password;
        for (int i = 0; i < num; i++) {
            if (id == users[i][0]) {
                if (password == users[i][1]) {
                    cout << "歡迎，" << users[i][2] <<"剛剛著陸下來。\n";
                    t = 0;
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
