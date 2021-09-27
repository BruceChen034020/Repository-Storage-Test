/* Warning: Algorithm not optimized by coding; please use -O3 compiler.
Time complexity: O(N) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int i;
    for(i=70; i<90; i++){
        char fileName[20];
        sprintf(fileName, "b%d.txt", i);
        printf("fsutil file createnew %s %d\n", fileName, 100000000+i);
        FILE* A = fopen(fileName, "w");
        int j;
        for(j=0; j<100000000+i; j++){
            char r = rand(); // 亂碼之神大顯神功~
            fprintf(A, "%c", r); // Rate determining step
        }
        fclose(A);
    }
}
