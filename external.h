#ifndef EXTERNAL_H
#define EXTERNAL_H


stack_t *stack;

#define OPCODE_MAX_LEN 10 
instruction_t OPCODES[OPCODE_MAX_LEN] = {
	{"push", push},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"nop", NULL},
	{"add", add},
	{"sub", sub},
	{"div", _div},
	{"mul", _mul},
	{"mod", mod},
};

#endif
