/****************************************************************************
  FileName     [ proveBdd.cpp ]
  PackageName  [ prove ]
  Synopsis     [ For BDD-based verification ]
  Author       [ ]
  Copyright    [ Copyright(c) 2023-present DVLab, GIEE, NTU, Taiwan ]
****************************************************************************/

#include "bddMgrV.h"
#include "gvMsg.h"
// #include "gvNtk.h"
#include <iomanip>
#include <iostream>
#include <vector>

#include "cirGate.h"
#include "cirMgr.h"
#include "util.h"

void
BddMgrV::buildPInitialState() {
    // TODO : remember to set _initState
    // Hint : use "cirMgr" to get the network info from the manager 
    // set initial state to all zero
}

void
BddMgrV::buildPTransRelation() {
    // TODO : remember to set _tr, _tri
    // Hint : use "cirMgr" to get the network info from the manager
}

void
BddMgrV::buildPImage(int level) {
    // TODO : remember to add _reachStates and set _isFixed
    // Hint : use "cirMgr" to get the network info from the manager
    // note:: _reachStates record the set of reachable states
}

void
BddMgrV::runPCheckProperty(const string& name, BddNodeV monitor) {
    // TODO : prove the correctness of AG(~monitor)
    // Hint : use "cirMgr" to get the network info from the manager
}

BddNodeV
BddMgrV::find_ns(BddNodeV cs) {}

BddNodeV
BddMgrV::ns_to_cs(BddNodeV ns) {}
