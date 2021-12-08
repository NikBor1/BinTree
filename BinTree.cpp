#include <iostream>
#include <vector>


class BinT
{
    int value;
    BinT* parent;
    BinT* leftSon;
    BinT* rightSon;
    int underHeight;

public:

    BinT(BinT* par, int val);

    BinT* get_parent(){return parent;}
    BinT* get_leftSon(){return leftSon;}
    BinT* get_rightSon(){return rightSon;}
    int get_underHeight(){return underHeight;}

    void set_parent(BinT* par){parent = par;}
    void set_leftSon(BinT* ls){leftSon = ls;}
    void set_rightSon(BinT* rs){rightSon = rs;}
    void set_underHeight(int h){underHeight = h;}

    void add(int newElem);



};

BinT::BinT(BinT* par, int val)
{
    value = val;
    parent = par;
    leftSon = nullptr;
    rightSon = nullptr;
    underHeight = 0;
}

void add(int newElem)
{
    bool breaker = true;

    BinT* nowAt = this->&;

    while(breaker)
    {
        if(newElem == value)
            breaker = false;

        if(newElem > value)
        {
            if(right_son == nullptr)
            {
                BinT newLeaf(nowAt, newElem);
                nowAt.set_rightSon(newLeaf&);
                breaker = false;
            }
            else
            {
                nowAt = rightSon;
            }
        }

        if(newElem < nowAt.get_value()))
        {
            if(left_son == nullptr)
            {
                BinT newLeaf(nowAt, newElem);
                nowAt.set_leftSon(newLeaf&);
                breaker = false;
            }
            else
            {
                nowAt = leftSon;
            }
        }
    }

    while(parent != nullptr)
    {
        nowAt.set_underHeight(std::max(nowAt.get_leftSon().get_underHeight() + 1, nowAt.get_rightSon().get_underHeight() + 1);
    }
}

int main()
{




    return 0;
}
