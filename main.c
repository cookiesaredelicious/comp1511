//
//  main.c
//  print_grid02.c
//
//  Created by Jimmy Yau (z5644038) on 9/3/2025.
//

#include <stdio.h>

int main(void){
    
    int n;
    
    printf("Enter size: ");
    scanf("%d",&n);
    
    int column = 0;
    
    while (column <= n) {
        
        int row = 0;
        
        while (row <= n){
            
            printf("(%d,%d)", column, row);
            row++;
            
        }
        
        printf("\n");
        column++;
    }
    
    
    return 0;
}
