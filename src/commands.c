#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number_files;
char *reponame = (char *) malloc(sizeof(reponame));
char *proglang = (char *) malloc(sizeof(proglang));
char *directory = (char *) malloc(sizeof(directory));
char *branch_name = (char *) malloc(sizeof(branch_name));
char repoidcode = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghikjklmnopqrstuvwxyz1234567890' + (random() % 26);

int main() {

	printf("Welcome to the FileAdded Command Line Application\n");

	char *command = (char *) malloc(sizeof(command));

	printf("FilesAdded $: ");

	scanf("%s", command);

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
			printf("%s with a language of %s")
		}
	}
}