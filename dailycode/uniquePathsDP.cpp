#include <iostream>
//Find the total number of unique paths from the top left corner to the bottom left corner of an m x n board


using namespace std;

int uniquePaths(int m, int n) {
        /* simple recursive solution
        if(m>=1 && n==1){
            return 1;
        }
        if(m==1 && n>=1){
            return 1;
        }
        
        return uniquePaths(m,n-1)+uniquePaths(m-1,n);
        */
        int matrix[100][100];	//dynamic programming implementation
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(i==1){
                    matrix[i][j]=1;
                }   
                else if(j==1){
                    matrix[i][j]=1;
                }
            }
        }
        
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];
            }
        }
		/* print test for validation
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout<<matrix[i][j]<<" ";
            }
        cout<<endl;
        }
        cout<<matrix[n][n];
		*/
        return matrix[m][n];
    }
	
int main(){
cout<<uniquePaths(3,3)<<endl;

}