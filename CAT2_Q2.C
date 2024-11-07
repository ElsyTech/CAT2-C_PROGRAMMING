//C Structures 2 D array
/*
Name: elossy
Reg no:CT101/G/21429/24
*/

#include<stdio.h>

int main() {
    int scores [2][2];
    int i,j;

    scores[0][0] = 65;
    scores[0][1] = 92;
    scores[1][0] = 84;
    scores[1][1] = 72;

    for (i = 0; i <2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");   
    }
    scores[0][0] = 35;
    scores[0][1] = 70;
    scores[1][0] = 59;
    scores[1][1] = 67;

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
         printf("\n");
    }
	return 0;
 
}