//creating a code for selection sort of an array
#include<iostream>
using namespace std;
int main(){
    //Entering size of array from user
cout<<"Enter the size of the array"<<endl;
int n;
cin>>n;
//entering values of array from the user
cout<<"Enter values in the array"<<endl;
int arr[n];
//loop to enter values
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//loop for sorting
//i loop starting from start to second last value of array
    for(int i=0;i<n-1;i++){
        //j loop starting from value next to i to last value of array
        for(int j =i+1;j<n;j++){
          if(arr[j]<arr[i]){
            //swapping to put least value at the beginning of array
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           
        }
    }
    }
    //loop to print swapped array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}