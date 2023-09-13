#include <stdio.h>
int main() {
    int M[3][4] = {
        {18, 24, 36, 41},
        {50, 63, 78, 81},
        {92, 14, 16, 12}
    };

    int bir_b, on_b;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            bir_b = M[i][j] % 10 ;
            on_b = M[i][j] / 10 ;
            
            if( M[i][j] % (bir_b + on_b) == 0 ){
            printf("%d is Harshad Sayısı",M[i][j]);
            printf("\n");
            }else{
            printf("%d is not Harshad Number",M[i][j]);
            printf("\n");
        }
      }
    }

    return 0;
}
