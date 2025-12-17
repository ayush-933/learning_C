#include <stdio.h>
int main(){

 int matrix[3][3],count1=0,count2=0;
 for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
        printf("enter element[%d][%d]:",i,j);
        scanf("%d",&matrix[i][j]);
        
    }
    }
    

 
 for(int m=0;m<=2;m++){
    for(int n=0;n<=2;n++){
        if(matrix[m][n]==matrix[n][m]){
           count1++;
        }
    else if (matrix[m][n]== -matrix[n][m] || (m==n && matrix[m][n]==0)){
         count2++;
    }
    else{
        printf("the matrix is neither symetrical nor skew symetrical");
        break; 
    }
 }
}
if(count1==9&&count2!=9){
    printf("the matrix is symetrical");
}
else if(count2==9&&count1!=9){
    printf("the matrix is skew symetrical");
}
return 0;
}