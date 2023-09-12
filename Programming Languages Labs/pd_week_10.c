// Sum of 2 ARRAYS
#include <stdio.h>
#define COLUMN 2 
#define ROW 2

int main() {
    int M[COLUMN][ROW];
    printf("Enter M arrays value: ");
    for(int i=0; i<COLUMN; i++ ){
        for(int j=0; j<ROW; j++){
            scanf("%d",&M[i][j]);
        }
    }
    
    int N[COLUMN][ROW];
    printf("Enter N arrays value: ");
    for(int i=0; i<COLUMN; i++ ){
        for(int j=0; j<ROW; j++){
            scanf("%d",&N[i][j]);
        }
    }
    
    int K[COLUMN][ROW];
    for(int i=0; i<COLUMN; i++ ){
        for(int j=0; j<ROW; j++){
            K[i][j] = M[i][j] + N[i][j];
            printf(" K[%d][%d] = %d \n",i,j,K[i][j]);

        }
    }
  
    return 0;
}
