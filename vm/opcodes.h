#ifndef OPCODES_H
#define OPCODES_H

#include <stdint.h>

typedef enum {
    OP_LOAD_CONST,
    OP_LOAD_STR,
    OP_LOAD_VAR,
    OP_STORE_VAR,
    OP_POP,
    
    OP_DB_OPEN,
    OP_DB_INDEX,
    OP_DB_CREATE,
    OP_DB_ADD_FIELD,
    OP_DB_INSERT_BEGIN,
    OP_DB_SET_FIELD,
    OP_DB_INSERT_COMMIT,
    OP_DB_GET_PROP,
    OP_DB_NEXT_RECORD,
    OP_DB_HIDE_RECORD,

    OP_REGEX_MATCH,
    OP_RANDOM_INT,
    
    OP_COMPARE,
    uint8_t OP_JUMP_IF_FALSE,
    OP_JUMP,
    OP_PRINT,
    OP_HALT
} OpCode;

typedef enum {
    DB_TYPE_NUMBER,
    DB_TYPE_STRING,
    DB_TYPE_BOOLEAN
} FieldType;

typedef enum {
    CMP_GT,
    CMP_LT,
    CMP_EQ,
    CMP_NEQ
} CompType;


#endif
