
#define OPCODE_LEN 5
stack_t *stack;
char opcode_arr[][10] = {"push\0", "pint\0", "pall\0", "pop\0"};
enum OPCODE
{PUSH, PINT, PALL, POP};
