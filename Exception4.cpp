#include<iostream>
using namespace std;

// int main ()

// {
//     int a, b;
//     cin >>a >>b;
//     try
//     {
//           if (b==0)
//           throw "devide buy zero is not possible";
//           int c = a/b;
//          cout<<c<<endl;

//     }
//     catch(const char *e)
//     {
//        cout<<"Exeption occured : "<<e<<endl;
//     }
    
   
// }


int main()
{
    int a,b;
    cin>>a>>b;

    try{
        if (b==0)
        throw 10;

        int c=a/b;
        cout<<c<<endl;

    }
  catch(int c){
    cout<<" Exception occured :"<<c<<endl;
  }
}