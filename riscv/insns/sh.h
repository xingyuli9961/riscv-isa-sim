MMU.store_uint16(RS1 + insn.s_imm(), RS2);

// Xingyu: Start
#include <iostream>

std::cout << "StoreTrace:" << " addr:" << " 0x" << std::hex << (RS1 + insn.i_imm());
for (size_t i = 0; i < 16; i++) {
  std::cout << " 0x" << std::hex << MMU.load_uint32(((RS1 + insn.i_imm()) & (~63)) + 4 * i);
}
std::cout << std::endl;

// Xingyu: End
