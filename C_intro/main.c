#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char line[1000];
    if (argc != 3) {
        printf("print login as first command line argument and full file name as second\n");
        return 0;
    }
    FILE* file = fopen(argv[2], "r");
    if (file == NULL) {
        printf("error on opening file\n");
        return 1;
    }
    while (!feof(file)) {
        fgets(line, 1000, file);
        char* line_login = strtok(line, ":,");
        if (0 == strcmp(argv[1], line_login)) {
            char* username;
            for (int i = 0; i < 4; i += 1) {
                username = strtok(NULL, ":,");
            }
            printf("username: %s\n", username);
            return 0;
        }
    }
    fclose(file);
    printf("login not found\n");
    return 0;
}
