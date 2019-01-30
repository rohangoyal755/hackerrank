#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n;
    float mean=0,sum=0;
    cin>>n;
    int a[n],w[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        sum=sum+w[i];
    }
    for(i=0;i<n;i++)
    {
        mean=mean+a[i]*w[i];
    }
    printf("%.1f",(mean/sum));
    return 0;
}
