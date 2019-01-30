#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
float median(int* a, int start, int end) 
{  int n=end-start+1;
   float m;
   if(n%2==0)
    {  
        m=a[((n-1)/2)+start]+a[(n/2)+start];
        return (m/2);
    }
    else
    {m=a[(n/2)+start];
    
    return m;}
} 

int main() {
    int n,size=0;
    float Q1,Q3;
    cin>>n;
    int arr[n],f[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
        size+=f[i];
    }
    int a[size];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<f[i];j++)
        {
          a[count]=arr[i];
          count++;
        }
    }
    sort(a,a+size);
    Q1=median(a,0,(size/2)-1);
    Q3=median(a,((size+1)/2),size-1);
    //cout<<Q1<<" "<<Q3<<endl;
    printf("%.1f",(Q3-Q1));
    
    return 0;
}
