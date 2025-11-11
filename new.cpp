# include <iostream>
using namespace std;
int main()
{
char a;
cin>>a;
char b=toupper(a);
switch(b)
{
    case 'A':
    cout<<"vowel "<< a;
    break;
    case 'E':
     cout<<"vowel "<< a;
    break;
    case 'I':
     cout<<"vowel "<< a;
    break;
    case 'O':
     cout<<"vowel"<< a;
    break;
    case 'U':
     cout<<"vowel "<< a;
    break;
default:
 cout<<"consonant"<< a;
    break;
}
return 0;

}
