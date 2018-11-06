// cracks a hashed consisting of a max of 5 charcaters with no numbers or symbols password
#define _XOPEN_SOURCE
#include <unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(int argc , string argv[])
{
    string content = argv[argc-1];
    if(argc != 2 || strlen(content) != 13)
    {
        printf("Usage: ./crack hash\n");
    }
    else
    {
        int i,j,n,m,k;
        int count = 0;
        char alpha[]="// cracks a hashed password
#define _XOPEN_SOURCE
#include <unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(int argc , string argv[])
{
    string content = argv[argc-1];
    if(argc != 2 || strlen(content) != 13)
    {
        printf("Usage: ./crack hash\n");
    }
    else
    {
        int i,j,n,m,k;
        int count = 0;
        char alpha[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()-_+=/|";
        char guess[6];
        char salt[3];
        salt[0] = content[0];
        salt[1] = content[1];
        salt[2] = '\0';
        string pass;
// guess 1 char
        for(i=0 ; i<(26+26+25);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            guess[1] = '\0';
            pass = crypt(guess,salt);
            if (strcmp(pass,content) == 0)
            {
                printf("Password:%s\n",guess);
                count = 1;
                break;
            }
        }
//guess 2 char
        for(i=0 ; i<(26+26+25);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26+25);j++)
            {
                guess[1] = alpha[j];
                guess[2] = '\0';
                pass = crypt(guess,salt);
                if (strcmp(pass,content) == 0)
                {
                    printf("Password:%s\n",guess);
                    count = 1;
                    break;
                }
            }
        }
//guess 3 char
        for(i=0 ; i<(26+26+25);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26+25);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26+25);n++)
                {
                    guess[2] = alpha[n];
                    guess[3] = '\0';
                    pass = crypt(guess,salt);
                    if (strcmp(pass,content) == 0)
                    {
                        printf("Password:%s\n",guess);
                        count = 1;
                        break;
                    }
                }
            }
        }
//guess 4 char
        for(i=0 ; i<(26+26+25);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26+25);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26+25);n++)
                {
                    guess[2] = alpha[n];
                    for(m=0;m<(26+26+25);m++)
                    {
                        guess[3] = alpha[m];
                        guess[4] = '\0';
                        pass = crypt(guess,salt);
                        if (strcmp(pass,content) == 0)
                        {
                            printf("Password:%s\n",guess);
                            count = 1;
                            break;
                        }
                    }
                }
            }
        }
//guess 5 char
        for(i=0 ; i<(26+26+25);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26+25);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26+25);n++)
                {
                    guess[2] = alpha[n];
                    for(m=0;m<(26+26+25);m++)
                    {
                        guess[3] = alpha[m];
                        for(k=0;k<(26+26+25);k++)
                        {
                            guess[4] = alpha[k];
                            guess[5] = '\0';
                            pass = crypt(guess,salt);
                            if (strcmp(pass,content) == 0)
                            {
                                printf("Password:%s\n",guess);
                                count = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

}
";
        char guess[6];
        char salt[3];
        salt[0] = content[0];
        salt[1] = content[1];
        salt[2] = '\0';
        string pass;
// guess 1 char
        for(i=0 ; i<(26+26);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            guess[1] = '\0';
            pass = crypt(guess,salt);
            if (strcmp(pass,content) == 0)
            {
                printf("%s\n",guess);
                count = 1;
                break;
            }
        }
//guess 2 char
        for(i=0 ; i<(26+26);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26);j++)
            {
                guess[1] = alpha[j];
                guess[2] = '\0';
                pass = crypt(guess,salt);
                if (strcmp(pass,content) == 0)
                {
                    printf("%s\n",guess);
                    count = 1;
                    break;
                }
            }
        }
//guess 3 char
        for(i=0 ; i<(26+26);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26);n++)
                {
                    guess[2] = alpha[n];
                    guess[3] = '\0';
                    pass = crypt(guess,salt);
                    if (strcmp(pass,content) == 0)
                    {
                        printf("%s\n",guess);
                        count = 1;
                        break;
                    }
                }
            }
        }
//guess 4 char
        for(i=0 ; i<(26+26);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26);n++)
                {
                    guess[2] = alpha[n];
                    for(m=0;m<(26+26);m++)
                    {
                        guess[3] = alpha[m];
                        guess[4] = '\0';
                        pass = crypt(guess,salt);
                        if (strcmp(pass,content) == 0)
                        {
                            printf("%s\n",guess);
                            count = 1;
                            break;
                        }
                    }
                }
            }
        }
//guess 5 char
        for(i=0 ; i<(26+26);i++)
        {
            if(count == 1 )
            {
                break;
            }
            guess[0] = alpha[i];
            for(j=0 ; j<(26+26);j++)
            {
                guess[1] = alpha[j];
                for(n=0;n<(26+26);n++)
                {
                    guess[2] = alpha[n];
                    for(m=0;m<(26+26);m++)
                    {
                        guess[3] = alpha[m];
                        for(k=0;k<(26+26);k++)
                        {
                            guess[4] = alpha[k];
                            guess[5] = '\0';
                            pass = crypt(guess,salt);
                            if (strcmp(pass,content) == 0)
                            {
                                printf("%s\n",guess);
                                count = 1;
                                break;
                            }

                        }
                    }
                }
            }
        }
    }

}
