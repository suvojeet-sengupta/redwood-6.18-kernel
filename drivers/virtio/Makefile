# SPDX-License-Identifier: GPL-2.0

ccflags-y += -I$(src)

obj-$(CONFIG_VIRTIO_MEM) += virtio_mem.o
virtio_mem-objs += virtio_mem.o qti_virtio_mem.o

obj-$(CONFIG_VIRTIO_MMIO) += virtio_mmio.o

obj-$(CONFIG_VIRTIO_INPUT) += virtio_input.o
obj-$(CONFIG_VIRTIO_VDPA) += virtio_vdpa.o
obj-$(CONFIG_VIRTIO_MEM) += virtio_mem.o
obj-$(CONFIG_VIRTIO_DMA_SHARED_BUFFER) += virtio_dma_buf.o
obj-$(CONFIG_VIRTIO_DEBUG) += virtio_debug.o
obj-$(CONFIG_VIRTIO_RTC) += virtio_rtc.o
virtio_rtc-y := virtio_rtc_driver.o
virtio_rtc-$(CONFIG_VIRTIO_RTC_PTP) += virtio_rtc_ptp.o
virtio_rtc-$(CONFIG_VIRTIO_RTC_ARM) += virtio_rtc_arm.o
virtio_rtc-$(CONFIG_VIRTIO_RTC_CLASS) += virtio_rtc_class.o

