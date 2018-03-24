define intel_driver
$(1)@fetch	:= test -e /home/wangbojing/share/netmap/LINUX/ext-drivers/$(1)-$(2).tar.gz || wget https://sourceforge.net/projects/e1000/files/$(1)%20stable/$(2)/$(1)-$(2).tar.gz -P /home/wangbojing/share/netmap/LINUX/ext-drivers/
$(1)@src 	:= tar xf /home/wangbojing/share/netmap/LINUX/ext-drivers/$(1)-$(2).tar.gz && ln -s $(1)-$(2)/src $(1)
$(1)@patch 	:= patches/intel--$(1)--$(2)
$(1)@build 	:= make -C $(1) CFLAGS_EXTRA="$($(1)@cflags) $(EXTRA_CFLAGS)"  NETMAP_DRIVER_SUFFIX= KSRC=/lib/modules/4.4.16/build
$(1)@install 	:= make -C $(1) install INSTALL_MOD_PATH= CFLAGS_EXTRA="$($(1)@cflags) $(EXTRA_CFLAGS)" NETMAP_DRIVER_SUFFIX= KSRC=/lib/modules/4.4.16/build
$(1)@clean 	:= if [ -d $(1) ]; then make -C $(1) clean CFLAGS_EXTRA="$($(1)@cflags) $(EXTRA_CFLAGS)" NETMAP_DRIVER_SUFFIX= KSRC=/lib/modules/4.4.16/build; fi
$(1)@distclean	:= rm -rf $(1)-$(2)
$(1)@force	:= 1
endef

enabled_intel_driver = $(if $(filter $(1),$(E_DRIVERS)),$(eval $(call intel_driver,$(1),$(2))))

$(call enabled_intel_driver,ixgbe,5.2.3)
$(call enabled_intel_driver,ixgbevf,4.2.1)
e1000e@cflags := -fno-pie
$(call enabled_intel_driver,e1000e,3.3.6)
igb@cflags := -DDISABLE_PACKET_SPLIT -fno-pie
$(call enabled_intel_driver,igb,5.3.5.12)
$(call enabled_intel_driver,i40e,2.1.26)
