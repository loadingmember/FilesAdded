//
// Created by Steven Zaluk on 5/14/15.
//

#include "branch.h"
#include "shell.h"

static int do_cbranch_command() {

    static char cbranch {
            "cbranch"
    };

    if(!cbranch || strcmp(cbranch, "cbranch") == 0) {
        printf("Change Branch to %s", branch_name);
    }
}

int main() {

    char *branch_name = (char *) malloc(sizeof(branch_name));

    if(!branch_name || strmcp(branch_name, branch_name)) {
        printf("Branch Name: %s", branch_name);
    }

}
