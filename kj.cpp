#include<iostream>
using namespace std;
int main()
{
    //creating a prime no. program
    //inputing a value from the user
    cout<<"Enter any no."<<endl;
    int n;
    cin>>n;
    //temporary variable to count the no. of factors of n
    int count=0;
    //Loop to check for the factors
    for(int i=1;i<=n;i++){
        //checking for the divisibility
        if(n%i==0){
        count++;}
    }
        if(count>2){
            cout<<"Non-prime";
        }
        else{
            cout<<"Prime";
        }
        }
//sahiiii chl rahaaa gaizzzz khud se likha huaaaaaaaaa
