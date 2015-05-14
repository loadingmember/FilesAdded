#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "shell.h"
#include "branch.h"
#include "add_files.h"

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

	if(add_files()) {
		add_files();
	} else if(help()) {
		help();
	}
}