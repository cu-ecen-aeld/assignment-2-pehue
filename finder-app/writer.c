#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    if (argc != 3) {
        fprintf(stderr, "Something is wrong with the parameters\n");
        exit(EXIT_FAILURE);
    }

    FILE * f = fopen(argv[1], "w");
    fprintf(f, "%s\n", argv[2]);
    fclose(f);

    return 0;
}

