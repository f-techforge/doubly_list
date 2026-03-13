#include "include/ListManager.h"
#include "include/ListElem.h"
#include <cstring>


CListManager::cListManager(int num=10){
    size_max = num;
    CListElem* new_elem = NULL;
    for(int i=1; i<=size_max; i++){
        new_elem = new CListElem;
        if(i==1){
            first_data = new_elem;
        }
        else if(i>=size_max){
            first_data->front_elem = new_elem;
            new_elem->back_elem = first_data;
            first_data = new_elem;
        }
        else{
            first_data->front_elem = new_elem;
            new_elem->back_elem = first_data;
            first_data = new_elem;

            first_data->front_elem = end_data;
            end_data->back_elem = first_data;
            end_data = first_data;
        }
    }
}

CListManager::~cListManager(){
    CListElem* del_ptr = NULL;
    for(int i=1; i<=size_max; i++){
        del_ptr = first_data;
        if(i <= 10){
            first_data = first_data->back_elem;
        }
        delete del_ptr;
    }
    printf("リストを削除しました\n");
}

char CListManager::command_input(void){
    char* command = new char[capacity];
    char ch = 0;
    bool flag = false;
    unsigned char length = 0;
    std::cout << "コマンドを入力してください\n->";
    while((ch = getchar()) != EOF){
        if(ch == '\n'){
            flag = true;
            break;
        }
        elseif((ch < 30) || ((39 < ch) && (ch < 41)) || ((5A < ch) && (ch < 61)) || (7A < ch)){
            printf("コマンドに使用できない文字が含まれています。\n");
            flag = false;
            break;
        }
        elseif(length+1 > capacity_max){
            std::cout << "コマンドの文字数が最大値を超過しています。\n";
            flag = false;
            break;  
        }
        elseif(length+1 > capacity){
            char* new_command = new char[capacity*2];
            std::memcpy(new_command, command, capacity);
            delete[] command;
            command = new_command;
            capacity *= 2;
        }
        else{
            command[length] = ch;
            length++;
        }
    };
    if(flag == true){
        command[length] = '\0';
        return command;
    }
    else{
        return "ERROR";
    }
}



bool cListManager::add_elem(std::string type_data){


    if(type_check(type_data)==false){return false;}
    size_countup();
    if(size_count == 1){
        first_data = now_data;
        end_data = now_data;
    }
    else if( (2 <= size_count) || (size_count <= size_max)){
        end_data = now_data;
        old_data->back_elem   = now_data;
        now_data->front_elem  = old_data;
    } 
    else{
        std::cout << "エラー" << std::endl;
        return false;
    }

    old_data = now_data;
    return true;
}

bool cListManager::push_fanction(void){
    if(size_count>=size_max){
        std::cout << "リストサイズが最大です。" << std::endl;
        return true;
    }

    bool retry_check = false;
    std::string data;
    for(char retry_num = 3; retry_num >= 0; retry_num--){
        std::cout << "リスト追加するデータを入力してください" << std::endl << "->";
        std::cin >> data;

        if(retry_num<=0){
            std::cout << "コマンド入力からやり直してください\n"; 
            retry_check = true;
            break;
        }

        if((short)(data.length()) > 100){break;}
        else{
            std::cout << "データの文字数が100を超過しています。\n入力し直してください。\n入力トライ回数残り" << retry_num-1 << "回\n->";
        }
    }
    if(retry_check){return false;}
    
    add_elem(data);

    return true;

}




