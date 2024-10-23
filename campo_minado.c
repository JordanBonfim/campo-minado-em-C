#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_mat(int n){
    int *v= malloc(n*sizeof(int));

    // for(int i = 0; i<10; i++){

    // }
    return v;
}


void print_vector(int n,int (*v)[n]){
    printf("\n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[i][j]==2){
                printf("* ");
            }else{
                printf(". ");
                // printf("%d ",v[i][j]);
            }



            

        }
        printf("    |    ");
        if(n*n>=100){
            for (int k = 0; k<n; k++){
               printf("%3d ", k+i*n);
            }
        }else{
            for (int k = 0; k<n; k++){
               printf("%2d ", k+i*n);
            }
        }
        


        printf("\n");
    } 
}

int main(){
    srand(time(NULL));

    int n = 12;
    int v[n][n];
    int min = 0;
    int max = n-1;
    int pos;
    int jogadas=0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            v[i][j] = 0;
        }
    } 

    // print_vector(n,v);
    for(int i = 0; i<10; i++){
        int rd_num1 = rand() % (max - min + 1) + min;
        int rd_num2 = rand() % (max - min + 1) + min;
        while(v[rd_num1][rd_num2]!=0){
            rd_num1 = rand() % (max - min + 1) + min;
            rd_num2 = rand() % (max - min + 1) + min;
        }
        v[rd_num1][rd_num2] = 2;
    }


    for(int i = 0; i<10; i++){

        
        
    }



    int x=0;
    int y=0;

    while(jogadas<n*n){
        printf("\n\njogada: ");
        scanf("%d",&pos);
        
        x=pos%n;
        y=pos;
        
        v[x][y]=8;
        printf("\nx: %d y: %d", x, y);
        print_vector(n,v);

    }



   
  


    return 0;
}
