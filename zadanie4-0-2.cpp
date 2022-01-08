#include <iostream>

enum SPORT {BIEGANIE = 1, JEZDZIECTWO, KOLARSTWO, PLYWANIE, RZUT_OSZCZEPEM, SKOK_W_DAL, WSPINACZKA, ZAPASY};

auto main() -> int{
int triathlon = 7;


switch(triathlon)
{
    case BIEGANIE | KOLARSTWO | PLYWANIE:
        std::cout<<"triathlon";
        break;
}


return 0;

}
