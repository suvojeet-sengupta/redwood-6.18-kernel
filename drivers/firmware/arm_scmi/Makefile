# SPDX-License-Identifier: GPL-2.0

scmi-driver-y = driver.o notify.o
scmi-driver-$(CONFIG_ARM_SCMI_QUIRKS) += quirks.o
scmi-driver-$(CONFIG_ARM_SCMI_RAW_MODE_SUPPORT) += raw_mode.o
scmi-transport-$(CONFIG_ARM_SCMI_HAVE_SHMEM) = shmem.o
scmi-transport-$(CONFIG_ARM_SCMI_HAVE_MSG) += msg.o
scmi-protocols-y := base.o clock.o perf.o power.o reset.o sensors.o system.o voltage.o powercap.o
scmi-protocols-y += pinctrl.o
scmi-module-objs := $(scmi-driver-y) $(scmi-protocols-y) $(scmi-transport-y)
ccflags-y += -I$(src)

obj-$(CONFIG_QTI_SCMI_VENDOR_PROTOCOL) += qcom_scmi_vendor.o

