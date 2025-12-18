#include <stdio.h>
void matrixproduct(int mat1[3][3],int mat2[3][3]){
    int result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          result[i][j]=0;
            for(int k=0;k<3;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
                printf("%d",result[i][j]);
            }
            printf(" ");

        }
        printf("\n");
    }
}
int main(){

   int mat1[3][3],mat2[3][3];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("entr the [%d%d] element element of the matrix 1:",i+1,j+1);
        scanf("%d",&mat1[i][j]);
    }
   }
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("entr the [%d%d] element element of the matrix 2:",i+1,j+1);
        scanf("%d",&mat2[i][j]);
    }
   }
   matrixproduct(mat1,mat2);
return 0;
}