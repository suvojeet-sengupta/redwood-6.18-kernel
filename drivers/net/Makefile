# SPDX-License-Identifier: GPL-2.0

#
# Networking Core Drivers
#
obj-$(CONFIG_BONDING) += bonding/
obj-$(CONFIG_IPVLAN) += ipvlan/
obj-$(CONFIG_IPVTAP) += ipvlan/
obj-$(CONFIG_DUMMY) += dummy.o
obj-$(CONFIG_WIREGUARD) += wireguard/
obj-$(CONFIG_OVPN) += ovpn/
obj-$(CONFIG_EQUALIZER) += eql.o
obj-$(CONFIG_IFB) += ifb.o
obj-$(CONFIG_MACSEC) += macsec.o
obj-$(CONFIG_AMT) += amt.o
obj-$(CONFIG_MACVLAN) += macvlan.o
obj-$(CONFIG_MACVTAP) += macvtap.o
obj-$(CONFIG_MII) += mii.o
obj-$(CONFIG_MDIO) += mdio.o
obj-$(CONFIG_NET) += loopback.o
obj-$(CONFIG_NETDEV_LEGACY_INIT) += Space.o
obj-$(CONFIG_NETCONSOLE) += netconsole.o
obj-$(CONFIG_NETKIT) += netkit.o
obj-y += phy/
obj-y += pse-pd/
obj-y += mdio/
ccflags-y += -I$(src)

# Subdirectories
obj-y += ethernet/stmicro/stmmac/
obj-y += mdio_fe/
obj-y += pcs/
obj-y += phy/aquantia/
obj-y += phy/qcom/

#
# Networking Drivers
#
obj-$(CONFIG_ARCNET) += arcnet/
obj-$(CONFIG_CAIF) += caif/
obj-$(CONFIG_CAN) += can/
ifdef CONFIG_NET_DSA
obj-y += dsa/
endif
obj-$(CONFIG_ETHERNET) += ethernet/
obj-$(CONFIG_FDDI) += fddi/
obj-$(CONFIG_HIPPI) += hippi/
obj-$(CONFIG_HAMRADIO) += hamradio/
obj-$(CONFIG_QCOM_IPA) += ipa/
obj-$(CONFIG_PLIP) += plip/
obj-$(CONFIG_PPP) += ppp/
obj-$(CONFIG_PPP_ASYNC) += ppp/
obj-$(CONFIG_PPP_BSDCOMP) += ppp/
obj-$(CONFIG_PPP_DEFLATE) += ppp/
obj-$(CONFIG_PPP_MPPE) += ppp/
obj-$(CONFIG_PPP_SYNC_TTY) += ppp/
obj-$(CONFIG_PPPOE) += ppp/
obj-$(CONFIG_PPPOL2TP) += ppp/
obj-$(CONFIG_PPTP) += ppp/
obj-$(CONFIG_SLIP) += slip/
obj-$(CONFIG_SLHC) += slip/
obj-$(CONFIG_SUNGEM_PHY) += sungem_phy.o
obj-$(CONFIG_WAN) += wan/
obj-$(CONFIG_WLAN) += wireless/
obj-$(CONFIG_IEEE802154) += ieee802154/
obj-$(CONFIG_WWAN) += wwan/
obj-$(CONFIG_MCTP) += mctp/
obj-$(CONFIG_DP83867_PHY) += phy/dp83867.o

obj-$(CONFIG_FAILOVER) += failover.o
failover-objs += ../../net/core/failover.o

obj-$(CONFIG_NET_FAILOVER) += net_failover.o

obj-$(CONFIG_VIRTIO_NET) += virtio_net.o
virtio_net-objs += virtio_net_fixed.o

