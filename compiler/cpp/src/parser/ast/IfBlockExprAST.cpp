// Copyright (c) 2021 Compose Generator Contributors. All rights reserved.

#include "IfBlockExprAST.h"

std::unique_ptr<StmtLstExprAST> const &IfBlockExprAST::getStmtList() {
    return stmtList;
}

std::unique_ptr<PayloadExprAST> const &IfBlockExprAST::getPayload() {
    return payload;
}