# SPDX-License-Identifier: GPL-2.0

# DEVFREQ Drivers
obj-$(CONFIG_ARM_EXYNOS_BUS_DEVFREQ)	+= exynos-bus.o
obj-$(CONFIG_ARM_HISI_UNCORE_DEVFREQ)	+= hisi_uncore_freq.o
obj-$(CONFIG_ARM_IMX_BUS_DEVFREQ)	+= imx-bus.o
obj-$(CONFIG_ARM_IMX8M_DDRC_DEVFREQ)	+= imx8m-ddrc.o
obj-$(CONFIG_ARM_MEDIATEK_CCI_DEVFREQ)	+= mtk-cci-devfreq.o
obj-$(CONFIG_ARM_RK3399_DMC_DEVFREQ)	+= rk3399_dmc.o
obj-$(CONFIG_ARM_SUN8I_A33_MBUS_DEVFREQ)	+= sun8i-a33-mbus.o
obj-$(CONFIG_ARM_TEGRA_DEVFREQ)		+= tegra30-devfreq.o
ccflags-y += -I$(src)

obj-$(CONFIG_DEVFREQ_GOV_QCOM_GPUBW_MON) += governor_gpubw_mon.o

obj-$(CONFIG_DEVFREQ_GOV_QCOM_ADRENO_TZ) += governor_msm_adreno_tz.o

obj-$(CONFIG_DEVFREQ_GOV_QCOM_ADRENO_RO) += governor_msm_adreno_ro.o

