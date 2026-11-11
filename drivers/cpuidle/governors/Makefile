# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for cpuidle governors.
#

obj-$(CONFIG_CPU_IDLE_GOV_LADDER) += ladder.o
obj-$(CONFIG_CPU_IDLE_GOV_MENU) += menu.o
obj-$(CONFIG_CPU_IDLE_GOV_TEO) += teo.o
obj-$(CONFIG_CPU_IDLE_GOV_HALTPOLL) += haltpoll.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
obj-$(CONFIG_CPU_IDLE_GOV_QCOM_LPM) += qcom_lpm.o
qcom_lpm-objs += qcom-cluster-lpm.o qcom-lpm-sysfs.o qcom-lpm.o
obj-$(CONFIG_CPU_IDLE_SIMPLE_GOV_QCOM_LPM) += qcom_simple_lpm.o
qcom_simple_lpm-objs += qcom-simple-cluster-lpm.o qcom-simple-lpm-sysfs.o qcom-simple-lpm.o
