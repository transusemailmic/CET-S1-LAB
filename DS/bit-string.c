// Bit Strings

#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of elements of the universal set: ");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n],arr3[n],arr4[n],j=0;
    char bit1[n],bit2[n],bit3[n],bit4[n];
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
        int a=bit1[i]-'0';
        int b=bit2[i]-'0';
        int c=a|b;
        char d=c+'0';
        bit3[i]=d;
    }
    j=0;
    for(int i=0;i<n;i++){
        if(bit3[i]=='1'){
            arr3[j]=arr[i];
            j++;
        }
    }
    printf("\nBitstring for Bitstring 1 ∪ Bitsring 2: %s",bit3);
    printf("\nCorresponding set for Bitstring 1 ∪ Bitsring 2: ");
    for(int i=0;i<j;i++){
        printf("%d ",arr3[i]);
    }
    for(int i=0;i<n;i++){
        int a=bit1[i]-'0';
        int b=bit2[i]-'0';
        int c=a&b;
        char d=c+'0';
        bit4[i]=d;
    }
    j=0;
    for(int i=0;i<n;i++){
        if(bit4[i]=='1'){
            arr4[j]=arr[i];
            j++;
        }
    }
    printf("\nBitstring for Bitstring 1 ∩ Bitsring 2: %s",bit4);
    printf("\nCorresponding set for Bitstring 1 ∩ Bitsring 2: ");
    for(int i=0;i<j;i++){
        printf("%d ",arr4[i]);
    }
}