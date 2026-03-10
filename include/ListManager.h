#ifndef _LIST_MANAGER_
#define _LIST_MANAGER_
#include <iostream>
#include "ListType.h"

class cListManager{
    private:
        unsigned char size_count = 0;
        unsigned char size_max = 10;


    public:
        cListManager(int num = 10);
        ~cListManager();
        void size_countup(void){size_count++;}
        void size_countdown(void){size_count--;}
        void size_max_set(unsigned char num ){size_max = num;}

        bool type_check(std::string);

        cListElem* first_data   = nullptr;
        cListElem* end_data     = nullptr;
        cListElem* now_data     = nullptr;
        cListElem* old_data     = nullptr;
        bool add_elem(std::string);
        bool push_fanction(void);

};


#endif