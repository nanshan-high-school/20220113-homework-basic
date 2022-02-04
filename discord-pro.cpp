#include <iostream>
using namespace std;

struct UserData {
  string accountName;
  string username;
  string password;
} accounts[100];

int index = 0;
bool isLoggedIn = false;

void regist();
void login();
void logout();
void changePassword();
int checkIsAccountExistAndReturnIndex(string);

int main() {
  while (true) {
    if(isLoggedIn) {
      printf("歡迎來到 Discord！\n\n1. 註冊\n2. 登出\n3. 修改密碼\n\n請輸入想要執行的功能：");
    } else {
      printf("歡迎來到 Discord！\n\n1. 註冊\n2. 登入\n3. 修改密碼\n\n請輸入想要執行的功能：");
    }

    int option;
    cin >> option;

    system("clear");

    switch (option) {
      case 1:
        regist();
        break;

      case 2:
        if(isLoggedIn) {
          logout();
        } else {
          login();
        }
        break;

      case 3:
        changePassword();
        break;

      default:
        break;
    }
  }
}

void regist() {
  if(index == 99) {
    printf("本系統帳號註冊數量已達上限");
  }
  string accountName = "";
  string password = "";
  string username = "";

  cout << "帳號：";
  cin >> accountName;

  if(accountName == "") {
    printf("帳號不可為空\n");
    return;
  }

  if(checkIsAccountExistAndReturnIndex(accountName) != -1) {
    printf("已經有相同的使用者帳號了。\n");
  } else {
    cout << "密碼：";
    cin >> password;
    if(password == "") {
      printf("密碼不可為空\n");
      return;
    }

    cout << "姓名：";
    cin >> username;
    if(username == "") {
      printf("姓名不可為空\n");
      return;
    }

    struct UserData temp = {
      accountName,
      username,
      password
    };

    accounts[index] = temp;

    printf("註冊成功！\n");
    index++;
    return;
  }
}

void login() {
  if(isLoggedIn) {
    printf("您已經登入過了\n");
    return;
  }
  
  string accountName = "";
  string password = "";

  cout << "帳號：";
  cin >> accountName;
  if(accountName == "") {
    printf("帳號不可為空\n");
    return;
  }

  cout << "密碼：";
  cin >> password;
  if(password == "") {
    printf("密碼不可為空\n");
    return;
  }

  int accountIndex = checkIsAccountExistAndReturnIndex(accountName);
  if(accountIndex != -1) {
    if(accounts[accountIndex].password == password) {
      cout << "\n歡迎，" + accounts[accountIndex].username + "。我們希望您帶個披薩來。\n";
      isLoggedIn = true;
    } else {
      printf("帳號密碼錯誤，請重新輸入。\n");
      return;
    }
  } else {
    printf("帳號密碼錯誤，請重新輸入。\n");
    return;
  }
}

void logout() {
  if(isLoggedIn) {
    isLoggedIn = false;
    printf("登出成功\n");
  }
}

void changePassword() {
  if(!isLoggedIn) {
    printf("尚未登入\n");
    return;
  }

  string accountName = "";

  cout << "帳號：";
  cin >> accountName;
  if(accountName == "") {
    printf("帳號不可為空\n");
    return;
  }
  int accountIndex = checkIsAccountExistAndReturnIndex(accountName);

  if(accountIndex != -1) {
    string oldPassword = "";
    cout << "舊密碼：";
    cin >> oldPassword;
    if(oldPassword != accounts[accountIndex].password) {
      printf("舊密碼錯誤\n");
      return;
    }

    string newPassword = "";
    cout << "新密碼：";
    cin >> newPassword;
    if(newPassword == "") {
      printf("新密碼不可為空\n");
      return;
    }

    accounts[accountIndex].password = newPassword;
    cout << "\n修改完成，此後請使用新密碼登入。\n";
  } else {
    printf("帳號密碼錯誤，請重新輸入。\n");
    return;
  }
}

int checkIsAccountExistAndReturnIndex(string accountName) {
  int foundIndex = -1;
  for(int i = 0; i < index; i++) {
    if(accounts[i].accountName == accountName) {
      foundIndex = i;
    }
  }
  return foundIndex;
}