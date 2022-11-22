#include <iostream>
using namespace std;
//Linear search in an array
//creating a function of searching an array
int search(int arr[], int n, int b)
{
    for(int i=0;i<n;i++){
        if(arr[i]==b){
            cout<<"Key found at "<<endl;
            return i;
        }
        }
        cout<<"Key not found"<<endl;
        return 0;
        }
 
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
     cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Enter your key"<<endl;
    int b;
    cin>>b;
    cout<<search(arr,n,b);
}
