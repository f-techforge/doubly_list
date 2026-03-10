#include "include/ListManager.h"
#include <iostream>

int main(void){

    std::string command;
    cListManager* doubly_list = new cListManager;
    while (1)
    {   
        std::cout << "コマンドを入力してください\n->";
        std::cin >> command;

        if(command == "push"){
            doubly_list->push_fanction();
        }
        else if(command == "pop"){

        }
        else if((command == "print") || (command == "p")){

        }
        else if((command == "clear") || (command == "c")){

        }
        else if((command == "help") || (command == "h")){

        }
        else if(command == "quit"){
            delete doubly_list;
        }
        else{
            return -1; //
        }
        
    }

    
    return 0;
}