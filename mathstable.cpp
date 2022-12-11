# data-structures
here is all my data structures codes in c++ for making math tables
#include <iostream>


using namespace std;


void creat_table (int * num , int * lim)
    {

        if (*lim == 0)
            {
                return;
            }

        else
            {
                cout << *num << "*" << *lim << " = " << (*num) * (*lim) <<  endl;
                *lim = *lim +1;
                creat_table(num ,lim);
            }
        
    }

int main()
    {
        int num;
        int * number;
        int limit;
        int * lim;
        cout << " enter table number :" << endl;
        cin >> num;

        number = &num;

        cout << "enter table limit" << endl;
        cin >> limit;

        lim = &limit;

        creat_table(number,lim);
    }
