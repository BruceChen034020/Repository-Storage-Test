#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int i;
    for(i=4; i<70; i++){
        char fileName[20];
        sprintf(fileName, "b%d.txt", i);
        printf("fsutil file createnew %s %d\n", fileName, 100000000+i);
        FILE* A = fopen(fileName, "w");
        int j;
        for(j=0; j<100000000+i; j++){
            char r = rand(); // �ýX�����j�㯫�\~
            fprintf(A, "%c", r);
        }
        fclose(A);
    }
}
