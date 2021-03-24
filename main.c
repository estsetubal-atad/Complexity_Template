#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Function containing some algorithm.
 * 
 * @param N [in] size of "instance"
 * @return int number of executed instructions
 */
int algorithm(int N);

int main() {

    int workSizes[] = {1, 5, 50, 500, 1000};

    printf("f(n) series to insert at http://www.alcula.com/calculators/statistics/scatter-plot/ : \n");
    for(int i = 0; i < sizeof(workSizes)/sizeof(int); i++) {
        int n = workSizes[i];

        int numberInstructions = algorithm(n);

        printf("%d, %d\n", n, numberInstructions);        
    }

    printf("\n");
    return EXIT_SUCCESS;
}

int algorithm(int N) {
    int instructions = 0;

    // change the "algorithm" here ---
    
    for(int i=0; i<=N; i++) 
        for(int j=0; j<=N/2; j++)
            instructions++;

    //---

    return instructions;
}
