//半角英数字リスト要素クラス

#ifndef _HALFWID_ALF_CHAR_LIST_ELEM_H_
#define _HALFWID_ALF_CHAR_LIST_ELEM_H_

#include"ListElem.h"

class CListElem;

class CHalfwidAlfCharListElem : public CListElem
{
    public:
        CHalfwidAlfCharListElem();
        ~CHalfwidAlfCharListElem();
    private:
        char* elem_data;
        int elem_size;


    public:
        bool set_elem_data(const char* , const unsigned int const );  

};

#endif
