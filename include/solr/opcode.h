#ifndef SOLR_OPCODE_H
#define SOLR_OPCODE_H

#include "common.h"

HEADER_BEGIN

typedef enum{
    OP_NOP = 1,
    OP_INVOKENATIVE,
} solr_opcode;

HEADER_END

#endif