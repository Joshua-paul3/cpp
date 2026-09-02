#include<iostream>
using namespace std;

int main()
{
    bool ismale=true;
    bool istall=true;

    if (ismale && istall){
        cout << "Your a tall male" << endl;
    } else if(ismale && !istall){
        cout << "Your a short a short male" << endl;
    } else if(!ismale && istall){
        cout << "Your a tall female" << endl;
    } else {
        cout << "Your a female" << endl;
    }

    //  if(ismale && istall);
    //  {
    //      cout<<"you are a tall male";
    //  }
    //  else(ismale && !istall)
    //  {
    //      cout<<"you are a short male";
    //  }
    // else if (!ismale && istall)
    // {
    //     cout<<"you are a tall female";
    // }
    // else{
    //     cout<<"you are a female";
    // }

return 0;
}
