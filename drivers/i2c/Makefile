# SPDX-License-Identifier: GPL-2.0

obj-$(CONFIG_I2C_BOARDINFO)	+= i2c-boardinfo.o
obj-$(CONFIG_I2C)		+= i2c-core.o
i2c-core-y			:= i2c-core-base.o i2c-core-smbus.o
i2c-core-$(CONFIG_ACPI)		+= i2c-core-acpi.o
i2c-core-$(CONFIG_I2C_SLAVE)	+= i2c-core-slave.o
i2c-core-$(CONFIG_OF)		+= i2c-core-of.o
i2c-core-$(CONFIG_OF_DYNAMIC)	+= i2c-core-of-prober.o
ccflags-y += -I$(src)

obj-$(CONFIG_I2C_MUX) += i2c-mux.o
obj-y += muxes/
