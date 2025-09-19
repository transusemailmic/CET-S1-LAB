//Hashing using open Hashing

#include <stdio.h>
#define MAX 10
int hash_cvt(int n){
    return n%MAX;
}
void main(){
    int hash[MAX];
    int arr[]={12, 18, 13, 2, 3, 23, 5, 15};
    for(int i=0;i<MAX;i++){
        hash[i]=-1;
    }
    for(int i=0;i<8;i++){
        int key=hash_cvt(arr[i]);
        if(hash[key]==-1)
            hash[key]=arr[i];
        else{
            int probe=1;
            while(1){
                if(hash[(key+probe)%MAX]==-1){
                    hash[(key+probe)%MAX]=arr[i];
                    break;
                }
                probe++;
            }
        }
    }
    for(int i=0;i<MAX;i++){
        printf("%d ",hash[i]);
    }
}