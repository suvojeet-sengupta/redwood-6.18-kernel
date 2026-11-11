obj-$(CONFIG_MHI_BUS) += mhi.o
mhi-y := init.o main.o pm.o boot.o
mhi-$(CONFIG_MHI_BUS_DEBUG) += debugfs.o

obj-$(CONFIG_MHI_BUS_PCI_GENERIC) += mhi_pci_generic.o
mhi_pci_generic-y += pci_generic.o

# Qualcomm (from 6.12 soc-repo)
ccflags-y += -I$(src)
mhi-$(CONFIG_MHI_BUS_MISC) += misc.o
