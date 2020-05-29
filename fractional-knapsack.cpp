#include<bits/stdc++.h>
using namespace std;
double fun(double a1[],double b1[],double c1[],int n,int w)
{
    sort(c1,c1+n);
    int x=n-1,s=0;
    while((w!=0)&&(x>-1)){
        for(int i=0;i<n;i++){
            if((a1[i]/b1[i])==c1[x]){
                if(w>=b1[i]){
                    w-=b1[i];
                    s+=a1[i];
                }
                else{
                    s+=(w/b1[i])*a1[i];
                    w=0;
                }x-=1;
                break;
            }
        }
    }
    return s;
}
int main()
{
    int w,n;
    cout<<"Enter number of value and weight"<<endl;
    cin>>n;
    double a1[n],b1[n],c1[n];
    cout<<"Enter the values and weights"<<endl;
    for(int i=0;i<n;i++){
        cin>>a1[i]>>b1[i];
        c1[i]=a1[i]/b1[i];
    }
    cout<<"Enter Capacity"<<endl;
    cin>>w;
    cout<<fun(a1,b1,c1,n,w);
}
