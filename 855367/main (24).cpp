#include <iostream>
using namespace std;
int main() {
string account [1][3] = {"Barry","nssh","Lai"};
string inac = "";
string inpw = "";
string inaccount = "";
cout << "帳號:";
cin >> inac;
cout << "密碼:";
cin >> inpw;
while(inac != account[0][0] || inpw != account[0][1]){
cout << "密碼或帳號錯誤，請重新輸入\n";
cout << "帳號:";
cin >> inac;
cout << "密碼:";
cin >> inpw;
}
if(inac == account[0][0] &&  inpw == account[0][1]){
cout <<string(account[0][2]) +" ,歡迎";
}
}