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
//
//  inner processing
    tensor<Cell> dot(const tensor<Cell>& a,const tensor<Cell>& b,const std::valarray<size_t> &adxs,const std::valarray<size_t>&bdxs){
        tensor<Cell> r=tensor<Cell>();
        auto ids=bdxs.size();
        if(ids!=adxs.size())return r;
        auto as=a.shape();
        auto bs=b.shape();
        auto an=a.size();
        auto bn=b.size();
        std::valarray<size_t> abs(as.size()+bs.size()-2*adxs.size()),ais(adxs.size()),bis(bdxs.size());
        r.resize(abs);
        for(size_t i=0;i<ids;i++)
            if(as[adxs[i]]!=bs[bdxs[i]])
            return r;
        for(size_t i=0;i<an;i++)
        for(size_t j=0;j<bn;j++){
            auto ai=tensor<Cell>::loc2idxs(i,as,an);
            auto bi=tensor<Cell>::loc2idxs(j,bs,bn);
            //for(size_t k=0;k<ids;i++)
            //{
            //    ais[k]=ai[adxs[k]];
            //    bis[k]=bi[bdxs[k]];
            //}
            r[abs]=r[abs]+a.each(i)*b.each(j);

        }
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
//  
    tensor<Cell> dot(const tensor<Cell>& a,const tensor<Cell>& b,const std::valarray<size_t>& adxs,const std::valarray<size_t>& bdxs){
        tensor<tensor<Cell>> s =tensor<tensor<Cell>>();
        tensor<Cell> r=tensor<Cell>();
        size_t as=adxs.size();
        if(as!=bdxs.size())return tensor<Cell>();
        r.each(0)=0;
        return r;
    }
    template<class Cell>
    tensor<Cell> idot(const tensor<Cell>& a,const tensor<Cell>& b,const std::valarray<size_t>& adxs,const std::valarray<size_t>& bdxs){
        tensor<tensor<Cell>> s =tensor<tensor<Cell>>();
        s({})({})=0;
        tensor<Cell>  r  = tensor<Cell>();
        return r;
    }
    //Function: Cell name(tensor<Cell> a);
    template<class Cell,class Function>
    tensor<Cell> contraction(const tensor<Cell>& a,const std::valarray<size_t> adxs,const Function&func){
        tensor<tensor<Cell>> s =tensor<tensor<Cell>>();
        s({})({})=0;
        tensor<Cell>  r  = tensor<Cell>();
        return r;
    }
    //Function: tensor<Cell> name(tensor<Cell> a);
    template<class Cell,class Function>
    tensor<Cell> mapping(const tensor<Cell>& a,const std::valarray<size_t> cdxs,const Function&func){
        tensor<tensor<Cell>> s =tensor<tensor<Cell>>();
        s({})({})=0;
        tensor<Cell>  r  = tensor<Cell>();
        return r;
    }
    //Function: Cell name(Cell a, Cell b);
    template<class Cell,class Function>
    tensor<Cell> product(const tensor<Cell>& a,const tensor<Cell>& b,const Function&func){
        tensor<Cell> r=tensor<Cell>();
//>>>>>>> upate Algo
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
