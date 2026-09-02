#include<iostream>
using namespace std;
void sayhi(string name , int age);

int main()
{
sayhi(" joshua",60);
sayhi(" tom" , 90);
sayhi(" paul" , 78);
sayhi(" jam" , 56);
    return 0;
}

void sayhi(string name , int age)
{
    cout<<"hello"<<name<<" you are "<< age<<" old"<<endl;
}
