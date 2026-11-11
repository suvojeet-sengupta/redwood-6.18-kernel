# SPDX-License-Identifier: GPL-2.0-only
ffa-bus-y = bus.o
ffa-driver-y = driver.o
ffa-transport-$(CONFIG_ARM_FFA_SMCCC) += smccc.o
ffa-core-objs := $(ffa-bus-y)
ffa-module-objs := $(ffa-driver-y) $(ffa-transport-y)
obj-$(CONFIG_ARM_FFA_TRANSPORT)  = ffa-core.o
obj-$(CONFIG_ARM_FFA_TRANSPORT) += ffa-module.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
arm_ffa_transport-objs += bus.o
arm_ffa-objs += smccc.o driver.o
