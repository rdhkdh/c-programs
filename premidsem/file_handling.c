#include<stdio.h>
int main()
{
    FILE *fp; //assigning a file pointer.
    fp=fopen("file_data.txt","r"); /*character in single quotes, string in double quotes.
    But here it's a string, because modes such as a+,w+ are also there, which are of more than 1 character.*/
    while(1)
    {
        char ch= fgetc(fp);
        if (ch==EOF) {break;}
        else { printf("%c",ch); }

    }
    fclose(fp);

    // code for obtaining input from user and writing it into the file.
    printf("\nEnter text (upto 50 characters) of your choice. This will be stored in the file- 'file_data.txt' :\n");
    char txt[50];
    fgets(txt, 50, stdin);
    FILE *fp2;
    fp2=fopen("D:\\Ridhiman IITG\\career resources\\c programs\\newfile.txt","a+"); //use double backslash to escape the special meaning of \.
    fprintf(fp2,"%s",txt);
    fclose(fp2);
    printf("\nNow check that 'newfile.txt' has been modified. The old text has been appended with your entered text.\n");
    /*If you want the text to just add onto the previous one, use append mode.*/
}