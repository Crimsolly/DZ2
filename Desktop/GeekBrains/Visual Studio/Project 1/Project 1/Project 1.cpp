#include <iostream>

int main()
{
    //tesk1
    { //scope
        int a = 10;
        float D = 3.14f;
        double F = 3.1415926535;
        long long V = 7'234'675'856'090;
        char z = -123;
        z = 'Q';
        short int X = 15566;
        bool test = false;
        if (test) true;
        else test = 100;
    }
    //tesk2     
    enum Variants
    { 
    V_CROSS = 'X',
    V_ZERO = '0',
    V_NOTHING = '_'
    };
    //task3  
    enum Variants arr[3][3] =
    { { V_ZERO, V_ZERO, V_ZERO },
      { V_ZERO, V_ZERO, V_ZERO },
      { V_ZERO, V_ZERO, V_ZERO } };

        return 0;   
}