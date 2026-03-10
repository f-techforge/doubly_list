#ifndef _LIST_TYPE_
#define _LIST_TYPE_


class cListElem{
    private:
        enum e_type{
            initial=0,
            i_data,
            ch_data
        };
        
    public:

        bool ch_add(void){
            data_type = ch_data;
            return true;
        };    

        bool i_add(void){
            data_type = i_data;
            return true;
        };
        struct s_list_data{
            signed char* data_int = nullptr;
            char data_char[100] = {};
        }list_data;
        
        e_type data_type = initial;

        cListElem* front_elem = nullptr;
        cListElem* back_elem   = nullptr;

        
};





#endif 