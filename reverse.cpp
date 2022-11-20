#include<iostream>
using namespace std;
int main()
{
    //entering value from the user
    cout<<"Enter the value you want to reverse"<<endl;
    int n;
    cin>>n;
    //taking a temporary value to calculate reverse
    int rev=0;
    //taking a temp value to store last digit
    int ld;
    while(n>0){
        //calculating the last digit of the no. by dividing by 10 and storing the remainder
        ld=n%10;
        //agr normal sum krte to vo add hojata isliye ye kr rahe taki ji bhi value nikal k aye last digit ki har baar vo hundreds ,ones ya tens ki position pe ajaye
        rev=(rev*10)+ld;
        //removing the no. that has been extracted
        n=n/10;
    }
    cout<<rev;
}
//ye bhi chal rahaaaa gaizzzz bss isko ittu sa dekha h