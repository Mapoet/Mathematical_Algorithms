

#include <iostream>
#include "Algorithms.hpp"
int main(int argc,char**argv){
<<<<<<< HEAD
    TNNA::tensor<double> a({3,2},{0.5,0.2,0.3,1.5,2.3,4.6}),b({3,2},{1,2,3,4,5,6});
    auto k=TNNA::cdot(a,b,{{0,0}},{{0,0}});
    auto u=sin(a);
    std::cout<<k<<"\t"<<u<<std::endl;
=======
    TNNA::tensor<double> a({3,2},{1,2,3,4,5,6}),b({3,2},{1,2,3,4,5,6});
    auto k=TNNA::cdot(a,b,{{0,0}},{{0,1}});
    auto u=sin(a);
    std::cout<<k<<"\n"<<u<<"\n";
>>>>>>> upate Algo
    return 0;
}