#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    float sum=0;
    float mean=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    mean=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=pow((a[i]-mean),2);
    }
    sum=sum/n;
    printf("%.1f",pow(sum,0.5));
    return 0;
}
