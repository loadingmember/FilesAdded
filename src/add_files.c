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
    } else if(strcmp(command, "fa newrepo") == 0) {

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
        }
    }
}

int main() {

}
