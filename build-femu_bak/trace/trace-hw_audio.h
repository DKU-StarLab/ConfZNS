/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_AUDIO_GENERATED_TRACERS_H
#define TRACE_HW_AUDIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_CS4231_MEM_READL_DREG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_READL_REG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_WRITEL_REG_EVENT;
extern TraceEvent _TRACE_CS4231_MEM_WRITEL_DREG_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_MEMORY_READ_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_MEMORY_WRITE_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_IN_CB_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_OUT_CB_EVENT;
extern TraceEvent _TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_RUNNING_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_FORMAT_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_ADJUST_EVENT;
extern TraceEvent _TRACE_HDA_AUDIO_OVERRUN_EVENT;
extern uint16_t _TRACE_CS4231_MEM_READL_DREG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_READL_REG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_WRITEL_REG_DSTATE;
extern uint16_t _TRACE_CS4231_MEM_WRITEL_DREG_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_MEMORY_READ_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_MEMORY_WRITE_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_IN_CB_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_OUT_CB_DSTATE;
extern uint16_t _TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_RUNNING_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_FORMAT_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_ADJUST_DSTATE;
extern uint16_t _TRACE_HDA_AUDIO_OVERRUN_DSTATE;
#define TRACE_CS4231_MEM_READL_DREG_ENABLED 1
#define TRACE_CS4231_MEM_READL_REG_ENABLED 1
#define TRACE_CS4231_MEM_WRITEL_REG_ENABLED 1
#define TRACE_CS4231_MEM_WRITEL_DREG_ENABLED 1
#define TRACE_MILKYMIST_AC97_MEMORY_READ_ENABLED 1
#define TRACE_MILKYMIST_AC97_MEMORY_WRITE_ENABLED 1
#define TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_ENABLED 1
#define TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_ENABLED 1
#define TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_ENABLED 1
#define TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_ENABLED 1
#define TRACE_MILKYMIST_AC97_IN_CB_ENABLED 1
#define TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_ENABLED 1
#define TRACE_MILKYMIST_AC97_OUT_CB_ENABLED 1
#define TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_ENABLED 1
#define TRACE_HDA_AUDIO_RUNNING_ENABLED 1
#define TRACE_HDA_AUDIO_FORMAT_ENABLED 1
#define TRACE_HDA_AUDIO_ADJUST_ENABLED 1
#define TRACE_HDA_AUDIO_OVERRUN_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_CS4231_MEM_READL_DREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_READL_DREG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_READL_DREG) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:cs4231_mem_readl_dreg " "read dreg %d: 0x%02x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , reg, ret);
    }
}

static inline void trace_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret)
{
    if (true) {
        _nocheck__trace_cs4231_mem_readl_dreg(reg, ret);
    }
}

#define TRACE_CS4231_MEM_READL_REG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_READL_REG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_READL_REG) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:cs4231_mem_readl_reg " "read reg %d: 0x%08x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , reg, ret);
    }
}

static inline void trace_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret)
{
    if (true) {
        _nocheck__trace_cs4231_mem_readl_reg(reg, ret);
    }
}

#define TRACE_CS4231_MEM_WRITEL_REG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_WRITEL_REG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_WRITEL_REG) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:cs4231_mem_writel_reg " "write reg %d: 0x%08x -> 0x%08x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , reg, old, val);
    }
}

static inline void trace_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (true) {
        _nocheck__trace_cs4231_mem_writel_reg(reg, old, val);
    }
}

#define TRACE_CS4231_MEM_WRITEL_DREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CS4231_MEM_WRITEL_DREG) || \
    false)

static inline void _nocheck__trace_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (trace_event_get_state(TRACE_CS4231_MEM_WRITEL_DREG) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:cs4231_mem_writel_dreg " "write dreg %d: 0x%02x -> 0x%02x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , reg, old, val);
    }
}

static inline void trace_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val)
{
    if (true) {
        _nocheck__trace_cs4231_mem_writel_dreg(reg, old, val);
    }
}

#define TRACE_MILKYMIST_AC97_MEMORY_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_MEMORY_READ) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_memory_read(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_MEMORY_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_memory_read " "addr 0x%08x value 0x%08x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , addr, value);
    }
}

static inline void trace_milkymist_ac97_memory_read(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_memory_read(addr, value);
    }
}

#define TRACE_MILKYMIST_AC97_MEMORY_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_MEMORY_WRITE) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_memory_write(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_MEMORY_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_memory_write " "addr 0x%08x value 0x%08x" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , addr, value);
    }
}

