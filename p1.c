#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
char name[50],read[50];
char url[100],song[20];
int in,t=1,game;
while(t!=2){
    printf("Hello!! Welcome My name is JARVIS and what's your name?");
    scanf("%s",name);
    printf("Hello %s , What whould you like to do today? \n",name);
    printf("Oh and don't forget to be connected to the internet \n");
    printf("Need help !! Here is what you can do \n");
    printf("1)A quick fact check /n2)Play a game \n3)Read about something \n4)Play some song \n5)Simply chat \n6)Exit \n");
    scanf("%d",&in);
    if(in==1){
                    printf("this is not done");
                }
    else if(in==2){
            printf("What game would you like to play?");
            printf(" 1)Snake game \n2)Tic Tac Toe");
            scanf("%d",&game);
            if(game==1)
                    system("cmd /c start https://www.google.co.in/search?source=hp&ei=HD-lXIuFEI7Wz7sP_4660A4&q=snake+game&btnK=Google+Search&oq=snake+game&gs_l=psy-ab.3..0l5j0i131j0l4.4936.9958..10374...1.0..0.186.1888.0j11......0....1..gws-wiz.....0..0i10.J2_yEt0YSm0/");
            else if (game==2)
                    system("cmd /c start https://www.google.co.in/search?ei=Jz-lXNCXM9GcmgeciqSwBg&q=tic+tac+toe&oq=tic+tack&gs_l=psy-ab.1.0.0i67j0i10l5j0i67j0i10l3.144487.148715..150031...0.0..0.211.2383.0j10j3......0....1..gws-wiz.....0..0i71j0j0i131j0i131i67.P8v725Vrjq8/");
                    }
            else if (in==3){
            printf("What would You like to read about");
            scanf("%s",read);
            strcpy(url,"https://en.wikipedia.org/wiki/");
            strcat(url,read);
            system ("cmd /c start url/");
                        }
    else if (in==4){
            printf("What song whould you like to hear?");
            scanf("%s",song);
            strcpy(url,"https://www.youtube.com/results?search_query=");
            strcat(url,song);
            system("cmd /c start url/");
                    }
    else if (in==5){

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
