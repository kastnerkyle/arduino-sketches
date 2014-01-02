#ifndef _IFACE_HUBSAN_H_
#define _IFACE_HUBSAN_H_
#include "config.h"
int hubsan_init();
s16 get_channel(u8 ch, s32 scale, s32 center, s32 range);
void initialize();
u16 hubsan_cb();
#endif
