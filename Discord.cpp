#include <iostream>
#include <string> 
using namespace std;

int main (){
    string option;
    string savereg , savereg1 , savereg2 ,account , password , newpassword; 
    string reg[100][3]; string login[100][2];
    bool checkreg[100] = {false}; 
    bool checkreg1[100] = {false}; 
    bool checkreg2[100] = {false}; 
    
    START:{
        cout << "歡迎來到 Discord!" << endl;
        cout << "1. 註冊" << endl;
        cout << "2. 登入" << endl;
        cout << "3. 修改密碼" << endl;
        cout << "請輸入想要執行的功能:";
        cin >> option;
    };

    int check = 0 , times = 1;
    while(times != 100){
        if(option == "1"){ //註冊
            cout << "帳號:";
            cin >> savereg;
            for(int i = 0 ; i < 100 ; i++){
                if(savereg == reg[i][0]){
                    cout << "已經有相同的使用者帳號了。" << endl;
                    goto START;
                    }
                }
            if(!checkreg[check]){
                reg[check][0] = savereg;
                login[check][0] = savereg;
                checkreg[check] = true;
                times++;
            }else if(checkreg[check]){
                check++;
                times++;
                reg[check][0] = savereg;
                login[check][0] = savereg;
                checkreg[check] = true;
            }

            cout << "密碼:";
            cin >> savereg1;
            if(!checkreg1[check]){
                reg[check][1] = savereg1;
                login[check][1] = savereg1;
                checkreg1[check] = true;
            }else if(checkreg1[check]){
                check++;
                reg[check][1] = savereg1
                [check];
                login[check][1] = savereg;
                checkreg1[check] = true;
            }
            cout << "姓名:";
            cin >> savereg2;
            if(!checkreg2[check]){
                reg[check][2] = savereg2;
                checkreg2[check] = true;
                cout << "註冊成功!" << endl;
                goto START;
            }else if(checkreg2[check]){
                check++;
                reg[check][2] = savereg2[check];
                checkreg2[check] = true;
                cout << "註冊成功!" << endl;
                goto START;
            }
        }else if(option == "2"){//登入
            cout << "帳號:";
            cin >> account;
            cout << "密碼:";
            cin >> password;
            for(int i = 0 ; i < 100 ; i++){
                if(account == login[i][0] && password == login[i][1]){
                    check = i;
                    cout << "歡迎，" << reg[check][2] << "。我們希望您帶個披薩來。" << endl;
                    goto START;
                }else {
                    cout << "帳號密碼錯誤，請重新輸入。" << endl;
                    goto START;
                }
            }
        }else if(option == "3"){
            cout << "帳號:";
            cin >> account;
            cout << "舊密碼:";
            cin >> password;

            for(int i = 0 ; i < 100 ; i++){
                if(account == login[i][0] && password == login[i][1]){
                    cout << "新密碼:" ;
                    cin >> newpassword;
                    check = i;
                    login[check][1] = newpassword;
                    reg[check][1] = newpassword;
                    cout << "修改完成，此後請使用新密碼登入。" << endl;
                    goto START;
                }else {
                    cout << "帳號密碼錯誤，請重新輸入。" << endl;
                    goto START;
                }
            }
        }else{
            cout << "\033[31mERROR 404 NOT FOUND!\033[37m" << endl;
            goto START;
        }
    }
    cout << "伺服器名額已滿"; 
}