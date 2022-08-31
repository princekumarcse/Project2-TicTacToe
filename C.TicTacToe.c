#include <stdio.h>
#include <conio.h>
void printBoard();
void printBoardCom();
int checkWin();
void system();

char board[]={'0','1','2','3','4','5','6','7','8','9'};
//Main Function
int main()
{
    int choice,player=1,input,status=-1,prince=1,num;
    printf("\n\n\n\n");
    printf("\t    ****Wel-Come****\n\n");
    printf("\tENTER YOUR CHOICE TO PLAY\n\n\t   ****TIC-TAC-TOE****\n\n");
    printf("\tENTER 1. TO PLAY WITH COMPUTER:\n");
    printf("\tENTER 2. TO PLAY WITH FRIEND:\n");
    printf("\tENTER 3. TO EXIT THE GAME:\n\n");
     printf("\t   #*****************#\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1://it is for Computer vs player

        printBoardCom();

        while (status==-1)
    {
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        if(player==1)
        {
            printf("\nPrince It's your tern,ENTER NUMBER : ");
            scanf("%d",&input);
        }
        else
        {
          if(input==1)
          {
              input=9;
          }
          if(input==2)
          {
              input=8;
          }
          if(input==5)
          {
              input=7;
          }
          if(input==4)
          {
              input=5;
          }
          if(input==5)
          {
              input=6;
          }
          if(input==7)
          {
              input=4;
          }
          if(input==6)
          {
              input=7;
          }
          if(input==9)
          {
              input=1;
          }
          if(input==8)
          {
              input=2;
          }
        }


    if(input<1 || input>9){
        printf("invalid input");
    }

    board[input]=mark;
    printBoardCom();

    int result=checkWin();

    if(result==1){
            if(player==1){
        printf("\t***CONGRATULATIONS !***\n\n\t PRINCE WON THE MATCH\n\n");
         return;
            }
            else
            {
             printf("\t\n\n\t YOU LOST THE MATCH\n\n");
              return;
            }

    }else if(result==0){
        printf("DRAW PLAY AGAIN");
        return;
    }

    player++;
    }
        break;//TERMINATION POINT OF CASE 1 WHICH IS COMPUTER VS PLAYER

    case 2://player vs friend

        printBoard();
        break;//TERMINATION POINT OF CASE 1 WHICH IS  PLAYER VS FRIEND
    case 3:

        printf("\t   SEE YOU NEXT TIME \n\n\t    HAVE A NICE DAY!\n\n");

        exit(0);//TO END THE GAME

    default:
        printf("\tPLEASE ENTER VALID CHOICE");//FOR INVALID ENTERED NUMBER

        break;
    }
    //CONDITION FOR PLAYER VS FRIEND

        while (status==-1)
    {
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        if(player==1)
        {
            printf("HEY ! PRINCE It's YOUR TERM,ENTER NUMBER : ");
            scanf("%d",&input);
        }
        else
        {
           printf("SIR !  It's YOUR TERM,PLEASE ENTER NUMBER : ");
            scanf("%d",&input);
        }


    if(input<1 || input>9){
        printf("invalid input");
    }

    board[input]=mark;
    printBoard();

    int result=checkWin();

    if(result==1){
            if(player==1){
        printf("\t***CONGRATULATIONS !***\n\n\t PRINCE WON THE MATCH\n\n");
         return;
            }
            else
            {
             printf("\t***CONGRATULATIONS !***\n\n\t MySirG WON THE MATCH\n\n");
              return;
            }

    }else if(result==0){
        printf("DRAW PLAY AGAIN");
        return;
    }

    player++;
    }
    return 0;
}
//Number board for "PLAYER vs FRIEND"
void printBoard(){
    system("cls");
    printf("\n\n");
    printf("\t *****WELCOME****\n\t*** TIC TAC TOE ***\n\n");
    printf("\t  PLAYER VS FRIEND\n\n");
    printf("( X ) FOR Prince  : ( 0 ) FOR MySirG :\n\n\n");
   printf("\t*******************\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[1],board[2],board[3]);
    printf("\t*_____|_____|_____*\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[4],board[5],board[6]);
    printf("\t*_____|_____|_____*\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[7],board[8],board[9]);
    printf("\t*     |     |     *\n");
    printf("\t*******************\n");
    printf("\n");
}
//WINNER CONDITION CHECH
int checkWin(){

    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }

    int count=0;
    for (int i = 1; i <=9; i++)
    {
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }

    if(count==9){
        return 0;
    }
    return -1;
}
//FOR COMPUTER VS PLAYER
void printBoardCom(){
    system("cls");
    printf("\n\n");
    printf("\t *****WELCOME****\n\t*** TIC TAC TOE ***\n\n");
    printf("\t  PLAYER VS COMPUTER\n\n");
    printf("( X ) FOR PRINCE : ( 0 ) FOR COMPUTER JEE:\n\n");
    printf("\t*******************\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[1],board[2],board[3]);
    printf("\t*_____|_____|_____*\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[4],board[5],board[6]);
    printf("\t*_____|_____|_____*\n");
    printf("\t*     |     |     *\n");
    printf("\t*  %c  |  %c  |  %c  *\n",board[7],board[8],board[9]);
    printf("\t*     |     |     *\n");
    printf("\t*******************\n");
    printf("\n");
}

