# SPDX-License-Identifier: GPL-2.0
#
# Qualcomm firmware interfaces, as the 6.12 soc-repo built them, without its
# pKVM directories (redwood does not run pKVM)
#

ccflags-y += -I$(src)

obj-y += si_core/

obj-$(CONFIG_QCOM_SCM) += qcom-scm.o
qcom-scm-objs += qcom_scm-legacy.o qcom_scm-smc.o qcom_scm.o
qcom-scm-$(CONFIG_QTEE_SHM_BRIDGE) += qtee_shmbridge.o
qcom-scm-$(CONFIG_MSM_HAB) += qcom_scm_hab.o
qcom-scm-$(CONFIG_QCOM_TZMEM) += qcom_tzmem.o
qcom-scm-$(CONFIG_QCOM_TZMEM_FFA) += qcom_tzmem_ffa.o

ifeq ($(CONFIG_QCOM_SCM_SMCI),)
qcom-scm-y += qcom_scm-scm.o
endif

obj-$(CONFIG_QCOM_SCM_SMCI) += qcom_scm_smci.o
qcom_scm_smci-$(CONFIG_QCOM_SCM_SMCI) += qcom_scm-smcinvoke.o
