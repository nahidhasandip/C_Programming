// You need to write a program that creates a text file, writes a fixed message into it, then reads the message back from the same file and prints it on the screen. The message that must be written to the file is: "End of the c programming." After writing the message, the program must close the file, reopen it for reading, read the text, and print it exactly as stored.
// Input: There is no input for this problem.
// Output: Your program must print two lines: A confirmation message after writing to the file: Text written to file successfully. The content read from the file in this format Content of file: 'End of the c programming.'

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");  
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    fputs("End of the c programming.", fp);
    printf("Text written to file successfully.\n");
    fclose(fp);

    fp = fopen("output.txt", "r");  
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    fgets(text, sizeof(text), fp);
    printf("Content of file: %s\n", text);
    fclose(fp);

    return 0;
}
