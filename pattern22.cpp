/*

1111
 222
  33
   4

*/





#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

       
        int j=1;
        while (j<=n-i+1)
        {
            int count=i;
            cout<<count;
            count=count+1;
            
                        j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}