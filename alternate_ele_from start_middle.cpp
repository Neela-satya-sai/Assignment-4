#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;



int main()
 {   //alternate ele from start and middle (zig-zag)
     int arr[]={2,5,1,3,4,7};
     int n=sizeof(arr)/sizeof(arr[0]);  //n is even allways
     int ans[n];
     int i=0;
     int j=n/2;
     int k=0;
     while(j<n){
        ans[k++]=arr[i++];
        ans[k++]=arr[j++];
     }
     for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
     }
     
     
     
     return 0;
}
