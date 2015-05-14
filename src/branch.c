#include "branch.h"
#include "shell.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help() {
    pritnf("Use: fa cbranch <branchname>\n");
    printf("Desc: Changes your branch\n");
    printf("Use: fa nbranch <branchname>\n");
    printf("Desc: Create's a new branch\n");
    printf("Use: fa pbranch <branchname>\n"0);
}

void load_branch() {
    
    char *branch_cont = (char *) malloc(sizeof(branch_cont));
    
    printf("%s", branch_cont);
    
}

static int do_pbranch_command() {
    static char pbranch {
        "pbranch"  
    };
    
    if(!pbranch && strcmp(fa_dir, "") == 0 || strcmp(pbranch, "prbranch") == 0 && strcmp(fa_dir, "") == 0) {
        load_branch();   
    }
}

static int do_nbranch_command() {
    
    char *new_branch_name = (char *) malloc(sizeof(new_branch_name));
    
    static char nbranch {
        "nbranch"   
    };
    
    if(!nbranch && strcmp(fa_dir, "") == 0 || strcmp(nbranch, "nbranch") == 0 && strcmp(fa_dir, "") == 0) {
        printf("Enter your branch name: %s", new_branch_name);
    } else {
        printf("ERROR: Not a FilesAdded directory\n");
    }
    
    free(fa_dir);
}

static int do_cbranch_command() {

    static char cbranch {
            "cbranch"
    };

    if(!cbranch || strcmp(cbranch, "cbranch") == 0) {
        printf("Change Branch to %s", branch_name);
        load_branch();
    }
}

int main() {

    char *branch_name = (char *) malloc(sizeof(branch_name));

    if(!branch_name || strmcp(branch_name, branch_name)) {
        printf("Branch Name: %s", branch_name);
    }
    
    free(branch_name);
}
