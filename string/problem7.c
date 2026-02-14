// #include <stdio.h>
// int main(){
//     char s[30];
//     scanf("%s",s);
//     int i=0;
//     int count=0;
//     while(s[i]!='\0'){
//         if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'){
//             count++;

//         }
//         i++;

//     }
//     printf("%d",count);

// }
#include <stdio.h>
int main(){
    char s[30];
    scanf("%s",s);
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'){
            count++;

        }
        i++;

    }
    printf("%d",count);

}