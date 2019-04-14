//Win WiFi APN
//main.cpp
//��⮢ ����᫠� ��������, 30.07.2017
//C++
//Qt 5.9.0
//MinGW 5.3.0 32 bit
//IBM-866

#include "Win_WiFi_APN.h"
//----
int main(int argc, char *argv[])
{
    QCoreApplication ap(argc, argv);
    system("color 0a");
    system("title Win WiFi APN");
    while (true)
    {
       char code=menu();
       switch (code)
       {
//---
   case 'A':
   //A. ������� ��� ����㯠
       {
           system("cls");
           //---
           cout<<"A. ������� ��� ����㯠"<<endl;
           cout<<"-------------------------"<<endl<<endl;
           cout<<"��������..."<<endl;
           cout<<"�믮������ ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678"<<endl;
           system("netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678");
           cout<<"��窠 ����㯠 �ᯥ譮 ᮧ����..."<<endl<<endl;
           cout<<"��������: WinWiFiAPN"<<endl;
           cout<<"��஫�: 12345678"<<endl<<endl;
           cout<<"�⮡� ������� ��� ����㯠 �ᯮ���� �㭪� B"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'B':
   //B. ������� ��� ����㯠
       {
           system("cls");
           //---
           cout<<"B. ������� ��� ����㯠"<<endl;
           cout<<"--------------------------"<<endl<<endl;
           cout<<"����祭��..."<<endl;
           cout<<"�믮������ ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan start hostednetwork"<<endl;
           system("netsh wlan start hostednetwork");
           cout<<"��������: WinWiFiAPN"<<endl;
           cout<<"��஫�: 12345678"<<endl<<endl;
           cout<<"�⮡� �몫���� ��� ����㯠 �ᯮ���� �㭪� �."<<endl;
           cout<<"�᫨ ���� �஡���� � ������祭��� - �ᯮ���� �㭪� D."<<endl;
           cout<<"���쭥�訥 㪠����� ���ᠭ� � �㭪� E"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'C':
   //C. �몫���� ��� ����㯠
       {
           system("cls");
           //---
           cout<<"C. �몫���� ��� ����㯠"<<endl;
           cout<<"---------------------------"<<endl<<endl;
           cout<<"�몫�祭��..."<<endl;
           cout<<"�믮������ ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan stop hostednetwork"<<endl;
           system("netsh wlan stop hostednetwork");
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'D':
   //D. ��ࠢ��� �஡���� � ������祭���
   {
           system("cls");
           //---
           cout<<"D. ��ࠢ��� �஡���� � ������祭���"<<endl;
           cout<<"-------------------------------------"<<endl<<endl;
           cout<<"���㫥��� �窨 ����㯠..."<<endl;
           cout<<"�믮������� ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan stop hostednetwork"<<endl;
           system("netsh wlan stop hostednetwork");
           cout<<"netsh wlan set hostednetwork mode=disallow"<<endl;
           system("netsh wlan set hostednetwork mode=disallow");
           cout<<"netsh wlan set hostednetwork mode=allow"<<endl;
           system("netsh wlan set hostednetwork mode=allow");
           cout<<"���㫥��� �����襭�..."<<endl<<endl;
           cout<<"��窠 ����㯠 ᮧ������ ������..."<<endl;
           cout<<"�믮������ ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678"<<endl;
           system("netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678");
           cout<<"��窠 ����㯠 �ᯥ譮 ᮧ����..."<<endl<<endl;
           cout<<"����祭��..."<<endl;
           cout<<"�믮������ ������� �� ����� �����������:"<<endl;
           cout<<"netsh wlan start hostednetwork"<<endl;
           system("netsh wlan start hostednetwork");
           cout<<"��������: WinWiFiAPN"<<endl;
           cout<<"��஫�: 12345678"<<endl<<endl;
           cout<<"�⮡� �몫���� ��� ����㯠 �ᯮ���� �㭪� �."<<endl;
           cout<<"�᫨ ���� �஡���� � ������祭��� - ���஡�� �������� ����� �㭪� ��� ࠧ."<<endl;
           cout<<"���쭥�訥 㪠����� ���ᠭ� � �㭪� E"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
   }
//---
   case 'E':
   //E. ���ᠭ�� ࠡ��� �ணࠬ��
   {
           system("cls");
           //---
           cout<<"E. ���ᠭ�� ࠡ��� �ணࠬ��"<<endl;
           cout<<"-----------------------------"<<endl<<endl;
           cout<<"� Windows, �᫨ � ��������, ����㪥 ��� ������ ���� WiFi �����, ⮦� ����� ࠧ������ ��� ����㯠."<<endl;
           cout<<"���쪮 ����᪮�� ����䥩� ��� �⮩ 楫� �� �।�ᬮ�७�. ���⮬� ������ ����� �믮�����, ⮫쪮"<<endl;
           cout<<"�᫨ ������ ��������� ��ப� �� ����� ����������� � ����� ��᪮�쪮 ������. ������ �ணࠬ�� �뫠"<<endl;
           cout<<"ᮧ����, �⮡� ���ᨬ��쭮 ������ �� ����, � ⠪�� ��� ⮣�, �⮡� �� ������� � bat-䠩����."<<endl<<endl;
           cout<<"--------------------------------------"<<endl;
           cout<<"������ ���୥� �१ ��� ����㯠"<<endl;
           cout<<"--------------------------------------"<<endl<<endl;
           cout<<"�⠪, �窠 ����㯠 ᮧ���� � ������� ������ �ணࠬ��, � ⥯��� �㦭� ����ந�� �� �� ࠧ���� ���୥�."<<endl;
           cout<<"������� �� �祭� �����, �᫨ ᫥������ ᫥���騬 蠣��:"<<endl<<endl;
           cout<<"1. �������� �� ������ ������祭�� �� �ࠢ�� ������� ���"<<endl;
           cout<<"2. ����� �ࠢ����� ��ﬨ � ��騬 ����㯮�"<<endl;
           cout<<"3. ��������� ��ࠬ��஢ ������"<<endl;
           cout<<"4. ���� ᮧ������ ������祭��"<<endl;
           cout<<"5. ���� ������祭��, �१ ���஥ ����砥� ���୥�."<<endl;
           cout<<"6. �������� �ࠢ�� ������� ��� �� ���� � �롨��� ''�����⢠''"<<endl;
           cout<<"7. ��३� �� ������� ''�����''"<<endl;
           cout<<"8. ���⠢��� ������ ����⨢ ''������� ��㣨� ���짮��⥫� �� �ᯮ�짮���� ������祭�� � ���୥�� �������\n   ��������''"<<endl;
           cout<<"9. � ''������祭�� ����譥� ��'' ����� ���� ��� ����㯠 � ������ ''��''"<<endl<<endl;
           cout<<"--------------------------------------------------------"<<endl;
           cout<<"�஡���� � ������祭��� � ���୥�� �१ ��� ����㯠"<<endl;
           cout<<"--------------------------------------------------------"<<endl<<endl;
           cout<<"������ �������� �஡���� � ������祭��� � ���୥�� �१ ᮧ������ ��� ����㯠. �⮡� �� ����, �� ᮧ��� �㭪� D."<<endl;
           cout<<"� �� �窠 ����㯠 �������� � ᮧ������ ������. �� ������ ���� �஡���� � ����設�⢥ ��砥�."<<endl;
           cout<<"����� �����ୠ� �஡����, �� ���� ���ன�⢮ ������砥��� � ᮧ������ �� Windows �窥 ����㯠, �� ���୥�"<<endl;
           cout<<"�� ࠡ�⠥�. ����� �� ���뢠����. ���, ����� ��������� �஡���� � ����祭��� IP ����. ��襭��: ��������� �⪫����"<<endl;
           cout<<"��⨢����, ��⨢����� �⨫���, 䠥ࢮ��. ���॥ �ᥣ�, �� ��� ��������� ������祭��. �᫨ ��᫥ �⪫�祭��"<<endl;
           cout<<"��⨢���� �� ��ࠡ�⠥�, � �㦭� �������� ᮥ������� � �᪫�祭�� ��⨢����. ��� ��, �஢���� ����ன�� ��饣�"<<endl;
           cout<<"����㯠 � ���୥��"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
   }
//---
       } //switch
 } //while
//------
    return ap.exec();
} //main




