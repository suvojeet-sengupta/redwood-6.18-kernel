# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_RPMSG)		+= rpmsg_core.o
obj-$(CONFIG_RPMSG_CHAR)	+= rpmsg_char.o
obj-$(CONFIG_RPMSG_CTRL)	+= rpmsg_ctrl.o
obj-$(CONFIG_RPMSG_NS)		+= rpmsg_ns.o
obj-$(CONFIG_RPMSG_MTK_SCP)	+= mtk_rpmsg.o
CFLAGS_qcom_glink_native.o	:= -I$(src)
qcom_glink-objs			:= qcom_glink_native.o qcom_glink_ssr.o
obj-$(CONFIG_RPMSG_QCOM_GLINK) += qcom_glink.o
obj-$(CONFIG_RPMSG_QCOM_GLINK_RPM) += qcom_glink_rpm.o
obj-$(CONFIG_RPMSG_QCOM_GLINK_SMEM) += qcom_glink_smem.o
obj-$(CONFIG_RPMSG_QCOM_SMD)	+= qcom_smd.o
obj-$(CONFIG_RPMSG_VIRTIO)	+= virtio_rpmsg_bus.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
obj-$(CONFIG_QCOM_GLINK_PKT) += glink_pkt.o
obj-$(CONFIG_RPMSG_QCOM_GLINK_SPSS) += qcom_glink_spss.o
obj-$(CONFIG_RPMSG_QCOM_GLINK_CMA) += qcom_glink_cma.o
qcom_glink_cma-objs += virtio_glink_cma.o qcom_glink_cma_core.o
obj-$(CONFIG_RPMSG_QCOM_GLINK_SLATECOM) += qcom_glink_slatecom.o
obj-$(CONFIG_MSM_RPM_SMD) += rpm-smd.o
obj-$(CONFIG_MSM_RPM_SMD) += rpm_dump.o
