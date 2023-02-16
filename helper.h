#ifndef __HELPER_H__
#define __HELPER_H__

#define SIZE(X) (sizeof(X)/sizeof((X)[0]))

float sum(float *in, size_t size);
float exp(float base, uint32_t exponent);

#endif