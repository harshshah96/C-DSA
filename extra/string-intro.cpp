/* 
#include<iostream>
using namespace std;


int main()
{

//char S[]= {'h','e','l','l','o','\0'};
char S[]={65,66,67,68,69,0,70};

cout<<S<<endl;

 return 0;
} 
*/

#include<iostream>
using namespace std;


int main()
{
char s[20];
cout<<"Enter name:"<<endl;
cin.get(s,20);   /* Use  "cin.getline(a,b);"  to avoid using "cin.ignore()." */

cout<<"\nWelcome "<<s<<endl;

cin.ignore();  /* use of this reading of any keyboard buffer to next string. */

char s2[25];
cout<<"\nEnter name again:"<<endl;
cin.get(s2,25);
cout<<"\nWelcome "<<s2<<endl;




 return 0;
}