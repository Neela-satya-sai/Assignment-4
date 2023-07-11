#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;



int main()
 {   //no of max integers in  the matrix;
     vector<vector<int>> mat(4,vector<int>(4,0));
     vector<vector<int>> ops={{2,3},{1,3},{2,2},{3,4}};
   
     
     //approch: min of row;
               // min of col;
             //now  return min of row * min of col;
     int mi_row=100;
     int mi_col=100;
    
    
     for(int i=0;i<ops.size();i++){
      for(int j=0;j<ops[0].size();j++){
          if(j==0){
            
               mi_row = min(mi_row, ops[i][j]);
              
          }  
          else{
                mi_col = min(mi_col, ops[i][j]);
               
          } 
        }
     }
     cout<<mi_row * mi_col;
     cout<<endl;
     return 0;
}
