#ifndef TIME_H
#define TIME_H
#ifdef __x86_64__
#ifdef __cplusplus

extern "C" void sleep(uint64_t MilSec);

#else

void sleep(uint64_t MilSec);

#endif

#endif
