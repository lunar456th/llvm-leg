//===-- PIKAMachineFuctionInfo.h - PIKA machine function info -*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares PIKA-specific per-machine-function information.
//
//===----------------------------------------------------------------------===//

#ifndef PIKAMACHINEFUNCTIONINFO_H
#define PIKAMACHINEFUNCTIONINFO_H

#include "llvm/CodeGen/MachineFrameInfo.h"
#include "llvm/CodeGen/MachineFunction.h"

namespace llvm {

// Forward declarations
class Function;

/// PIKAFunctionInfo - This class is derived from MachineFunction private
/// PIKA target-specific information for each MachineFunction.
class PIKAFunctionInfo : public MachineFunctionInfo {
public:
  PIKAFunctionInfo() {}

  ~PIKAFunctionInfo() {}
};
} // End llvm namespace

#endif // PIKAMACHINEFUNCTIONINFO_H

