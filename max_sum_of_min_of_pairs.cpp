#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;


int main()
{   //make pairs and get the sum of all minimum of pairs
   int arr[]={1,4,3,2,8,2,0,4}; //length is even
   int n=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+n);
   int sum=0;
   for(int i=0;i<n;i+=2){
       int mi=min(arr[i],arr[i+1]);
       sum+=mi;
   }
   cout<<sum;
       return 0;
}
