

// continue means jaane do .
// Continue skip krne ke liye hota hai.

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)   continue;
        cout<<i<<endl;
        
    }
    return 0;
}