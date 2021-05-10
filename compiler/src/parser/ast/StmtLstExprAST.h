// Copyright (c) Marc Auberer 2021. All rights reserved.

//
// Created by Marc on 09.05.2021.
//

#ifndef COMPILER_STMTLSTEXPRAST_H
#define COMPILER_STMTLSTEXPRAST_H

#include <utility>
#include <vector>
#include <memory>
#include "StmtExprAST.h"

class StmtLstExprAST {
private:
    std::vector<std::unique_ptr<StmtExprAST>> Stmts;
public:
    explicit StmtLstExprAST(std::vector<std::unique_ptr<StmtExprAST>> stmts): Stmts(std::move(stmts)) {}
    const std::vector<std::unique_ptr<StmtExprAST>> &GetStatements();
};

#endif //COMPILER_STMTLSTEXPRAST_H
