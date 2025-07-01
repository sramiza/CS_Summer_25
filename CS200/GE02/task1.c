#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 5

char* build_string() {
    //Implement this function
}





//---------------------------------------------- TEST CASES - DO NOT EDIT ----------------------------------------------------

int run_test(const char* filename, const char* sol) {
    freopen(filename, "r", stdin);

    char* str = build_string();

    printf("\n\nFinal string: %s\n", str);

    if(!strcmp(str, sol)){
        printf("\n\033[0;32mPassed 3/3\033[0m\n\n");
        
    }
    else{
        free(str);
        printf("\n\033[0;31mFailed 0/3\033[0m\n\n");
        return 0;
    }

    free(str);
    return 3;
}

void tests(){
    printf("\033[1m\033[36m\nTesting Build String:\033[0m\n\n");
    int total = 0;

    printf("\033[35mBasic Manual Test:\033[0m\n\n");
    char* str = build_string();
    printf("Final string: %s\n\n", str);

    printf("\033[35mAuto Test 1:\033[0m\n\n");
    total += run_test("task1_test/test1.txt", "Hello World");

    printf("\033[35mAuto Test 2:\033[0m\n\n");
    total += run_test("task1_test/test2.txt", "abcdefghij");

    printf("\033[35mAuto Test 3:\033[0m\n\n");
    total += run_test("task1_test/test3.txt", "cs200");

    printf("\033[35mAuto Test 4:\033[0m\n\n");
    total += run_test("task1_test/test4.txt", "");

    printf("\n\n\033[1m\033[35mTotal: ");
    if(total == 12){
        printf("\033[0;32m%d/%d\033[0m\n\n", total, 12);
    }
    else{
        printf("\033[0;31m%d/%d\033[0m\n\n", total, 12);
    }
}

int main() {
    tests();
    return 0;
}