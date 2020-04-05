#include "stdio.h"

int main()

 
{
    int L[10],temp,i,j,n=10;
    printf("enter:");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Insertion sort \nmasukkan %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum sorting: ");

    for(i=0;i<n;i++){printf("%d ",L[i]);}

    for(i=1;i<n;i++){

 
    /*5 7 3 1 ===> 5 7 3 1, (5 7 7 1, 5 5 7 1, 3 5 7 1), (3 5 7 7, 3 5 5 7, 3 3 5 7, 1 3 5 7)*/
        temp=L[i];
        j=i-1;
        while((temp<L[j])&&(j>=0)){
            L[j+1]=L[j];
            j=j-1;
        }
        L[j+1]=temp;
    }

    printf("\nsetelah sorting: ");
    for(i=0;i<n;i++){printf("%d ",L[i]);}
    printf("\n");
}
