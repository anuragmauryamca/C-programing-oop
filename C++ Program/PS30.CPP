#include<iostream.h>
#include<conio.h>
class abc
{
private:
 func(int i)
{
int val;
val=i;
return i;
}
int double_value()
{
  int
return val+val;
}
};
void main()
{
int abc::*data;
int(abc::*func1);
abc ob1,ob2;
data=&abc::val;
func1=&abc::double_val;
cout<<"here are values"
cout<<ob1.*data<<ob1.*data<<endl;
cout<<"here are double val";
cout<<ob1.*func1(2);
cout<<ob2.*func1(2);
getch();
}