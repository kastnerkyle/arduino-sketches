#ifndef _IFACE_PROTOCOL_H
#define _IFACE_PROTOCOL_H
#include "config.h"
static u8 proto_state;
static u32 bind_time;

#define PROTO_READY   0x01
#define PROTO_BINDING 0x02
#define PROTO_BINDDLG 0x04
void PROTOCL_SetBindState(u32 msec);
#endif
