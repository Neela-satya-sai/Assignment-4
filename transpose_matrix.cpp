#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;
void transpose(vector<vector<int>> &mat){
    for(int i=1;i<mat.size();i++){
        for(int j=0;j<mat[0].size()-1;j++){
            if(i!=j && i>j){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
}

int main()
{
   //transpose of matrix
   vector<vector<int>> mat={{2,4,-1,2},{-10,5,11,33},{18,-7,6,90},{6,4,11,23}};
   transpose(mat);
   for(int i=0;i<mat.size();i++){
       for(int j=0;j<mat[0].size();j++){
           cout<<mat[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
