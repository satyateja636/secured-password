#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char password[200];
    int a=1;
    while(a<2)
        {
                int x=4,i=0,pw;
                int lc=0,uc=0,num=0,sym=0;

                scanf("%s",password);
                pw=strlen(password);
                if(pw>=8){
                i=0;
                while(i<pw)
                {
                        if(islower(password[i]))
                        {
                            x--;
                            lc++;
                            break;
                        }
                        i++;
                }
                i=0;
                while(i<pw)
                {
                    if(isupper(password[i])){
                            x--;
                            uc++;
                            break;
                    }
                    i++;
                }
                i=0;
                while(i<pw)
                {
                    if(isdigit(password[i]))
                    {
                        x--;
                        num++;
                        break;
                    }
                    i++;
                }
                i=0;
                while(i<pw)
                {
                    if(isalpha(password[i])){}else if(isdigit(password[i])){}
                    else
                    {
                        x--;
                        sym++;
                        break;
                    }
                    i++;
                }
                if(x==0)
                {
                    printf("your password is secured\n");
                }
                else
                {
                    printf("your password is not secured\n Try Again!\n");
                     a--;
                     if(lc==0)
                        printf("please use the lowercase\n");
                     if(uc==0)
                        printf("please use uppercase\n");
                     if(num==0)
                        printf("please use number\n");
                     if(sym==0)
                        printf("please use special character\n");

                }
                }
                else
                {
                  a--;
                    printf("\npassword length should be atleast 8 characters\n");
                }
                    a++;
}
    return 0;
}
