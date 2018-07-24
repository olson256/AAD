#include<iostream>
#include<algorithm>
using namespace std;

void weight(float w[],float p[])
{
    float x[3],sw=0,pw=0;
    int i=0,j=0,temp=0,n=3,W;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
           {
             if(w[j]<w[j+1])
             {
               temp=w[j];
               w[j]=w[j+1];
               w[j+1]=temp;

               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
              }
           }
    }
    cout<<"Enter W:";
    cin>>W;
    x[0]=1;
    if(W-w[0]>0)
    {
        W=W-w[0];
        x[1]=W/w[1];
        if(W-w[1]>0)
        {
            x[2]=W/w[2];
        }
        else
        {
            x[2]=0;
        }
    }
    else
    {
        x[1]=0;
    }

    for(i=0;i<3;i++)
    {
        cout<<x[i]<<"\n";
    }
    for(i=0;i<3;i++)
    {
        sw=sw+(w[i]*x[i]);
        pw=pw+(p[i]*x[i]);
    }
    cout<<"WiXi="<<sw<<endl;
    cout<<"PiXi="<<pw<<endl;

}

void profit(float w[],float p[])
{
    float x[3],sw=0,pw=0;
    int i=0,j=0,temp=0,n=3,W;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
           {
             if(p[j]<p[j+1])
             {
               temp=w[j];
               w[j]=w[j+1];
               w[j+1]=temp;

               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
              }
           }
    }
    cout<<"Enter W:";
    cin>>W;
    x[2]=1;
    if(W-w[2]>0)
    {
        W=W-w[2];
        x[1]=W/w[1];
        if(W-w[1]>0)
        {
            x[0]=W/w[0];
        }
        else
        {
            x[0]=0;
        }
    }
    else
    {
        x[2]=0;
    }

    for(i=0;i<3;i++)
    {
        cout<<x[i]<<"\n";
    }
    for(i=0;i<3;i++)
    {
        sw=sw+(w[i]*x[i]);
        pw=pw+(p[i]*x[i]);
    }
    cout<<"WiXi="<<sw<<endl;
    cout<<"PiXi="<<pw<<endl;

}

void pw(float w[],float p[])
{
    float x[3],sw=0,pw=0,a[3];
    int i=0,j=0,temp=0,n=3,W;
    for(i=0;i<3;i++)
    {
        a[i]=p[i]/w[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
           {
             if(a[j]<a[j+1])
             {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;

               temp=w[j];
               w[j]=w[j+1];
               w[j+1]=temp;

               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
              }
           }
    }

    cout<<"Enter W:";
    cin>>W;
    x[0]=1;
    if(W-w[0]>0)
    {
        W=W-w[0];
        x[1]=W/w[1];
        if(W-w[1]>0)
        {
            //
            W=W-w[1];
            x[2]=W/w[2];
        }
        else
        {
            x[2]=0;
        }
    }
    else
    {
        x[1]=0;
    }

    for(i=0;i<3;i++)
    {
        cout<<x[i]<<"\n";
    }
    for(i=0;i<3;i++)
    {
        sw=sw+(w[i]*x[i]);
        pw=pw+(p[i]*x[i]);
    }

    cout<<"WiXi="<<sw<<endl;
    cout<<"PiXi="<<pw<<endl;

}

int main()
{
   float w[3]={18,15,10},p[3]={25,24,15},x[3];
   int n;
   cout<<"1.Profit \n2.Weight \n3.P/W"<<endl;
   cin>>n;
   switch(n)
   {
       case 1:profit(w,p);
       break;
       case 2:weight(w,p);
       break;
       case 3:pw(w,p);
       break;

   }
}
