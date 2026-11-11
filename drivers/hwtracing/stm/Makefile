# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_STM)	+= stm_core.o

stm_core-y		:= core.o policy.o

obj-$(CONFIG_STM_PROTO_BASIC) += stm_p_basic.o
obj-$(CONFIG_STM_PROTO_SYS_T) += stm_p_sys-t.o

stm_p_basic-y		:= p_basic.o
stm_p_sys-t-y		:= p_sys-t.o

obj-$(CONFIG_STM_DUMMY)	+= dummy_stm.o

obj-$(CONFIG_STM_SOURCE_CONSOLE)	+= stm_console.o
obj-$(CONFIG_STM_SOURCE_HEARTBEAT)	+= stm_heartbeat.o
obj-$(CONFIG_STM_SOURCE_FTRACE)		+= stm_ftrace.o

stm_console-y		:= console.o
stm_heartbeat-y		:= heartbeat.o
stm_ftrace-y		:= ftrace.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
obj-$(CONFIG_STM_PROTO_OST) += stm_p_ost.o
stm_p_ost-objs += p_ost.o
obj-$(CONFIG_STM_PASSTHROUGH) += stm_passthrough.o
