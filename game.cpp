#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string colour,name,age;
    cout<<" Enter the colour "<<endl;
getline(cin,colour);
cout<<" Enter the name of the person : "<<endl;
getline(cin,name);
cout<<" Enter the age of the person : "<<endl;
getline(cin,age);
cout<<" Roses are "<<colour<<endl;
cout<<name<<" is very handsomee : "<<endl;
cout<<name<<" is "<<age<<" years old : "<<endl;
return 0;
}
