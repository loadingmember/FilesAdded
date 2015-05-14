#include "add_files.h"
#include "branch.h"
#include "shell.h"

#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

void help() {
    char help_command = (char *) malloc(sizeof(help_command));

    if(strmcp(help_command, "help addfiles") == 0) {
        printf("Use: fa addfiles <files>");
        printf("Description: Adds files to repository");
    }
}

void add_files() {

    if(strcmp(command, "fa addfiles *") == 0) {
        printf("%c files added", number_files);
        printf("Type branch name: ");
        scanf("%s", branch_name);

        printf("Insertions, Deletions, and Re-named files are pushed up to %s", branch_name);
    }
}

int main() {

}
