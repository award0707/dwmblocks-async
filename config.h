#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "b-date",    1,    1) \
    X("", "b-main",    10,   3) \
    X("", "b-gpu",     10,   5) \
    X("", "b-disk",    1800, 4) \
    X("", "b-volume",  0,    10) \
    X("", "b-wifi",    30,   11) \
    X("", "b-bt",      60,   8) \
    X("", "b-uptime",  60,  12) \

#endif  // CONFIG_H
