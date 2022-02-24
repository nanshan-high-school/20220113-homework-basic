#include <iostream>
using namespace std;
int main(){
  string ipn[100][3];
  int a,b,r;
  int e,z,g=0;
  string j,k,l,m,n,o,y,w;
  while(true){
    cout<<"歡迎來到Discord!\n";
    cout<<"1.註冊\n";
    cout<<"2.登入\n";
    cout<<"3.修改密碼\n";
    cout<<"4.";
    cout<<"請輸入你想執行的功能:";
    cin>>a;
    if(a==1){
      cout<<"帳號:";
      cin>>j;
      for(int f=0;f<=e;f++){
        if(j==ipn[f][0]){
          cout<<"已經有相同的使用者帳號了\n";
          g=1;
          break;
        }else{
          g=0;
          break;
        }
      }
      if(g==0){
        ipn[e][0]=j;
        cout<<"密碼:";
        cin>>ipn[e][1];
        cout<<"姓名:";
        cin>>ipn[e][2];
        cout<<"註冊成功!\n";
      }
    }
    if(a==2){
      cout<<"帳號:";
      cin>>k;
      cout<<"密碼:";
      cin>>l;
      for(int f=0;f<=e;f++){
        if(k==ipn[f][0]){
          if(l==ipn[f][1]){
            y=ipn[f][2];
            g=0;
            break;
          }else{
            g=1;
            break;
          }
        }
      }
      if(g==0){
        r=rand()%5+1;
        if(r==1){
          cout<<"歡迎，";
          cout<<y;
          cout<<"。我們希望您帶個披薩來\n";
        }else if(r==2){
          cout<<y;
          cout<<" 跳進了伺服器\n";
        }else if(r==3){
          cout<<y;
          cout<<" 剛剛著陸下來\n";
        }else if(r==4){
          cout<<"耶，您成功了，";
          cout<<y;
          cout<<"\n";
        }else if(r==5){
          cout<<"大家一起歡迎 ";
          cout<<y;
          cout<<"\n";
        }  
      }else{
        cout<<"帳號密碼錯誤，請重新輸入\n";
      }
    }
    if(a==3){
      cout<<"帳號:";
      cin>>m;
      cout<<"舊密碼:";
      cin>>o;
      for(int f=0;f<=e;f++){
        if(m==ipn[f][0]){
          if(o==ipn[f][1]){
            g=0;
            b=f;
            break;
          }else{
            g=1;
            break;
          }
        }
      }
      if(g==0){
        cout<<"新密碼:";
        cin>>n;
         ipn[b][1]=n;
        cout<<"修改完成，此後請使用新密碼登入。\n";
      }else{
        cout<<"帳號密碼錯誤，請重新輸入。\n";
      }
    }
    if(a==4){
      cout<<"感謝使用!\n";
      cout<<"Discord使用教學\n";
      cout<<"https://www.youtube.com/watch?v=dQw4w9WgXcQ";
      break;
    }
  e++;
  }
}
