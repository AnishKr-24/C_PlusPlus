

#include<iostream>
using namespace std;
void swap(int* x , int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return ;
}
int main()
{
    int a  , b ;
    cout<<"Enter the number : ";
    cin>>a>>b;
    swap(&a , &b);
    cout<<a<<" "<<b;
}




