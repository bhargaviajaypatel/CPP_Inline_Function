#include<iostream.h>
#include<conio.h>

inline int add (int x, int y)
{
    int temp;
    temp=x+y;
    return temp;
}
void main()
{
    clrscr();

    int res, num1,num2;

    cout<<"Enter 2 numbers: "<<endl;
    cin>>num1>>num2;

    res=add(num1,num2);

    cout<<"Addition is : "<<res<<endl;

    getch();
}
