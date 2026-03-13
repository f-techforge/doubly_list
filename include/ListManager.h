#ifndef _LIST_MANAGER_
#define _LIST_MANAGER_
#include "ListType.h"
#include "ListElem.h"
class CListManager{
    private:
        unsigned char size_count = 0;
        unsigned char size_max = 0;
        unsigned int capacity = 256;
        unsigned int capacity_max = 50;


    public:
        CListManager(int num = 10);
        ~CListManager();
        
        void size_countup(void){size_count++;}
        void size_countdown(void){size_count--;}
        void size_max_set(unsigned char num ){size_max = num;}

        bool type_check(std::string);

        CListElem* first_data   = NULL;       
        CListElem* end_data     = NULL;
        bool add_elem(std::string);
        bool push_fanction(void);

};


#endif