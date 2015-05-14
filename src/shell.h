//
// Created by Steven Zaluk on 5/14/15.
//

#ifndef FILESADDED_COMMANDS_H
#define FILESADDED_COMMANDS_H

#endif //FILESADDED_COMMANDS_H

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
}
