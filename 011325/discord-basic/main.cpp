#include "set_up.h"
string data[datasize][3];
string welcome[welcomesize];

void ReadFile() {
    ifstream ifs;
    ifs.open("data.txt");
    // 帳號(ID) 密碼 姓名 
    for (int i = 0; i < datasize; i++) {
        for (int j = 0; j < 3; j++) {
            ifs >> data[i][j];
        }
    }
    ifs.close();

    ifs.open("welcome.txt");
    for (int i = 0; i < welcomesize; i++) {
        ifs >> welcome[i];
    }
    ifs.close();
}

void Log() {
    srand(time(NULL)); //rand
    int x = (rand() % welcomesize);
    string ID, password;
    int index;
    bool Login = false;

    while(!Login) {
        cout << "帳號：";
        cin >> ID;
        for (int i = 0; i < datasize; i++) {
            if (ID == data[i][0]) {
                index = i;
                Login = true;
                break;
            }
        }
        if (Login) {
            cout << "密碼：";
            cin >> password;
            if (data[index][1] == password) {
                //帳號密碼都對
                Login = true;
                for (int i = 0; i < welcome[x].size(); i++) {
                    if (welcome[x][i] == '`') {
                        cout << data[index][2];
                    } else {
                        cout << welcome[x][i];
                    }
                }
                cout << endl;
                    
            } else {
                Login = false;
                cout << "帳號密碼錯誤，請重新輸入。";
            }
        } else {
            cout << "沒有這個帳號，請重新輸入。" << endl;
        }
    }
}

void DataShow(bool flag) {
    if (flag){
        cout << "Data" << endl;
        for (int i = 0; i < datasize; i++) {
            for (int j = 0; j < 3; j++) {
                cout << data[i][j] << ' ';
            }
            cout << endl;
        }
        cout << "Welcome" << endl;
        for (int i = 0; i < welcomesize; i++) {
            cout << welcome[i] << endl;
        }
    }
}

int main() {
    ReadFile();
    Log();
    DataShow(ShowAllDataAndWelcome);
} 