#include<stdio.h>

int main() {
    int i;
    
//    for (i = 1; i <= 1000; i++)
//    	{
//    		if (i % 10 == 0){
//    			printf("%d ", i);
//			}
//		}
    do {
    	if(i % 10 == 0)
    	{
    		printf("%d ", i);
		}
		i++;
	
	}	while(i <= 1000);
//    while(i <= 1000) {
//    	if(i % 10 == 0)
//    	{
//    		printf("%d ", i);
//		}
//		i++;
//	} 
    return 0;
}
