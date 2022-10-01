#include<iostream>
#include<math.h>
using namespace std;
int divide(int n1,int n2)
{
    int sign=(n1<0)^(n2<0);
    n1=abs(n1);
    n2=abs(n2);
    int ans=exp(log(n1)-log(n2));
    return ((sign==0)?ans:-ans);
}
int main()
{
    int a[6]={1,2,3,4},n=4;
    int nums[6];
    int i,flag=0,ans=1;
    for(i=0;i<n;++i)
    {
        if(a[i]!=0)
            ans=ans*a[i];
        else
            flag++;
    }
    for(i=0;i<n;++i)
    {
        if(flag==0)
        {
            nums[i]=divide(ans,a[i]);
        }
        else if(flag==1)
        {
            if(a[i]==0)
                nums[i]=ans;
            else
                nums[i]=0;
        }
        else
        {
            nums[i]=0;
        }
    }
    for(i=0;i<n;++i)
        cout<<nums[i]<<" ";
    return 0;
}
