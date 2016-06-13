#include <iostream>
#include "IBlock.h"
#include <new>

using namespace std;

int main()
{
    int i = 0,k; 
    I_Block *ipi[50];
    try { 
        for(k=0;k<50;++k){
            ipi[k] = new I_Block[50000000];
            cout<<"new I_Block["<<k<<"]"<<endl;
        }
    }catch(bad_alloc &iii){
        while(i <= k){
            cout <<"delete I_Block["<<i<<"]"<<endl;
            delete[] ipi[i];
            i++;
        }
    }    

    cout<<"When new 50000000*"<<k<<" I_Blocks, the memory is insufficient! \n"<<"Finally,this program delete to I_Block["<<i-1<<"]"<<endl;
    

    return 0;
}
