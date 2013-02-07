/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, and the entire permission notice in its entirety,
 *    including the disclaimer of warranties.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * ALTERNATIVELY, this product may be distributed under the terms of
 * the GNU General Public License, version 2, in which case the provisions
 * of the GPL version 2 are required INSTEAD OF the BSD license.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ALL OF
 * WHICH ARE HEREBY DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF NOT ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 */

#ifndef __MSM_AUDIO_ACDB_H
#define __MSM_AUDIO_ACDB_H

#include <linux/msm_audio.h>

#define AUDIO_SET_VOCPROC_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+0), unsigned)
#define AUDIO_SET_VOCPROC_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+1), unsigned)
#define AUDIO_SET_VOCPROC_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+2), unsigned)
#define AUDIO_SET_AUDPROC_RX_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+3), unsigned)
#define AUDIO_SET_AUDPROC_RX_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+4), unsigned)
#define AUDIO_SET_AUDPROC_RX_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+5), unsigned)
#define AUDIO_SET_AUDPROC_TX_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+6), unsigned)
#define AUDIO_SET_AUDPROC_TX_STREAM_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+7), unsigned)
#define AUDIO_SET_AUDPROC_TX_VOL_CAL	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+8), unsigned)
#define AUDIO_SET_SIDETONE_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+9), unsigned)
#define AUDIO_SET_ANC_CAL		_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+10), unsigned)
#define AUDIO_SET_VOICE_RX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+11), unsigned)
#define AUDIO_SET_VOICE_TX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+12), unsigned)
#define AUDIO_SET_ADM_RX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+13), unsigned)
#define AUDIO_SET_ADM_TX_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+14), unsigned)
#define AUDIO_SET_ASM_TOPOLOGY	_IOW(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+15), unsigned)

/* ACDB structures */
struct cal_block {
	uint32_t	cal_size;	/* Size of Cal Data */
	uint32_t	cal_offset;	/* offset pointer to Cal Data */
};

struct sidetone_cal {
	uint16_t	enable;
	uint16_t	gain;
};

/* For Real-Time Audio Calibration */
#define AUDIO_GET_RTAC_ADM_INFO		_IOR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+16), unsigned)
#define AUDIO_GET_RTAC_VOICE_INFO	_IOR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+17), unsigned)
#define AUDIO_GET_RTAC_ADM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+18), unsigned)
#define AUDIO_SET_RTAC_ADM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+19), unsigned)
#define AUDIO_GET_RTAC_ASM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+20), unsigned)
#define AUDIO_SET_RTAC_ASM_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+21), unsigned)
#define AUDIO_GET_RTAC_CVS_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+22), unsigned)
#define AUDIO_SET_RTAC_CVS_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+23), unsigned)
#define AUDIO_GET_RTAC_CVP_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+24), unsigned)
#define AUDIO_SET_RTAC_CVP_CAL	_IOWR(AUDIO_IOCTL_MAGIC, \
			(AUDIO_MAX_COMMON_IOCTL_NUM+25), unsigned)


#endif /* __MSM_AUDIO_ACDB_H */
