// * * * * 
//  * * * 
//   * * 
//    * 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        //to print spaces
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        //to print stars
        for(int k = 0 ; k < n - i ; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}