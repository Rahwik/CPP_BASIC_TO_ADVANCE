//Power Options
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
int getInput();
int main()
{
    int ch, sec, i;
    string strOne, strTwo;
    char str_One[50], str_Two[10];
    ostringstream intToStr;
    cout<<"1. Shutdown Computer\n";
    cout<<"2. Restart Computer\n";
    cout<<"3. Exit\n";
    cout<<"Enter Your Choice: ";
    cin>>ch;
    if(ch==1 || ch==2)
    {
        cout<<"Enter Number of Seconds: ";
        cin>>sec;
        intToStr<<sec;
        strTwo = intToStr.str();
    }
    switch(ch)
    {
        case 1:
            strOne = "C:\\Windows\\System32\\shutdown /s /t ";
            i=0;
            while(strOne[i])
            {
                str_One[i] = strOne[i];
                i++;
            }
            str_One[i] = '\0';
            i=0;
            while(strTwo[i])
            {
                str_Two[i] = strTwo[i];
                i++;
            }
            str_Two[i] = '\0';
            strcat(str_One, str_Two);
            system(str_One);
            break;
        case 2:
            strOne = "C:\\Windows\\System32\\shutdown /r /t ";
            i=0;
            while(strOne[i])
            {
                str_One[i] = strOne[i];
                i++;
            }
            str_One[i] = '\0';
            i=0;
            while(strTwo[i])
            {
                str_Two[i] = strTwo[i];
                i++;
            }
            str_Two[i] = '\0';
            strcat(str_One, str_Two);
            system(str_One);
            break;
        case 3:
            return 0;
        default:
            cout<<"\nWrong Choice!";
            return 0;
    }
    return 0;
}