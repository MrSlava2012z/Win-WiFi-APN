//Win WiFi APN
//Win_Admin_WiFi_APN.cpp
//��⮢ ����᫠� ��������, 30.07.2017
//C++
//Qt 5.9.0
//MinGW 5.3.0 32 bit
//IBM-866

#include "Win_WiFi_APN.h"
string prompt="ABCDE";
//---
char menu()
{//���� �ணࠬ��
   cout<<"Win WiFi APN"<<endl;
   cout<<"-------------"<<endl<<endl;
   cout<<"���� �ணࠬ��:"<<endl;
   cout<<"A. ������� ��� ����㯠\n";
   cout<<"B. ������� ��� ����㯠\n";
   cout<<"C. �몫���� ��� ����㯠\n";
   cout<<"D. ��ࠢ��� �஡���� � ������祭���\n";
   cout<<"E. ���ᠭ�� ࠡ��� �ணࠬ��\n";
   cout<<"X. ��室 �� �ணࠬ��\n";

   for(char code; true; )
    {//��������� �롮� �㭪�
       cout<<"\n������ �㪢� �㦭��� �㭪� � ������ ENTER: ";
        cin>>code; code=toupper(code); cout<<endl;
        if (code=='X') { system("cls"); exit(0);}
        if ('A'<=code && code<='E') return code;
    }
}
//---
