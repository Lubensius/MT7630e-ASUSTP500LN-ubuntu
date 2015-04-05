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
	{ 0xc9e957cb, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x95bee004, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x613a5fe7, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xd2e12c59, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x2a488aa8, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
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
	{ 0xff5dffd6, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x9653a781, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x63f3f184, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xe266f558, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xf211f695, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xd05f17f0, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xa133aa44, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xa8e3d4a1, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xd9773798, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x33e7e3bc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd37bada7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9a4cc518, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf15ca0ca, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78659ffc, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x98dd1db1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1f290fed, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e7be897, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd40211b1, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xcc7bc244, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5ea6996d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9817f811, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EABED27DBE3ACEFE5E5C41C");
