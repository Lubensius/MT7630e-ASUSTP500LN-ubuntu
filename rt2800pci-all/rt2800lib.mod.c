#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xaeed8965, __VMLINUX_SYMBOL_STR(AsicInitTxRxRing) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1c7615e6, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x7cfd3fa2, __VMLINUX_SYMBOL_STR(rt2x00lib_get_bssidx) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xaa1f201b, __VMLINUX_SYMBOL_STR(RTMPusecDelay) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x870c1507, __VMLINUX_SYMBOL_STR(SendAndesAFH) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf44ccf18, __VMLINUX_SYMBOL_STR(Set_BtDump_Proc) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2a488aa8, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98dd1db1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6a91d45b, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x2e12f5e5, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x1faf4bb4, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x32d73aaf, __VMLINUX_SYMBOL_STR(MLMEHook) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5d3c89b7, __VMLINUX_SYMBOL_STR(NICUpdateRawCounters) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf15ca0ca, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1a703ba1, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x67106a73, __VMLINUX_SYMBOL_STR(BtAFHCtl) },
	{ 0x6c2ec4b8, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211,crc-ccitt";


MODULE_INFO(srcversion, "83AC0EDA5C5FB97E179FF0E");
