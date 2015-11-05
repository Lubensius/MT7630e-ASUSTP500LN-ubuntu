# MT7630e-ASUSTP500LN-ubuntu
Working WiFi module for MEDIATEK Corp. MT7630e 802.11bgn Wireless Network Adapter in ASUS TP500LN. Bugfixed version of original MEDIATEK driver.

This is just a bugfixed version of the original module downloaded from the MEDIATEK page:
http://www.mediatek.com/en/downloads/mt7630-pcie/

Proven to work on my ASUS TN500LN with Ubuntu 14.04 LTS and Kernel 3.13.0-37-generic up to 3.13.0-48-generic
Proven to work on my ASUS TN500LN with Android-x86-4.4-rc1

This is work in progress on low resources (nice 20 ;-) ) , but feel free to include changes in active your development. 
Changes:
* Add possibility to disable excessive logging.
* Fixed stack overflow due to self recursion in interrupt handler

Open Points:
* WiFi Signal Quality doesn't report correctly (always full reading)
* Sometimes (rare) NOP after suspend, but also maybe ubuntu issue. 

UPDATE:
Make BT module working:
After switch on of the device it is has no firmware. In this stage the device reports 0x0489:0xe069.
So the firmwareloader has to react on this. mt76xx is nothing but a firmewareloader.
With correct firmware the device is recognised by btusb module.

INSTALL:
!!!You need to have all packages necessary to build kernel modules as well as dkms installed!!!

as root do
# Put rt2800pci-all and mt76xx-all directories under /usr/src/
# Put *.bin files in firmware under /lib/firmware
# dkms install -m rt2800pci -v all 
# dkms install -m mt76xx -v all 
# echo mt76xx >/etc/modules-load.d/Bluetooth.conf
# shutdown, switch off and reboot

Enjoy
