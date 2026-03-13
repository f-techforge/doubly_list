//半角英数字リスト要素クラス


#include"include/HalfwidAlfCharListElem.h"



//コンストラクタ
CHalfwidAlfCharListElem::CHalfwidAlfCharListElem(){
    
};

CHalfwidAlfCharListElem::~CHalfwidAlfCharListElem(){
    
};

bool CHalfwidAlfCharListElem::set_elem_data(const char* input_data, const unsigned int const input_size){
    
    if(input_data == NULL){
        return 0; //失敗
    }
    else{
        elem_data = input_data;
        elem_size = input_size;
        return 1;  //成功
    }
    
    
};




