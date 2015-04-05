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
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xed403bb5, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x579ee14f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6716d214, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x7393541c, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xada49ccf, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x25dab3f3, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x2d95e6e6, __VMLINUX_SYMBOL_STR(led_classdev_resume) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdca96084, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xbb9ca457, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ea6996d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6b1c85fb, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x3669d163, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x391cd8af, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xb7827051, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf73546d1, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48d782d8, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x81da267f, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x82783356, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x98dd1db1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x33ce6899, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0xe88929fa, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x9cf94504, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2e12f5e5, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb79c5eaf, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xc4e54872, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf15ca0ca, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4a79c5dc, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x3892e21a, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xfc5abd1d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x3dd0962, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdc2b2322, __VMLINUX_SYMBOL_STR(led_classdev_suspend) },
	{ 0x12a425d3, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x18511b0a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcc7bc244, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa6a439f2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1b6773d7, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xf5741fff, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x1178b0c4, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "21F454D559280C4404DD295");
