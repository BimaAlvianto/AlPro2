#include <stdio.h>
using namespace std;

int main()
{
    int L[10],temp,i,j,n;
    printf("enter:");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Bublle sort \nmasukkan %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}


 
    printf("\nsebelum sorting: ");

    for(i=0;i<n;i++){printf("%d ",L[i]);}

    for(i=n-2;i>=0;i--){
    /*5 3 1 2 ===> 3 5 1 2, 3 1 5 2, 3 1 2 5 // 1 3 2 5, 1 2 3 5 // 1 2 3 5*/
        for(j=0;j<=i;j++){
            if(L[j]>L[j+1]){
                temp=L[j];
                L[j]=L[j+1];
                L[j+1]=temp;
            }
        }
    }
    printf("\nsetelah sorting: ");
    for(i=0;i<n;i++){printf("%d ",L[i]);}
    printf("\n");
}
