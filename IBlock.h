#ifndef I_BLOCK_H
#define I_BLOCK_H
#include <iostream>
using namespace std;
char I_arr [2][4][4] = {{{'0','0','1','0'},
                                 {'0','0','1','1'},
                                                                                     {'0','1','1','0'},
                                                                                                                                                                 {'1','0','1','0'}},
                                {{'0','0','0','0'},
                                                                                             {'0','1','1','1'},
                                                                                                                                                                             {'1','1','1','1'},
                                                                                                                                                                                                                                                                                     {'0','0','0','0'}} };
class I_Block{
            public:
                                    I_Block():x(0),y(0),rotate_index(0) {}
                                                                I_Block& rotate(){
                                                                                                            rotate_index=(rotate_index>0)?
                                                                                                                                                                        0:rotate_index+1;
                                                                                                                                                                 return *this;
                                                                                                                                                                                                                            }
                                                                                                    I_Block& left() {x=(x>0)?(x-1):10;
                                                                                                                                                             return *this;}
                                                                                                                                                I_Block& right() {x=(x>10)?0:x+1;
                                                                                                                                                                                                                  return *this;}
                                                                                                                                                                                            void paint() {
                                                                                                                                                                                                                                                    for(int i=0;i<4;++i)
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                for(int j=0;j<x;++j) cout << ' ';
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                for(int j=0;j<4;++j)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    cout << I_arr[rotate_index][i][j];
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        cout << endl;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                            cout << endl;
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                            public:
                                                                                                                                                                                                                                                int x, y;
                                                                                                                                                                                                                                                                                                            int rotate_index;
};
#endif
