//Win WiFi APN
//Win_Admin_WiFi_APN.cpp
//Котов Святослав Павлович, 30.07.2017
//C++
//Qt 5.9.0
//MinGW 5.3.0 32 bit
//IBM-866

#include "Win_WiFi_APN.h"
string prompt="ABCDE";
//---
char menu()
{//Меню программы
   cout<<"Win WiFi APN"<<endl;
   cout<<"-------------"<<endl<<endl;
   cout<<"Меню программы:"<<endl;
   cout<<"A. Создать точку доступа\n";
   cout<<"B. Включить точку доступа\n";
   cout<<"C. Выключить точку доступа\n";
   cout<<"D. Исправить проблемы с подключением\n";
   cout<<"E. Описание работы программы\n";
   cout<<"X. Выход из программы\n";

   for(char code; true; )
    {//ожидается выбор пункта
       cout<<"\nВведите букву нужного пункта и нажмите ENTER: ";
        cin>>code; code=toupper(code); cout<<endl;
        if (code=='X') { system("cls"); exit(0);}
        if ('A'<=code && code<='E') return code;
    }
}
//---
