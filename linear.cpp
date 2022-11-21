#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
     cout<<"Enter elements of the array"<<endl;
    for(int i=1;i<=n;i++){
       cin>>arr[i];
    cout<<"Enter your key";
    int b;
    cin>>b;
    for(int j=0;j<=n;j++){
        if(arr[j]==b){
            cout<<j;
        }
        else{
            cout<<"Key not found";
        }
    }

}
}