static inline void trace_milkymist_ac97_memory_write(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_memory_write(addr, value);
    }
}

#define TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_pulse_irq_crrequest(void)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_pulse_irq_crrequest " "Pulse IRQ CR request" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_milkymist_ac97_pulse_irq_crrequest(void)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_pulse_irq_crrequest();
    }
}

#define TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_pulse_irq_crreply(void)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_pulse_irq_crreply " "Pulse IRQ CR reply" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_milkymist_ac97_pulse_irq_crreply(void)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_pulse_irq_crreply();
    }
}

#define TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_pulse_irq_dmaw(void)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_pulse_irq_dmaw " "Pulse IRQ DMA write" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_milkymist_ac97_pulse_irq_dmaw(void)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_pulse_irq_dmaw();
    }
}

#define TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_pulse_irq_dmar(void)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_pulse_irq_dmar " "Pulse IRQ DMA read" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_milkymist_ac97_pulse_irq_dmar(void)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_pulse_irq_dmar();
    }
}

#define TRACE_MILKYMIST_AC97_IN_CB_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_IN_CB) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_in_cb(int avail, uint32_t remaining)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_IN_CB) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_in_cb " "avail %d remaining %u" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , avail, remaining);
    }
}

static inline void trace_milkymist_ac97_in_cb(int avail, uint32_t remaining)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_in_cb(avail, remaining);
    }
}

#define TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_in_cb_transferred(int transferred)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_in_cb_transferred " "transferred %d" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , transferred);
    }
}

static inline void trace_milkymist_ac97_in_cb_transferred(int transferred)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_in_cb_transferred(transferred);
    }
}

#define TRACE_MILKYMIST_AC97_OUT_CB_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_OUT_CB) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_out_cb(int free, uint32_t remaining)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_OUT_CB) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_out_cb " "free %d remaining %u" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , free, remaining);
    }
}

static inline void trace_milkymist_ac97_out_cb(int free, uint32_t remaining)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_out_cb(free, remaining);
    }
}

#define TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED) || \
    false)

static inline void _nocheck__trace_milkymist_ac97_out_cb_transferred(int transferred)
{
    if (trace_event_get_state(TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:milkymist_ac97_out_cb_transferred " "transferred %d" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , transferred);
    }
}

static inline void trace_milkymist_ac97_out_cb_transferred(int transferred)
{
    if (true) {
        _nocheck__trace_milkymist_ac97_out_cb_transferred(transferred);
    }
}

#define TRACE_HDA_AUDIO_RUNNING_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_RUNNING) || \
    false)

static inline void _nocheck__trace_hda_audio_running(const char * stream, int nr, bool running)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_RUNNING) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:hda_audio_running " "st %s, nr %d, run %d" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , stream, nr, running);
    }
}

static inline void trace_hda_audio_running(const char * stream, int nr, bool running)
{
    if (true) {
        _nocheck__trace_hda_audio_running(stream, nr, running);
    }
}

#define TRACE_HDA_AUDIO_FORMAT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_FORMAT) || \
    false)

static inline void _nocheck__trace_hda_audio_format(const char * stream, int chan, const char * fmt, int freq)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_FORMAT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:hda_audio_format " "st %s, %d x %s @ %d Hz" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , stream, chan, fmt, freq);
    }
}

static inline void trace_hda_audio_format(const char * stream, int chan, const char * fmt, int freq)
{
    if (true) {
        _nocheck__trace_hda_audio_format(stream, chan, fmt, freq);
    }
}

#define TRACE_HDA_AUDIO_ADJUST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_ADJUST) || \
    false)

static inline void _nocheck__trace_hda_audio_adjust(const char * stream, int pos)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_ADJUST) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:hda_audio_adjust " "st %s, pos %d" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , stream, pos);
    }
}

static inline void trace_hda_audio_adjust(const char * stream, int pos)
{
    if (true) {
        _nocheck__trace_hda_audio_adjust(stream, pos);
    }
}

#define TRACE_HDA_AUDIO_OVERRUN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HDA_AUDIO_OVERRUN) || \
    false)

static inline void _nocheck__trace_hda_audio_overrun(const char * stream)
{
    if (trace_event_get_state(TRACE_HDA_AUDIO_OVERRUN) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:hda_audio_overrun " "st %s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , stream);
    }
}

static inline void trace_hda_audio_overrun(const char * stream)
{
    if (true) {
        _nocheck__trace_hda_audio_overrun(stream);
    }
}
#endif /* TRACE_HW_AUDIO_GENERATED_TRACERS_H */
