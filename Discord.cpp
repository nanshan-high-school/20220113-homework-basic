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
        cout << "�gӭ�� Discord!" << endl;
        cout << "1. �]��" << endl;
        cout << "2. ����" << endl;
        cout << "3. �޸��ܴa" << endl;
        cout << "Ոݔ����Ҫ���еĹ���:";
        cin >> option;
    };

    int check = 0 , times = 1;
    while(times != 100){
        if(option == "1"){ //�]��
            cout << "��̖:";
            cin >> savereg;
            for(int i = 0 ; i < 100 ; i++){
                if(savereg == reg[i][0]){
                    cout << "�ѽ�����ͬ��ʹ���ߎ�̖�ˡ�" << endl;
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

            cout << "�ܴa:";
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
            cout << "����:";
            cin >> savereg2;
            if(!checkreg2[check]){
                reg[check][2] = savereg2;
                checkreg2[check] = true;
                cout << "�]�Գɹ�!" << endl;
                goto START;
            }else if(checkreg2[check]){
                check++;
                reg[check][2] = savereg2[check];
                checkreg2[check] = true;
                cout << "�]�Գɹ�!" << endl;
                goto START;
            }
        }else if(option == "2"){//����
            cout << "��̖:";
            cin >> account;
            cout << "�ܴa:";
            cin >> password;
            for(int i = 0 ; i < 100 ; i++){
                if(account == login[i][0] && password == login[i][1]){
                    check = i;
                    cout << "�gӭ��" << reg[check][2] << "���҂�ϣ�����������_��" << endl;
                    goto START;
                }else {
                    cout << "��̖�ܴa�e�`��Ո����ݔ�롣" << endl;
                    goto START;
                }
            }
        }else if(option == "3"){
            cout << "��̖:";
            cin >> account;
            cout << "�f�ܴa:";
            cin >> password;

            for(int i = 0 ; i < 100 ; i++){
                if(account == login[i][0] && password == login[i][1]){
                    cout << "���ܴa:" ;
                    cin >> newpassword;
                    check = i;
                    login[check][1] = newpassword;
                    reg[check][1] = newpassword;
                    cout << "�޸���ɣ�����Ոʹ�����ܴa���롣" << endl;
                    goto START;
                }else {
                    cout << "��̖�ܴa�e�`��Ո����ݔ�롣" << endl;
                    goto START;
                }
            }
        }else{
            cout << "\033[31mERROR 404 NOT FOUND!\033[37m" << endl;
            goto START;
        }
    }
    cout << "�ŷ������~�ѝM"; 
}