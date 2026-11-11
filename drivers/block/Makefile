# SPDX-License-Identifier: GPL-2.0

ccflags-y += -I$(src)

obj-$(CONFIG_MAC_FLOPPY)	+= swim3.o
obj-$(CONFIG_BLK_DEV_SWIM)	+= swim_mod.o
obj-$(CONFIG_BLK_DEV_FD)	+= floppy.o
obj-$(CONFIG_AMIGA_FLOPPY)	+= amiflop.o
obj-$(CONFIG_PS3_DISK)		+= ps3disk.o
obj-$(CONFIG_PS3_VRAM)		+= ps3vram.o
obj-$(CONFIG_ATARI_FLOPPY)	+= ataflop.o
obj-$(CONFIG_AMIGA_Z2RAM)	+= z2ram.o
obj-$(CONFIG_N64CART)		+= n64cart.o
obj-$(CONFIG_BLK_DEV_RAM)	+= brd.o
obj-$(CONFIG_BLK_DEV_LOOP)	+= loop.o
obj-$(CONFIG_SUNVDC)		+= sunvdc.o
# Subdirectories
obj-y += zram/

obj-$(CONFIG_VIRTIO_BLK) += virtio_block.o
virtio_block-objs += virtio_blk.o

obj-$(CONFIG_VIRTIO_BLK_QTI_CRYPTO) += virtio_blk_qti_crypto.o

obj-$(CONFIG_XEN_BLKDEV_FRONTEND)	+= xen-blkfront.o
obj-$(CONFIG_XEN_BLKDEV_BACKEND)	+= xen-blkback/
obj-$(CONFIG_BLK_DEV_DRBD)     += drbd/
obj-$(CONFIG_BLK_DEV_RBD)     += rbd.o
obj-$(CONFIG_BLK_DEV_PCIESSD_MTIP32XX)	+= mtip32xx/

obj-$(CONFIG_ZRAM) += zram/
obj-$(CONFIG_BLK_DEV_RNBD)	+= rnbd/

obj-$(CONFIG_BLK_DEV_NULL_BLK)	+= null_blk/
obj-$(CONFIG_BLK_DEV_RUST_NULL) += rnull/

obj-$(CONFIG_BLK_DEV_UBLK)			+= ublk_drv.o
obj-$(CONFIG_BLK_DEV_ZONED_LOOP) += zloop.o

swim_mod-y	:= swim.o swim_asm.o
