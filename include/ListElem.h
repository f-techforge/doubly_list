//基本リスト要素クラス

#ifndef _LIST_ELEM_H_
#define _LIST_ELEM_H_


class CListElem
{
    public:
        CListElem();
        virtual ~CListElem();

    
        
    
    public:
        
        CListElem* front_data = nullptr;
        CListElem* back_data = nullptr;
        
        virtual bool set_elem_data(void){};
     
};

#endif
