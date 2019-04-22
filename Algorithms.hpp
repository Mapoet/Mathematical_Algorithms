//
//  algorithms_tnna.h
//  TNNA
//
//  Created by Mapoet Niphy on 2018/11/2.
//  Copyright © 2018年 Mapoet Niphy. All rights reserved.
//

#ifndef algorithms_tnna_h
#define algorithms_tnna_h
#include <jsoncpp/json/json.h>
#include "Tensor.hpp"
namespace TNNA{
    template<class Cell>
    Cell cdot(const tensor<Cell>& a,const tensor<Cell>& b,const std::map<size_t,size_t>& adxs,const std::map<size_t,size_t>& bdxs){
        if(!a.same(b))return Cell();
        tensor<Cell> ia=a(adxs),ib=b(bdxs);
        Cell r=Cell();
        size_t as=ia.size();
        if(as!=ib.size())return Cell();
        for(size_t i=0;i<as;i++)
            r=r+ia.each(i)*ib.each(i);
        return r;
    }
    template<class Cell>
    tensor<Cell> dot(const tensor<Cell>& a,const tensor<Cell>& b,const std::valarray<size_t> &adxs,const std::valarray<size_t>&bdxs){
        tensor<Cell> r=tensor<Cell>();
        if(bdxs!=adxs)return r;
        return r;
    }
    // const std::valarray<int> &adxs with idxs<0, need caculating
    // const std::valarray<int> &adxs with idxs<0, need caculating
    template<class Cell>
    tensor<Cell> idot(const tensor<Cell>& a,const tensor<Cell>& b,const std::valarray<int> &adxs,const std::valarray<int>&bdxs){
        if(!a.same(b))return Cell();
        tensor<Cell> ia=a(adxs),ib=b(bdxs);
        tensor<Cell> r=tensor<Cell>();
        size_t as=ia.size();
        if(as!=ib.size())return r;
        return r;
    }
    
    //Function:tensor<Cell>(*)(const tensor<Cell>&)
    template<class Cell,typename Function>
    tensor<Cell> broadcast(const tensor<Cell>& a,const tensor<Cell>& b,const Function& function){
        tensor<Cell> r=tensor<Cell>();
        return r;
    }
    //Function:tensor<Cell>(*)(const tensor<Cell>&)
    template<class Cell,typename Function>
    tensor<Cell> mapping(const tensor<Cell>& a,const std::valarray<size_t> &adxs,const Function& function){
        tensor<Cell> r=tensor<Cell>();
        return r;
    }
    //Function:Cell(*)(const tensor<Cell>&)
    template<class Cell,typename Function>
    tensor<Cell> shrink(const tensor<Cell>& a,const std::valarray<size_t> &adxs,const Function& function){
        tensor<Cell> r=tensor<Cell>();
        return r;
    }

}
#endif /* algorithms_h */
