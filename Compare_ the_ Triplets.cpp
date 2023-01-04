#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int k=0;
    int temp1=0,temp2=0;
    
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int ld[2];
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<=i;j++)
        {
            if(a[i]>b[j])
            {
                
                temp1++;    
                break;
            }
            else if(a[i]<b[j])
            {
                temp2++;
                break;
            }
        }
    
    }
    ld[k]=temp1;
    k++;
    ld[k]=temp2;
    
    for(k=0;k<2;k++)
    {
        cout<<ld[k]<<" ";
    }

}

