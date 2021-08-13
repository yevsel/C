#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Creating the board for the game
char board[9]={'-','-','-','-','-','-','-','-','-'};

//Player character
char turn='X';

//Game engine
bool running = true;

//Function for viewing the board
void platform(){
    cout<<endl;
    cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<endl;
    cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<endl;
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<endl;
    cout<<endl;
}
//Checking for winner
void checkWinner(){
    if ((board[0]=='X'&&board[1]=='X'&&board[2]=='X')||(board[0]=='O'&&board[1]=='O'&&board[2]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[3]=='X'&&board[4]=='X'&&board[5]=='X')||(board[3]=='O'&&board[4]=='O'&&board[5]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[6]=='X'&&board[7]=='X'&&board[8]=='X')||(board[6]=='O'&&board[7]=='O'&&board[8]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[0]=='X'&&board[3]=='X'&&board[6]=='X')||(board[0]=='O'&&board[3]=='O'&&board[6]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[1]=='X'&&board[4]=='X'&&board[7]=='X')||(board[1]=='O'&&board[4]=='O'&&board[7]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[2]=='X'&&board[5]=='X'&&board[8]=='X')||(board[2]=='O'&&board[5]=='O'&&board[8]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[0]=='X'&&board[4]=='X'&&board[8]=='X')||(board[0]=='O'&&board[4]=='O'&&board[8]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    else if((board[2]=='X'&&board[4]=='X'&&board[6]=='X')||(board[2]=='O'&&board[4]=='O'&&board[6]=='O')){
        running=false;
        if (turn=='O'){
            cout<<" Congratulations You WON!";
        }
        else{
            cout<<"PC WON";
        }
    }
    //Check if no one won
    else if((board[0]!='-')&&(board[1]!='-')&&(board[2]!='-')&&(board[3]!='-')&&(board[4]!='-')&&(board[5]!='-')&&(board[6]!='-')&&(board[7]!='-')&&(board[8]!='-')){
        running=false;
        cout<<"NO WINNER";
    }
}

//Swith player
void changePlayer(){
    if (turn=='O'){
        turn='X';
    }
    else{
        turn='O';
    }
}

int main(){
    //Introduction
    cout<<"==== W E L C O M E ===="<<endl;
    cout<<endl;
    platform();
    
    //This stores your move thus between 1 and 9
    int move;

    //Games starts here
    while(running){
        changePlayer();
        cout<<" "<<turn<<" Make a move[1-9]: ";cin>>move;
        
        // Preventing overriding
        while(board[move-1]=='X' || board[move-1]=='O'){
            cout<<" Try again: ";cin>>move;
        }

        // Inserting move into board
        board[move-1]=turn;

        //Checking for winner
        checkWinner();

        //Stopping the game
        if (running==false){
            platform();
            break;
        }

        //PC makes it move by selecting a number between 1 and 9, it also includes a system to prevent overriding
        changePlayer();
        int pc;
        srand(time(0));
        pc=1+(rand()%9);

        //Preventing PC overriding
        while(board[pc-1]=='X' || board[pc-1]=='O'){
            srand(time(0));
            pc=1+(rand()%9);
        }

        //Inserting PC move into board
        board[pc-1]=turn;
        platform();

        //Checking for winner
        checkWinner();

        //Stopping the game
        if (running==false){
            platform();
            break;
        }
    }

    system("pause>0");
    return 0;
}
