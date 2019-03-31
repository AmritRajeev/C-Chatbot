#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

void main()
{
char name[50],read[50];
char url[100],song[20];
int in,t=1,game;
label:
while(t!=2){
    printf("Hello!! Welcome My name is JARVIS and what's your name?");
    scanf("%s",&name);
    printf("Hello %s , What whould you like to do today? '/n'",name);
    printf("Oh and don't forget to be connected to the internet");
    printf("Need help !! Here is what you can do '\n'");
    printf("1) A quick fact check '/n' 2)Play a game '\n' 3)Read about something '\n'4)Play some song '\n'5)Simply chat '\n'6)Exit '\n'");
    scanf("%d",&in);
    if(in=='1'){
                    printf("thsi is not done");
                }
    else if(in=='2'){
            printf("What game would you like to play?");
            printf(" 1)Snake game 2)Tic Tac Toe");
            scanf("%d",&game);
            if(game=='1')
                    system("cmd /c start https://www.google.com/search?source=hp&ei=W3qEXPzjAuDdz7sPs-6o0Ag&q=snake+game&oq=snake+&gs_l=psy-ab.1.1.0l10.185.3316..4988...1.0..0.240.1270.0j4j3......0....1..gws-wiz.....0..0i131.FFQuMhYT-DA/");
            else if (game=='2')
                    system("cmd /c start https://www.google.com/search?source=hp&ei=iHmEXJOJIOTaz7sP8t2aiA8&q=tic+tac+toe&oq=tic+t&gs_l=psy-ab.1.1.0l2j0i131j0l2j0i10j0l2j0i10j0.386.5357..8138...0.0..0.172.1161.0j7......0....1..gws-wiz.....0..0i7i30.UnKMPDxIcoA/");

            else
                goto label;
                    }
    else if (in=='3'){
            printf("What would You like to read about");
            scanf("%s",&read);
            strcpy(url,"https://en.wikipedia.org/wiki/");
            strcat(url,read);
            system ("cmd /c start url/");
            goto label;
                        }
    else if (in=='4'){
            printf("What song whould you like to hear?");
            scanf("%s",&song);
            strcpy(url,"https://www.youtube.com/results?search_query=");
            strcat(url,song);
            system("cmd /c start url/");
            goto label;

                    }
    else if (in=='5'){

                        printf("This feature is not done");
                    }
    else {
            printf("Thank you for your time!!Hope you have a nice day !!");
            printf("Please come again");
            t=2;
            break;
         }
        }

}
