#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char ** argv) {
    openlog(NULL, 0, LOG_USER);

    if (argc != 3) {
        //fprintf(stderr, "Something is wrong with the parameters\n");
    	syslog(LOG_ERR, "Something is wrong with the parameters\n");
        exit(EXIT_FAILURE);
    }

    FILE * f = fopen(argv[1], "w");
    fprintf(f, "%s\n", argv[2]);
    syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
    fclose(f);

    return 0;
}

