#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeladder(int pos)
{
    //Ladder
    if(pos==1)
    return 38;
   
    else if(pos==4)
    return 14;
     else if(pos==8)
    return 30;
     else if(pos==21)
    return 42;
     else if(pos==28)
    return 76;
     else if(pos==50)
    return 67;
     else if(pos==71)
    return 92;
    else if(pos==80)
    return 99;
    // Snake
    else if(pos==97)
    return 78;
    else if(pos==95)
    return 56;
    else if(pos==88)
    return 24;
    else if(pos==62)
    return 18;
    else if(pos==48)
    return 26;
    else if(pos==36)
    return 6;
    else if(pos==32)
    return 10;
    
    
}

void playGame()
{
    int p1pos=0,p2pos=0,p3pos=0;
    int flag=1;
    while(p1pos<100 && p2pos<100 && p3pos<100)
    {
        
    
    int diceno=((int)rand()%6)+1;
    if(flag==1)
    {
        printf("player 1's turn\n");
        printf("rolled the dice with %d\n",diceno);
        if(p1pos+diceno<=100)
        {
            p1pos=p1pos+diceno;
            
        }
        p1pos=snakeladder(p1pos);
        printf("player1 moved to new position:%d\n",p1pos);
        flag=2;
    }
        else if(flag==2)
        {
             printf("player 2's turn\n");
        printf("rolled the dice with %d\n",diceno);
        if(p2pos+diceno<=100)
        {
            p2pos=p1pos+diceno;
            
        }
        printf(" player 2 moved to new position:%d\n",p2pos);
        flag=1;
        }
        else
        {
            printf("player 3's turn\n");
        printf("rolled the dice with %d\n",diceno);
        if(p3pos+diceno<=100)
        {
            p3pos=p1pos+diceno;
            
        }
        printf(" player 3 moved to new position:%d\n",p3pos);
        flag=1;
        }
            
        }
        
    }

int main()
{
    srand(time(0));
    printf("welcome to snake and ladder game");
    playGame();
    
    //printf("%d",((int)(rand()%6))+1);
    return 0;
    
}
