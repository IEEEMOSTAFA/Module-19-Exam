#include<bits/stdc++.h>
using namespace std;
vector<int>merge_sort(vector<int>a)
{
    if(a.size()<=1)
        return a;


    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=0;i<mid;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sb=merge_sort(b);
    vector<int>sc=merge_sort(c);
    vector<int>sa;
    int ib=0;
    int ic=0;
    for(i=0;i<a.size();i++)
    {
        if(ib>sb.size()-1)
        {
            if(ic==0)
            {
                sa.push_back(sb[ib]);
            }
            else
            {
                if(sc[ic]!=sc[ic-1])
                {
                    sa.push_back(sc[ic]);
                }

            }
            ic++;
        }
        else if(ic>sc.size()-1)
        {
            if(ib==0)
            {
                sa.push_back()
            }
        }
    }
}


















int main()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
vector<int>a2=merge_sort(a);

for(int i=0;i<a2.size();i++)
{
    cout<<a2[i]<<" ";
}
return 0;
}

