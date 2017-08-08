#include <iostream>
using namespace std;
struct DATA_RETURN{

        int string = 0;
        char $ = '\0';
};

int main()
{

    DATA_RETURN RETURN;
    RETURN.string = 0;

    for (int index = 255; index > 0; --index){
        ++RETURN.string;
        RETURN.$ = RETURN.string;

        cout << RETURN.$;

    }




    return 0;
}
