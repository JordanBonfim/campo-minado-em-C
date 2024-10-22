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

            printf("%d ",v[i][j]);

            

        }
        printf("    |    ");
        for (int k = 0; k<n; k++){
        printf("%2d ", k+i*n);
            
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

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            v[i][j] = 0;
        }
    } 

    // print_vector(n,v);
    for(int i = 0; i<5; i++){
        int rd_num1 = rand() % (max - min + 1) + min;
        int rd_num2 = rand() % (max - min + 1) + min;
        v[rd_num1][rd_num2] = 2;
    }

    print_vector(n,v);
  


    return 0;
}