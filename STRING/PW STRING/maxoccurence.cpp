

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss>>temp)
    {
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount = 1;
    int count=1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==v[i-1])
        {
            count++;
        }
        else
            count=1;
        maxcount=max(maxcount,count);
    }
    //cout<<maxcount<<endl;
    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==v[i-1])
        {
            count++;
        }
        else
            count=1;
        if (count==maxcount)
        {
            cout<<v[i]<<"="<<maxcount<<endl;
        }
        
    }
    
}