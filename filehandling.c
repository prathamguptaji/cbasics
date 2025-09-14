#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int words = 0, inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (!fp) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Word count = %d\n", words);
    fclose(fp);
    return 0;
}
