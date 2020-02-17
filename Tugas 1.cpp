#include<stdio.h>
int main(){
	int ah, be, numb, search, flag;
	
	// Input for list array length
	scanf("%d", &numb);
	// Use if to set the minimum and maximum value
	if(numb < 5 || numb > 100){
		printf("[ERROR]Value melebihi batas");
	}else{
	int list[numb];	// make array for list number
	// Input list array values	
	for (ah=1;ah<=numb;ah++){
		scanf("%d", &list[ah]);
	}
	
	// Input searched array length
	scanf("%d", &search);
	int find[search]; // make array for searched number	
	// Input searched array values
	for (be=1;be<=search;be++){
		scanf("%d", &find[be]);
	}
	
	// Result
	
	// Looping the searched array
	for (be=1;be<=search;be++){
		// Looping the list array
		for(ah=1;ah<=numb;ah++){
			if(find[be]==list[ah]){
				flag=1; // change the value into 1 after finding the number
				break; // stop the looping if found the number
			}else{
				flag=0; // change the value into 0 if not finding the number
			}
		}
		// Output based on flag
		if(flag==1){
			printf("Ditemukan\n");
		}else{
			printf("Tidak Ditemukan\n");
		}
	}
	}
	return 0;
}
