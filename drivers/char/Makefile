# SPDX-License-Identifier: GPL-2.0

obj-y				+= mem.o random.o
obj-$(CONFIG_TTY_PRINTK)	+= ttyprintk.o
obj-y				+= misc.o
obj-$(CONFIG_TEST_MISC_MINOR)	+= misc_minor_kunit.o
obj-$(CONFIG_ATARI_DSP56K)	+= dsp56k.o
obj-$(CONFIG_VIRTIO_CONSOLE)	+= virtio_console.o
obj-$(CONFIG_UV_MMTIMER)	+= uv_mmtimer.o
obj-$(CONFIG_IBM_BSR)		+= bsr.o
ccflags-y += -I$(src)
ccflags-y += -I$(srctree)/drivers/char

obj-$(CONFIG_MSM_RDBG) += rdbg.o

obj-$(CONFIG_VIRTIO_CONSOLE) += virtio_console.o

