#include <stdio.h>

int main(){

    // we can define the contents of the array here
    int nums[3] = {0, 2, 3};
    printf("%d\n", nums[2]);

    // and can reassign elements
    nums[2] = 4;
    printf("%d\n", nums[2]);

    return 0;

}