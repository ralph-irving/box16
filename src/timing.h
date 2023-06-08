#pragma once
#if !defined(TIMING_H)
#	define TIMING_H

#include <cstdint>

extern uint32_t Timing_perf;

void timing_init();
void timing_update();
uint32_t timing_total_microseconds();
uint32_t timing_total_microseconds_realtime();

#endif
