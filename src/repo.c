#include "add_files.h"
#include "branch.h"
#include "shell.h"

#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

void help() {
    printf("Use: fa nrepo <reponame>\n");
    printf("Desc: Create's a new repository\n");
    printf("Use fa drepo <reponame>\n");
    printf("Desc: Delete's a repository\n");
}

void do_delete_repo() {
    char fa_dir = (char *) malloc(sizeof(fa_dir));
    
    if(strcmp(fa_dir, "") == 0) {
        printf("Deleting Repository(s)\n");
        sleep(2);
        printf("Done\n");
    } else {
        printf("Not a FilesAdded Directory");
    }
}

void do_new_repo() {
    
    printf("Enter a name for the new repo: ");
        scanf("%s", reponame);

        printf("Enter the programming language for your repo (this can be changed later): ");
        scanf("%s", proglang);

        if(strcmp(proglang, "c") == 0 || strcmp(proglang, "C") == 0) {
            printf("Creating Repostitory under %s\n", reponame);
            printf("%s with a language of %s\n", reponame, proglang);
            printf("Repo code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        } else if(strcmp(proglang, "c++") == 0 || strcmp(proglang, "C++") == 0) {
            printf("Creating Repostitory under %s\n", reponame);
            printf("%s with a langauge of %s\n", reponame, proglang);
            printf("Repo code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        } else if(strcmp(proglang, "Java") == 0 || stcmp(proglang, "java") == 0) {
            printf("Creating Repostitory under %s\n", reponame);
            printf("%s with a langauge of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        } else if(strcmp(proglang, "Python") == 0 || strcmp(proglang, "python") == 0) {
            printf("Creating Repostitory under %s\n", reponame);
            printf("%s with a langauge of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        } else if(strcmp(proglang, "ruby") == 0 || strcmp(proglang, "Ruby") == 0) {
            printf("Creating a Repository under %s\n", reponame);
            printf("%s with a language of %s", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000");
        } else if(strcmp(proglang, "JavaScript") == 0 || strcmp(proglang, "javascript") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a langauge of %s", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000");
        } else if(strmcp(proglang, "C#") == 0 || strcmp(proglang, "c#") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a langauge of %s", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000");
        } else if(strcmp(proglang, "Shell") == 0 || strcmp(proglang, "shell") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a language of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        } else if(strcmp(proglang, "PowerShell") == 0 || strcmp(proglang, "powershell") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a language of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000");
        } else if(strcmp(proglang, "HTML") == 0 || strcmp(proglang, "html") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a language of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000");
        } else if(strcmp(proglang, "CSS") == 0 || strcmp(proglang, "css") == 0) {
            printf("Creating Repository under %s\n", reponame);
            printf("%s with a language of %s\n", reponame, proglang);
            printf("Repo Code: %s\n", repoidcode);
            printf("Number of Files: 000\n");
        }
}

int main() {
    
    char *command = (char *) malloc(sizeof(command));
    char *proglang = (char *) malloc(sizeof(command));
    
    if(strcmp(command, "fa drepo") == 0) {
        do_delete_repo();
    } else if(strcmp(command, "fa nrepo") == 0) {
        do_new_repo()   
    }