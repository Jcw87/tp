#ifndef METROTRK_PORTABLE_MSGBUF_H
#define METROTRK_PORTABLE_MSGBUF_H

#include "dolphin/types.h"

typedef int MessageBufferID;

typedef struct TRKBuffer {
	u32 _00;
	u32 _04;
	s32 _08;
	u32 _0C;
	u32 _10;
	u8 m_buffer[0x87C];
} TRKBuffer;

s32 TRKSetBufferPosition(TRKBuffer*, u32);

#endif /* METROTRK_PORTABLE_MSGBUF_H */
