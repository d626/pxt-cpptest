#include "pxt.h"
using namespace pxt;
namespace cpptest {
    /**
     * a simle function adding the two parameters
     * @param a [0-3] the first parameter eg: 2
     * @param b the other parameter eg: 3
     */
    //% blockId="extfun" block="%a| + %b" 
    int extfun(int x, int y) {
        int a = x + y;
        return a;
    }
}
