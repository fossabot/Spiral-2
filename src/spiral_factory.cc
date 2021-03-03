//
// Created by Sakata on 2021/3/1.
//

#include "spiral_factory.h"

namespace spiral {

IMaster *PrintFactory::create(ASTree &tree, Parameter *p) {
    return new PrintMaster(tree, p);
}

IMaster *ExprFactory::create(ASTree &tree, Parameter *p) {
    return new ExprMaster(tree, p);
}

IMaster *BlockFactory::create(ASTree &tree, Parameter *p) {
    return new BlockMaster(tree, p);
}

} // namespace spiral