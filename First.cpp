/* first cpp program */
#include <studio.h>
#include <conio.h>

void main(){
    cout << "hello world";
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if(age>=18)
      {cout<<"you are man";}
    elseif(age<=12)
      {
        cout<<"you are a baby";
      }
    else
      {
        cout<<"you are a boy";
      }
}
