#include "include/ListManager.h"
#include <string>
#include <cstring>


cListManager::cListManager(int num){
        size_max = num;
        for(int i=1; i<=size_max; i++){
            cListElem* new_elem = new cListElem;
            if(i==1){
                first_data = new_elem;
                end_data = new_elem;
                now_data = new_elem;

            }
            else if(i==size_max){
                old_data = now_data;
                now_data = new_elem;

                old_data->back_elem = now_data;
                now_data->front_elem = old_data;

                first_data->front_elem = now_data;
                now_data->back_elem = first_data;

            }
            else{
                old_data = now_data;
                now_data = new_elem;

                old_data->back_elem = now_data;
                now_data->front_elem = old_data;


            }
        }
}

cListManager::~cListManager(){
    while(1){
        if( first_data != end_data){
            now_data = first_data->back_elem;
            delete first_data;
            first_data = now_data;
        }
        else{
            delete first_data;
            break;
        }
    }
}



bool cListManager::type_check(std::string data){
    now_data = new cListElem;

    if(1){
        std::strcpy(now_data->list_data.data_char, data.c_str());
        now_data->ch_add();
    }
    else if(1){

    }

    return true;
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




