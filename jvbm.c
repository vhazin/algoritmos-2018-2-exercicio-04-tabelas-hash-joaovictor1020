#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,h,mod,c,x,num;
    scanf("%d", &m);
    int matriz[101][201];
    while(c--){
        scanf("%d %d", &mod &c);
        for (int i = 0; i < c; i++){
            scanf("%d", &x);
            matriz[x%mod][i] = x

    }
        for(i = 0; i < mod; i++){
            printf("%d -> ", i);
            for(j = 0; j < num; j++){
                if (matriz[i][j] != 0){
                    printf("%d -> ", matriz[i][j]);
                    matriz[i][j] = 0
                }
            }
            printf(" \\\n");
    }
    printf("\n");
    }  
    }


}
