#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string colour,name,age;
    cout<<" Enter the colour"<<endl;
getline(cin,colour);
cout<<" enter the name of the person"<<endl;
getline(cin,name);
cout<<" enter the age of the person"<<endl;
getline(cin,age);
cout<<" roses are "<<colour<<endl;
cout<<name<<" is very handsome"<<endl;
cout<<name<<" is "<<age<<" years old"<<endl;
return 0;
}
