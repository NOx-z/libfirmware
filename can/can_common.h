// We have a bit of a mess with too many useful usages of CAN and too little documentation at https://github.com/rusefi/rusefi/wiki/CAN

// we use ExtID but only 16 bits in comms protocol from ECU to GDI4
#define GDI4_BASE_ADDRESS 0xBB20

#define BENCH_TEST_BASE_ADDRESS 0x770000

// ECU output
#define BENCH_TEST_EVENT_COUNTERS BENCH_TEST_BASE_ADDRESS
// ECU output
#define BENCH_TEST_RAW_ANALOG (BENCH_TEST_BASE_ADDRESS + 1)
// ECU input
#define BENCH_TEST_CONTROL (BENCH_TEST_BASE_ADDRESS + 2)
// ECU output
#define BENCH_TEST_BOARD_STATUS (BENCH_TEST_BASE_ADDRESS + 3)

// TEST_CONTROL_MAGIC_WORD
