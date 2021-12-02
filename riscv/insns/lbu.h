// Xingyu: Start
#include <iostream>

std::cout << "LoadTrace:" << " addr:" << " 0x" << std::hex << (RS1 + insn.i_imm());
for (size_t i = 0; i < 16; i++) {
  std::cout << " 0x" << std::hex << MMU.load_uint32(((RS1 + insn.i_imm()) & (~63)) + 4 * i);
}
std::cout << std::endl;

// Xingyu: End

WRITE_RD(MMU.load_uint8(RS1 + insn.i_imm()));
