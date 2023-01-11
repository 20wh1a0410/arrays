#include<iostream>
using namespace std;
string parityofMatrix(int a[row][col],int row,int col){
    for(int i = 0;i < n; i++)
        {
            int rowsum= 0;
            for(int j= 0; j< n;j++)
            {
                rowsum += a[i][j];
            }    

        for(int j= 0; j< n; j++)
        {
            int colsum = 0;
            
            for(int i = 0; i < n; i++)
            
                colsum+= a[i][j];
        }
    if(rowsum%2==0&&colsum%2==0)
    return "ok";
    else return"corrupt";
    
}  
int main(){
    int a[m][n];
    cin>>m>>n;
    for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
        cin>>a[i][j];
    }
}
cout<<parityofMatrix(a[m][n]);
return 0;
}
