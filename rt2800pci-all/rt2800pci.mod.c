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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf31e7087, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xf45a401d, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x613a5fe7, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xd2e12c59, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x73b288dd, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0xec3ce5bb, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x79b64825, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x6ce38906, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x542c1610, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0xc38938fa, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0xd3dd0064, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0xcc1f3d69, __VMLINUX_SYMBOL_STR(rt2800_get_tkip_seq) },
	{ 0xe2d85bec, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x88abe23d, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xebc84b94, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xf4b74bc5, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x311cfe2e, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x4367f005, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xe46f5e75, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xe0277873, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x6e563b91, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x5b121ff0, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x5ddc8296, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xe67e77b3, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xc9fe6664, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x41aacbdd, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x30adf45e, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0xd2bd9d21, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x4461ac6e, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x463caee0, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x3ca1e8f1, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x51faa8d, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0xa1a90872, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x98c7e70f, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0x7ff14445, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x1550bca, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xe22c6fd6, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x30081b1c, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0xd2906ecf, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x5e93cb8e, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x142c1489, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xd24531f3, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x6fe2643e, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x5e342546, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0x93db694, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0xc7127ce4, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x5c717502, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xb542fd15, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xadcd4520, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xf2249b49, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x971b0551, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x7ac3714, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5551511f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x30707539, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xa586e1ee, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x7ac2829d, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0x696a20b8, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xde28c65, __VMLINUX_SYMBOL_STR(RTMPHandleTxRing8DmaDoneInterrupt) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc2a29499, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xfb6bb6df, __VMLINUX_SYMBOL_STR(rt2800_disable_radio) },
	{ 0x392a9a6f, __VMLINUX_SYMBOL_STR(AsicWaitPDMAIdle) },
	{ 0x58a72caf, __VMLINUX_SYMBOL_STR(RTMPEnableRxTx) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x596a1f45, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
	{ 0xc494d1b5, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x59ce1da5, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0xd5e9af8e, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x803112f0, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9b8c2a0c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9b44a039, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x2a27d4f9, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xb9c3dbe8, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xc5ec0faa, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "19467ADB8A19DB041D27DB2");
