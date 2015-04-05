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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3616ceb8, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xbe62c3bb, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x668a4db7, __VMLINUX_SYMBOL_STR(MT76x0_WLAN_ChipOnOff) },
	{ 0x1de1edc6, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0x8253f570, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xae074132, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x79e3ba1, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa3fb0713, __VMLINUX_SYMBOL_STR(RTMPAllocTxRxRingMemory) },
	{ 0xaf97e151, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0x348c90bf, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0xd4ff98d2, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x941eab6b, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x3a04f572, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa637f8fc, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe5495276, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xe228631b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x3c5761a8, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x1d4aa0c0, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5309d71b, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0xa031bbba, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x6e349f33, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "E653A6FA80AF2678A04266D");
