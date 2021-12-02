require_rv64;

// Xingyu: Start
#include <iostream>

std::cout << "SotreTrace:" << " SD " << "newdata: " << std::hex << RS2 << " addr:"  << " 0x" << std::hex << (RS1 + insn.i_imm());
for (size_t i = 0; i < 16; i++) {
  std::cout << " 0x" << std::hex << MMU.load_uint32(((RS1 + insn.i_imm()) & (~63)) + 4 * i);
}
std::cout << std::endl;

// Xingyu: End


MMU.store_uint64(RS1 + insn.s_imm(), RS2);
