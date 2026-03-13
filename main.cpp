#include "include/ListManager.h"
#include <cstring>

int main(void){

    char command* = NULL;
    cListManager* doubly_list = new cListManager;
    while (1)
    {   
        printf("コマンドを入力してください\n->");
        command = doubly_list->command_input();

        if(strcmp(command, "push 英数字") == 0){
            doubly_list->push_fanction();
        }
        else if(strcmp(command, "pop") == 0){

        }
        else if((strcmp(command, "print") == 0) || (strcmp(command, "p") == 0)){

        }
        else if((strcmp(command, "clear") == 0) || (strcmp(command, "c") == 0)){

        }
        else if((strcmp(command, "help") == 0) || (strcmp(command, "h") == 0)){

        }
        else if(strcmp(command, "quit") == 0){
            delete doubly_list;
            return 0;
        }
        else if(strcmp(command, "ERROR") == 0){
            printf("コマンド入力からやり直してください\n");
        }
        else{
            printf("コマンドが間違っています。再度");
        }
        
    }
}