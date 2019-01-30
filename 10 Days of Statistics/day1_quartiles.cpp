#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Function to give index of the median 
int median(int* a, int start, int end) 
{  int n=end-start+1;
   int m;
   if(n%2==0)
    {  
        m=a[((n-1)/2)+start]+a[(n/2)+start];
        printf("%d",(m/2));
        cout<<endl;
        return 0;
    }
    else
    {printf("%d",a[(n/2)+start]);
    cout<<endl;
    return 1;}
} 

  
// Driver Function 
int main() 
{ 
    int n,begin,last,Q1,Q2,Q3;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   /* if(n%2==0)
    {
        last=(n/2)-1;
        begin=(n/2);  //earlier made separated ways for both odd and even cases
    }
    else{
        last=(n/2)-1;
        begin=((n+1)/2);
    }*/
    Q1=median(a,0,(n/2)-1);
    Q2=median(a,0,n-1);
    Q3=median(a,((n+1)/2),n-1);
     
    return 0; 
} 

