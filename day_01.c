
#include <stdio.h>
/*I am a comment*/
int main(){
    /*output*/
    printf("Hello world\n");
    printf("Answer %d\n", 42);
    printf("Name %s\n", "Sarah");
    printf("x %.1f i %d\n", 3.5, 100);

    /*Number input*/
    int usf, euf;
    printf("Enter us floor\n");
    scanf("%d", &usf);
    euf = usf-1;
    printf("EU Floor %d\n", euf);

    /*String input*/
    char name [100];
    printf("Enter name\n");
    scanf("%100s", name);
    printf("Hello %s\n", name);

    /*line input*/
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line : %s\n", line);

    /*reading a file*/
    char line1[1000];
    FILE *hand;
    hand = fopen("romeo.txt", "r");
    while(fgets(line1, 1000, hand) != NULL){
        printf("%s", line1);
    }    


}