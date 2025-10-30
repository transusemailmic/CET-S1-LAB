// Bit Strings

#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of elements of the universal set: ");
    scanf("%d",&n);
    int arr[n];
    char bit1[n];
    char bit2[n];
    int arr1[n];
    int arr2[n];
    printf("Enter the elements for the universal set: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the universal set are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the first bitstring with size %d: ",n);
    scanf("%s",bit1);
    printf("Enter the second bitstring with size %d: ",n);
    scanf("%s",bit2);
    printf("Bitstring 1: %s",bit1);
    printf("\nBitstring 2: %s",bit2);
    int j=0;
    for(int i=0;i<n;i++){
        if(bit1[i]=='1'){
            arr1[j]=arr[i];
            j++;
        }
    }
    printf("\nCorresponding set for Bitstring 1: ");
    for(int i=0;i<j;i++){
        printf("%d ",arr1[i]);
    }
    j=0;
    for(int i=0;i<n;i++){
        if(bit2[i]=='1'){
            arr2[j]=arr[i];
            j++;
        }
    }
    printf("\nCorresponding set for Bitstring 2: ");
    for(int i=0;i<j;i++){
        printf("%d ",arr2[i]);
    }
    for(int i=0;i<n;i++){
        int a=(int)bit1[i];
    }
}