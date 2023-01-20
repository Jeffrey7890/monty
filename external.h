

stack_t *stack;
char opcode_arr[][10] = {"push\0", "pint\0", "pall\0", "pop\0"};
enum OPCODE
{PUSH, PINT, PALL, POP};

#define OPCODE_MAX_LEN 4
instruction_t OPCODES[OPCODE_MAX_LEN] = {
	{"push", push},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
};
