

#include <fstream>
#include "Algorithms.hpp"

int main(int argc,char**argv){
    Json::Reader rd;
    Json::Value v;
    std::ifstream is("test.json");
    rd.parse(is,v,false);
    is.close();
    v.asInt();
    return 0;
}