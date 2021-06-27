
#include<iostream>
using namespace std;

int main()
{
    int n,i=0,num;
    cout<<"enter number: ";
    cin>>n;
    int arr[100];
    string arr_str[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while(n>0)
    {
        num=n%10;
        arr[i]=num;
        n=n/10;
        i++;
    }
    i--;
    for(int j=i;j>=0;j--)
    {
        cout<<arr_str[arr[j]]<<" ";
    }
    return 0;

}
