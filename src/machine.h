#ifndef MACHINE_H
#define MACHINE_H

/* Basic pointer sizes and alignments for the AVR */

/* The size of pointers */
#define MACHINE_PTR_SIZE 2
#define MACHINE_PTR_ALIGN 1

#define MACHINE_FLOAT_SIZE 4
#define MACHINE_FLOAT_ALIGN 1

#define MACHINE_DOUBLE_SIZE 4
#define MACHINE_DOUBLE_ALIGN 1

#define MACHINE_LONG_DOUBLE_SIZE 4
#define MACHINE_LONG_DOUBLE_ALIGN 1

#define MACHINE_INT1_ALIGN 1
#define MACHINE_INT2_ALIGN 1
#define MACHINE_INT4_ALIGN 1
#define MACHINE_INT8_ALIGN 1

#define MACHINE_SHORT_SIZE 2
#define MACHINE_SHORT_ALIGN 1

#define MACHINE_INT_SIZE 4
#define MACHINE_INT_ALIGN 1

#define MACHINE_LONG_SIZE 4
#define MACHINE_LONG_ALIGN 1

#define MACHINE_LONG_LONG_SIZE 8
#define MACHINE_LONG_LONG_ALIGN 1

#define MACHINE_CHAR_SIGNED TRUE

#define MACHINE_WCHAR_T_SIZE 2
#define MACHINE_WCHAR_T_SIGNED TRUE

#define MACHINE_SIZE_T_SIZE 2

#endif