#ifndef Array_S_H
#define Array_S_H

#include<queue>
#include<vector>

using namespace std;

template <class Type>
class ArrayS
{
private:
    int n;
    int i;
    int prior;

    int Arrs[100000];

public:

    ArrayS(void)
    {


        i = 0;
        prior = 0;


    }

    ~ArrayS(void)
    {

    }



    Type removeMin()
    {
        int temporaryNum = 0;
        temporaryNum = Arrs[prior];
        Arrs[prior] = NULL;
        i = 0;
        while (Arrs[i] == NULL){
            i++;
        }


        prior = i;

        return temporaryNum;

    }

    void insert(Type e, int p)
    {
        int temp = 0;
        for( int i = 0; i < p-1; i++){
            temp++;
        }

        Arrs[temp] = p;
        if(prior > p){
            prior = p;
        }
    }




};

#endif