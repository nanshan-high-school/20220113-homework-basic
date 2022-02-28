#include<iostream>
using namespace std;

int main()
{
  string a;
  string b;
  string list[3][3]={{"a","b","c"},{"d","e","f"},{"g","h","i"}};
  int d = 0;
    while(0==0)
    {
      a="";
      b="";
      cout<<"enter your account---";
      cin>>a;
      cout<<"enter your password--";
      cin>>b;
      for(int i=0;i<=2;i++){
        if(a==list[i][0] and b==list[i][1]){
          cout<<"welcome    "<<list[i][2]<<" \n";
          d=2;
          break;
      }
        else{
          if(d>=1){break;}
          cout<<"you write the WRONG password     \n";
          cout<<"please try again!\n";
          d=1;   
        }
      
    }if(d==2){break;}
      else{d=0;}
  }
}