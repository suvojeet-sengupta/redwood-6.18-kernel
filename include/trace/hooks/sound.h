/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM sound

#define TRACE_INCLUDE_PATH trace/hooks

#if !defined(_TRACE_HOOK_SOUND_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_SOUND_H

#include <trace/hooks/vendor_hooks.h>

/*
 * As in android16-6.12: lets a vendor machine driver mark a stream as having
 * no buffer (a hostless DSP path such as a voice call), so starting it with
 * nothing queued is not an underrun.
 */
struct snd_pcm_substream;

DECLARE_HOOK(android_vh_snd_pcm_check_no_buffer,
	TP_PROTO(struct snd_pcm_substream *substream, bool *no_buffer),
	TP_ARGS(substream, no_buffer));

#endif /* _TRACE_HOOK_SOUND_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
