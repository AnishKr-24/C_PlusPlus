

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int a[n] ;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of element=";
        cin>>a[i];
    }
    
    int j=n-1;
    for (int i = 0; i < j; i++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    

}