#include<iostream>
using namespace std;
int main()
{
     char str[100]={};
     int i=0,flag=0;
     cout<<"Input a string :"<<endl;
     cin.getline(str,100);
     while(str[i++]!='\0')
     {
         if(str[i]!=' '&&str[i-1]==' ')
         flag++;
     }
     if(str[0]==' ')
     cout<<flag<<endl;
     else
     cout<<++flag<<endl;
}