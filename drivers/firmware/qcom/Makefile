# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the linux kernel.
#

obj-$(CONFIG_QCOM_SCM)		+= qcom-scm.o
qcom-scm-objs += qcom_scm.o qcom_scm-smc.o qcom_scm-legacy.o
obj-$(CONFIG_QCOM_TZMEM)	+= qcom_tzmem.o
obj-$(CONFIG_QCOM_QSEECOM)	+= qcom_qseecom.o
obj-$(CONFIG_QCOM_QSEECOM_UEFISECAPP) += qcom_qseecom_uefisecapp.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
obj-$(CONFIG_QCOM_SCM_SMCI) += qcom_scm_smci.o
qcom_scm_smci-$(CONFIG_QCOM_SCM_SMCI) += qcom_scm-smcinvoke.o
