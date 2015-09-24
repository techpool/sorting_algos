//Implementation of Bubble Sort
#include<stdio.h>
void main(){
    int i, j, a[40], temp, n;
    printf("How many numbers do you want to sort = ");
    scanf("%d", &n);
    printf("Enter you numbers: \n");
    for(i = 0; i < n; i++){
        printf("Number %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    //Bubble sort

    for(i = 1; i < n; i++){
        for(j = 0; j < n - i; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array in ascending order:\n");
    for(i = 0; i < n; i++){
        printf("Number %d : ", i + 1);
        printf("%d\n", a[i]);
    }

    for(i = 1; i < n; i++){
        for(j = 0; j < n - i; j++){
            if(a[j] < a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array in descending order:\n");
    for(i = 0; i < n; i++){
        printf("Number %d : ", i + 1);
        printf("%d\n", a[i]);
    }
}
