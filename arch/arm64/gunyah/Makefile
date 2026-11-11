# SPDX-License-Identifier: GPL-2.0

obj-$(CONFIG_GUNYAH_HYPERCALLS) += gunyah_hypercall.o
obj-$(CONFIG_GUNYAH_TIMER) += timer.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
obj-$(CONFIG_GH_ARM64_DRV) += gh_arm_drv.o
gh_arm_drv-objs += gh_arm.o irq.o reset.o
