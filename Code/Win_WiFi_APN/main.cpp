//Win WiFi APN
//main.cpp
//Котов Святослав Павлович, 30.07.2017
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
   //A. Создать точку доступа
       {
           system("cls");
           //---
           cout<<"A. Создать точку доступа"<<endl;
           cout<<"-------------------------"<<endl<<endl;
           cout<<"Создание..."<<endl;
           cout<<"Выполняется команда от имени Администратора:"<<endl;
           cout<<"netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678"<<endl;
           system("netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678");
           cout<<"Точка доступа успешно создана..."<<endl<<endl;
           cout<<"Название: WinWiFiAPN"<<endl;
           cout<<"Пароль: 12345678"<<endl<<endl;
           cout<<"Чтобы включить точку доступа используйте пункт B"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'B':
   //B. Включить точку доступа
       {
           system("cls");
           //---
           cout<<"B. Включить точку доступа"<<endl;
           cout<<"--------------------------"<<endl<<endl;
           cout<<"Включение..."<<endl;
           cout<<"Выполняется команда от имени Администратора:"<<endl;
           cout<<"netsh wlan start hostednetwork"<<endl;
           system("netsh wlan start hostednetwork");
           cout<<"Название: WinWiFiAPN"<<endl;
           cout<<"Пароль: 12345678"<<endl<<endl;
           cout<<"Чтобы выключить точку доступа используйте пункт С."<<endl;
           cout<<"Если есть проблемы с подключением - используйте пункт D."<<endl;
           cout<<"Дальнейшие указания описаны в пункте E"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'C':
   //C. Выключить точку доступа
       {
           system("cls");
           //---
           cout<<"C. Выключить точку доступа"<<endl;
           cout<<"---------------------------"<<endl<<endl;
           cout<<"Выключение..."<<endl;
           cout<<"Выполняется команда от имени Администратора:"<<endl;
           cout<<"netsh wlan stop hostednetwork"<<endl;
           system("netsh wlan stop hostednetwork");
           //---
           system("pause");
           system("cls");
           break;
       }
//---
   case 'D':
   //D. Исправить проблемы с подключением
   {
           system("cls");
           //---
           cout<<"D. Исправить проблемы с подключением"<<endl;
           cout<<"-------------------------------------"<<endl<<endl;
           cout<<"Обнуление точки доступа..."<<endl;
           cout<<"Выполняются команды от имени Администратора:"<<endl;
           cout<<"netsh wlan stop hostednetwork"<<endl;
           system("netsh wlan stop hostednetwork");
           cout<<"netsh wlan set hostednetwork mode=disallow"<<endl;
           system("netsh wlan set hostednetwork mode=disallow");
           cout<<"netsh wlan set hostednetwork mode=allow"<<endl;
           system("netsh wlan set hostednetwork mode=allow");
           cout<<"Обнуление завершено..."<<endl<<endl;
           cout<<"Точка доступа создаётся заново..."<<endl;
           cout<<"Выполняется команда от имени Администратора:"<<endl;
           cout<<"netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678"<<endl;
           system("netsh wlan set hostednetwork mode=allow ssid=WinWiFiAPN key=12345678");
           cout<<"Точка доступа успешно создана..."<<endl<<endl;
           cout<<"Включение..."<<endl;
           cout<<"Выполняется команда от имени Администратора:"<<endl;
           cout<<"netsh wlan start hostednetwork"<<endl;
           system("netsh wlan start hostednetwork");
           cout<<"Название: WinWiFiAPN"<<endl;
           cout<<"Пароль: 12345678"<<endl<<endl;
           cout<<"Чтобы выключить точку доступа используйте пункт С."<<endl;
           cout<<"Если есть проблемы с подключением - попробуйте вполнить данный пункт ещё раз."<<endl;
           cout<<"Дальнейшие указания описаны в пункте E"<<endl<<endl;
           //---
           system("pause");
           system("cls");
           break;
   }
//---
   case 'E':
   //E. Описание работы программы
   {
           system("cls");
           //---
           cout<<"E. Описание работы программы"<<endl;
           cout<<"-----------------------------"<<endl<<endl;
           cout<<"В Windows, если в компьютере, ноутбуке или планшете есть WiFi модуль, тоже можно раздавать точку доступа."<<endl;
           cout<<"Только графического интерфейса для этой цели не предусмотрено. Поэтому данная задача выполнима, только"<<endl;
           cout<<"если открыть командную строку от имени Администратора и ввести несколько команд. Данная программа была"<<endl;
           cout<<"создана, чтобы максимально упростить это дело, а также для того, чтобы не мучиться с bat-файлами."<<endl<<endl;
           cout<<"--------------------------------------"<<endl;
           cout<<"Раздача интернета через точку доступа"<<endl;
           cout<<"--------------------------------------"<<endl<<endl;
           cout<<"Итак, точка доступа создана с помощью данной программы, и теперь нужно настроить её на раздачу интернета."<<endl;
           cout<<"Сделать это очень легко, если следовать следующим шагам:"<<endl<<endl;
           cout<<"1. Кликнуть по иконке подключения сети правой кнопкой мыши"<<endl;
           cout<<"2. Центр управления сетями и общим доступом"<<endl;
           cout<<"3. Изменение параметров адаптера"<<endl;
           cout<<"4. Найти созданное подключение"<<endl;
           cout<<"5. Найти подключение, через которое получаем интернет."<<endl;
           cout<<"6. Кликнуть правой кнопкой мыши по нему и выбирать ''Свойства''"<<endl;
           cout<<"7. Перейти на вкладку ''Доступ''"<<endl;
           cout<<"8. Поставить галочку напротив ''Разрешить другим пользователям сети использовать подключение к Интернету данного\n   компьютера''"<<endl;
           cout<<"9. В ''Подключение домашней сети'' выбрать нашу точку доступа и нажать ''ок''"<<endl<<endl;
           cout<<"--------------------------------------------------------"<<endl;
           cout<<"Проблемы с подключением к интернету через точку доступа"<<endl;
           cout<<"--------------------------------------------------------"<<endl<<endl;
           cout<<"Вполне возможны проблемы с подключением к интернету через созданную точку доступа. Чтобы их решить, был создан пункт D."<<endl;
           cout<<"В нём точка доступа обнуляется и создаётся заново. Это должно решить проблему в большинстве случаев."<<endl;
           cout<<"Самая популярная проблема, это кода устройство подключается к созданной на Windows точке доступа, но интернет"<<endl;
           cout<<"не работает. Сайты не открываются. Или, когда возникают проблемы с получением IP адреса. Решение: полностью отключить"<<endl;
           cout<<"антивирус, антивирусные утилиты, фаерволы. Скорее всего, это они блокируют подключение. Если после отключения"<<endl;
           cout<<"антивируса все заработает, то нужно добавить соединение в исключения антивируса. Так же, проверьте настройки общего"<<endl;
           cout<<"доступа к интернету"<<endl<<endl;
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




