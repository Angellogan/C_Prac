#include <stdio.h>
// //home//CV_CPP_prac//projects_folder//File_IO_C//text_file.txt
int main()
{
    char str[100];

    char str1[50];
    FILE *fp = NULL;

//    fgets(str,20,stdin);
//    puts(str);

    fp = fopen("..//TextData//newfile.txt","w+");

    if(fp ==NULL)
    {

        perror("file opening error");
    }
    else
    {

        fprintf(fp,"%s %s %s","Welcome \\0","to ","world");
        fprintf(fp,"%s %s %s","File Handling","testing ","majorly");
        fprintf(fp,"%s %s %s","Family of ","string ","reading");
        fprintf(fp,"%s %s %s","nullbyte \\0","is ","read");


    }
    fclose(fp);

    fp =fopen("..//TextData//newfile.txt","r");
    while(fgets(str,100,fp))
    {

        puts(str);

    }




    fclose(fp);





    return 0;
}
