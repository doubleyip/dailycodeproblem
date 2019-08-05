#include <iostream>
#include <vector>
//Dynamic Programming solution to the N stairs, 2 or 1 steps problem.

using namespace std; 

int climbStairs(int n) {
        /*
		if(n==2){
            return 2;}
        if(n==1){
            return 1;
        }
        return climbStairs(n-1)+climbStairs(n-2);
		*/
        
        vector<int> stairs(n+1);
        stairs[1]=1;
        stairs[2]=2;
        
        for(int i=3;i<=n;i++){
            stairs[i]=stairs[i-1]+stairs[i-2];
        }
        
        return stairs[n];
    }
	
int main(){
cout<<climbStairs(10)<<endl;

}