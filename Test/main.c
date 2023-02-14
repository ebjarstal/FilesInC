//
//  main.c
//  TestsCurseur
//
//  Created by Eric Bjarstal on 13/02/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "myfilelib.h"

int main(int argc, const char * argv[]) {
    
    char file_path[MAX_SIZE] = "";
    printf("File path: ");
    scanf("%s", file_path);
    printFile(file_path);
    
    return 0;
}
