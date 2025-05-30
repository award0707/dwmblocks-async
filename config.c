#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
//    {"sb-mail",    600,  1 },
//    {"sb-music",   0,    2 },
    {"sb-cpu",     10,   3 },
    {"sb-disk",    1800, 4 },
    {"sb-memory",  10,   5 },
    {"sb-loadavg", 5,    6 },
//    {"sb-mic",     0,    7 },
//    {"sb-record",  0,    8 },
//    {"sb-netspeed", 1,   9 },
    {"sb-bt",      60,   9 },
    {"sb-volume",  0,    10 },
    {"sb-date",    1,    11 },
};

const unsigned short blockCount = LEN(blocks);
