#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int mat[4][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    
    int n=4;
    
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp= mat[i][j];
            mat[i][j]=mat[j][n-i-1];
            mat[j][n-i-1]=mat[n-i-1][n-j-1];
            mat[n-i-1][n-j-1]=mat[n-j-1][i];
            mat[n-j-1][i]=temp;
            
            
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("%2d ", mat[i][j]);
  
        
    }
    printf("\n");
}
    
    
	return 0;
}
