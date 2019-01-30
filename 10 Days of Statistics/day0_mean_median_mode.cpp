#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    cin>>n;
    float mean=0,median,mode;
    int a[n];
    
    int size=a[n-1]+1;
    int count[n];
    
    for(int i=0;i<n;i++)
    {   count[i];
        cin>>a[i];
        mean=mean+a[i];
    }
    sort(a,a+n);
    printf("%.1f",(mean/n));
    cout<<endl;
    
    
    if(n%2==0)
    {  
        median=a[(n-1)/2]+a[(n/2)];
        printf("%.1f",median/2);
        cout<<endl;
    }
    else
    {printf("%.d",a[n/2]);
    cout<<endl;}
 sort(a,a+n);
    mode = a[0];
    temp = 1;
    int temp2 = 1;
    for(int i=1;i<n;i++){
        if(a[i-1] == a[i]){
            temp++;
        }
        else {
            temp = 1;
        }
        if(temp >temp2){
            mode = a[i];
            temp2 = temp;
        }
    }
    cout<<mode;
    return 0;
}
