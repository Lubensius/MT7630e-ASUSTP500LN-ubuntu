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
	{ 0x49c51eb1, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x311cfe2e, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x4367f005, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xe46f5e75, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xe0277873, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x6e563b91, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x5b121ff0, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x5ddc8296, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xe67e77b3, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x9d9e79ca, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0x41aacbdd, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x30adf45e, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x30707539, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xd2bd9d21, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x4461ac6e, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x463caee0, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x3ca1e8f1, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x51faa8d, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0xa1a90872, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x98c7e70f, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0x7ff14445, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x1550bca, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xff5dffd6, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x9653a781, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x30081b1c, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0xd2906ecf, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x5e93cb8e, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x142c1489, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xd24531f3, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x6fe2643e, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0xe266f558, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xf211f695, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xd05f17f0, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xc7127ce4, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x5c717502, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xa133aa44, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xa8e3d4a1, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xd9773798, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x33e7e3bc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd37bada7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x63f3f184, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x596a1f45, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
	{ 0x59ce1da5, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x9a4cc518, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xfb6bb6df, __VMLINUX_SYMBOL_STR(rt2800_disable_radio) },
	{ 0x5f288d56, __VMLINUX_SYMBOL_STR(rt2800_wait_csr_ready) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf15ca0ca, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x803112f0, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0xfa6a58d0, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x2a27d4f9, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x78659ffc, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xb9c3dbe8, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9b8c2a0c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xd5e9af8e, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x6e8bf789, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x9817f811, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xd99e76f6, __VMLINUX_SYMBOL_STR(rt2x00usb_register_read_async) },
	{ 0xb542fd15, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9b44a039, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0x5ea6996d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e7be897, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x1f290fed, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2x00usb";

MODULE_ALIAS("usb:v07B8p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1482p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0740d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1732d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1742d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1784d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1761p0B05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3247d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp8053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp805Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp815Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p015Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p016Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01EEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C16d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp7712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pB307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p4085d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7717d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7718d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp1480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9708d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9709d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0945d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0947d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0948d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0162d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0166d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p870Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p899Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20B8p8888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A32p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap6618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap8522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p5257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3416d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3418d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p343Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp945Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p20DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp8070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0165d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0744d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p179Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v167Bp4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0944d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3365d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp23F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5372d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3073d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p166Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1760d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17A7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3262d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p012Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0148d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148FpF101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A6p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08B9p1197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApD522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0254d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vF201p5370d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4856159FAEA73A18B9B4967");
