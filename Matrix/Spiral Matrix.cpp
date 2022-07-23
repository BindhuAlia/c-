#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int m[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }
    
    int top=0,down=r-1,left=0,right=c-1;
    int d=0;
    while(top<=down and left<=right)
    {
        if(d==0)
        {
            for(int i=left;i<=right;i++)cout<<m[top][i]<<" ";
            top+=1;
        }
        else if(d==1)
        {
            for(int i=top;i<=down;i++)cout<<m[i][right]<<" ";
            right-=1;
        }
        else if(d==2)
        {
            for(int i=right;i>=left;i--)cout<<m[down][i]<<" ";
            left+=1;
        }
        else if(d==3)
        {
            for(int i=down;i<=top;i++)cout<<m[i][left]<<" ";
            down-=1;
        }
        d=(d+1)%4;
    }
}