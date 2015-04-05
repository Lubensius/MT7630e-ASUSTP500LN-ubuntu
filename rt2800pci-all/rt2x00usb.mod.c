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
	{ 0x2f7c36b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1c7615e6, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5dca6911, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1de1edc6, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4628d93f, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0x5c11e058, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa799c6b4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xc2a29499, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x348c90bf, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0xd40211b1, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3e62dcee, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9b8c2a0c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95bd7076, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x17c9a32a, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0x7486f88d, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5495276, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xe228631b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfa6a58d0, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9e0f72ec, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7768e72, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x5309d71b, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0xa031bbba, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x61dc5785, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "906CDFFBFD9DD644BF21398");
