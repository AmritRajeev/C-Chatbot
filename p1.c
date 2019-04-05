#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void main()
{
char name[50],read[50];
char url[100],song[20];
int in,t=1,game;
printf("Hello!! Welcome My name is COORI and what's your name?");
scanf("%s",name);
printf("Hello %s , What would you like to do today? \n",name);
printf("Oh and don't forget to be connected to the internet \n");
printf("Need help !! Here is what you can do \n");
while(t!=2){
    printf("1) A quick fact check \n2)Play a game \n3)Read about something \n4)Play some song \n5)Simply chat \n6)Exit \n");
    scanf("%d",&in);
    if(in==1){
        FILE *fp=fopen("facts.txt","r");
        if(fp==NULL){ printf("error"); exit(1);}
        char line[500];
        char question[700]="Who is the youtuber with the most number of subscribers?\n";
        //printf("enter the question with question marks \n");
        //scanf("%[^\n]s",question);
        //strcat(question,"\n");
        while ((fgets(line,500,fp))!=NULL){
            if (strcmp(question,line)==0)
                {
                fgets(line,500,fp);
                printf("%s",line);
                }
                     fclose(fp);   }
                }
    else if(in==2){
            printf("What game would you like to play? \n");
            printf("1)Snake game \n2)Tic Tac Toe");
            scanf("%d",&game);
            if(game==1)
                    system("cmd /c start https://www.google.com/search?source=hp&ei=W3qEXPzjAuDdz7sPs-6o0Ag&q=snake+game&oq=snake+&gs_l=psy-ab.1.1.0l10.185.3316..4988...1.0..0.240.1270.0j4j3......0....1..gws-wiz.....0..0i131.FFQuMhYT-DA/");
            else if (game==2)
                    system("cmd /c start https://www.google.com/search?source=hp&ei=iHmEXJOJIOTaz7sP8t2aiA8&q=tic+tac+toe&oq=tic+t&gs_l=psy-ab.1.1.0l2j0i131j0l2j0i10j0l2j0i10j0.386.5357..8138...0.0..0.172.1161.0j7......0....1..gws-wiz.....0..0i7i30.UnKMPDxIcoA/");
                    }
    else if (in==3){
            printf("What would You like to read about \n");
            scanf("%s",read);
            strcpy(url,"https://en.wikipedia.org/wiki/");
            strcat(url,read);
            char cmd[100] = "cmd /c start ";
            strcat(cmd, url);
            system(cmd);
                        }
    else if (in==4){
            printf("What song whould you like to hear?");
            scanf("%s",song);
            strcpy(url,"https://www.youtube.com/results?search_query=");
            strcat(url,song);
            char cmd[100] = "cmd /c start ";
            strcat(cmd, url);
            system(cmd);
                    }
    else if (in==5){
        FILE *fp=fopen("questions.txt","r");
        char line[500];
        char question[700];
        printf("enter the convo with question marks \n");
        gets(question);
        strcat(question,'\n');
        while (fgets(line,500,fp)!=NULL){
            if (strcmp(question,line)==0)
                {
                fgets(line,500,fp);
                printf("%s",line);break;
                }

                        }
                    }
    else
           { printf("Thank you for your time!!Hope you have a nice day !!");
            printf("Please come again");
            t=2;
           }
}
}
