//
//  myfilelib.c
//  TestsCurseur
//
//  Created by Eric Bjarstal on 14/02/2023.
//

#include "myfilelib.h"

// reads file and prints it line by line
void printFile(const char file_path[]) {
    
    FILE *file = NULL;  // initialize pointer to file
    file = fopen(file_path, "r");
    char line[MAX_SIZE] = "";
    
    if (file != NULL) {
        while (fgets(line, MAX_SIZE, file) != NULL) {  // while end of file not reached, print line
            printf("%s", line);
        }
        printf("\n");
        fclose(file);
    }
    else {
        printf("File could not be opened.\n");
    }
    
}
