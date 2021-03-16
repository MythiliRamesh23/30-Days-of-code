#include <cmath>


#include <cstdio>


#include <vector>


#include <iostream>


#include <algorithm>


using namespace std;


int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 


     int n,a[1000],i,j,t;


      cin>>n;


      for(i=0;i<n;i++)


        {


            cin>>a[i];


        }


     for(j=0;j<n;j++);


        for(i=0;i<(j/2);i++)


                {


                    t=a[i];


                    a[i]=a[n-i-1];


                    a[n-i-1]=t;


                }


    for(i=0;i<n;i++)


        {


            cout<<a[i]<<" ";


        }


    return 0;


}
