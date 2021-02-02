#include<iostream.h>
#include<conio.h>

inline int square (int x)
{
    int temp;
    temp=x*x;
    return temp;
}
inline int cube (int y)
{
    int temp;
    temp=y*y*y;
    return temp;
}

void main()
{
    clrscr();
    int res1,res2,num1,num2;

    cout<<"Enter a number to find square: "<<endl;
    cin>>num1;

    res1=square(num1);

    cout<<"Square is : "<<res1<<endl;

    cout<<"\nEnter a number to find cube: "<<endl;
    cin>>num2;

    res2=cube(num2);

    cout<<"Cube is : "<<res2<<endl;

    getch();
}
