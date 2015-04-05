#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf31e7087, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xf45a401d, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xc9e957cb, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x95bee004, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x613a5fe7, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xd2e12c59, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x2a488aa8, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xe2d85bec, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x88abe23d, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xebc84b94, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x311cfe2e, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x4367f005, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xe46f5e75, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xe0277873, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x6e563b91, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x5b121ff0, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x5ddc8296, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xe67e77b3, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xe22c6fd6, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x5e342546, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0x93db694, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0xadcd4520, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xf2249b49, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x971b0551, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x7ac3714, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5551511f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x696a20b8, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0xa586e1ee, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf15ca0ca, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9b8c2a0c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x6a91d45b, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf33d45a1, __VMLINUX_SYMBOL_STR(rt2x00queue_map_txskb) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc9fe6664, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc5ec0faa, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DF39979D1D28C32F6AD2648");
