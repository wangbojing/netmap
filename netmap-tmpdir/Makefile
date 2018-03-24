SRCDIR=/home/wangbojing/share/netmap/LINUX
ifneq ($(KERNELRELEASE),)
obj-m := __test__77.o __test__76.o __test__75.o __test__74.o __test__73.o __test__72.o __test__71.o __test__70.o __test__69.o __test__68.o __test__67.o __test__66.o __test__65.o __test__64.o __test__63.o __test__62.o __test__61.o __test__60.o __test__59.o __test__58.o __test__57.o __test__56.o __test__55.o __test__54.o __test__53.o __test__52.o __test__51.o __test__50.o __test__49.o __test__48.o __test__47.o __test__46.o __test__45.o __test__44.o __test__43.o __test__42.o __test__41.o __test__40.o __test__39.o __test__38.o __test__37.o __test__36.o __test__35.o __test__34.o __test__33.o __test__32.o __test__31.o __test__30.o __test__29.o __test__28.o __test__27.o __test__26.o __test__25.o __test__24.o __test__23.o __test__22.o __test__21.o __test__20.o __test__19.o __test__18.o __test__17.o __test__16.o __test__15.o __test__14.o __test__13.o __test__12.o __test__11.o __test__10.o __test__9.o __test__8.o __test__7.o __test__6.o __test__5.o __test__4.o __test__3.o __test__2.o __test__1.o 
else
S_DRIVERS := i40e ixgbevf ixgbe igb e1000e e1000 veth.c forcedeth.c virtio_net.c
E_DRIVERS := i40e ixgbevf ixgbe igb e1000e
I_DRIVERS := e1000 veth.c forcedeth.c virtio_net.c
all: $(S_DRIVERS:%=get-%) $(E_DRIVERS:%=build-%) $(I_DRIVERS:%=patch-%) tests

tests:
	$(MAKE) -C /lib/modules/4.4.16/build M=$$PWD 

-include /home/wangbojing/share/netmap/default-config.mak
-include /home/wangbojing/share/netmap/config.mak
-include /home/wangbojing/share/netmap/drivers.mak
get-i40e:
	$(i40e@fetch)
	$(i40e@src)
	touch get-i40e
build-i40e: get-i40e
	+$(i40e@build)
	touch build-i40e
patch-i40e: get-i40e
	$(foreach p,$(i40e@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-i40e
get-ixgbevf:
	$(ixgbevf@fetch)
	$(ixgbevf@src)
	touch get-ixgbevf
build-ixgbevf: get-ixgbevf
	+$(ixgbevf@build)
	touch build-ixgbevf
patch-ixgbevf: get-ixgbevf
	$(foreach p,$(ixgbevf@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-ixgbevf
get-ixgbe:
	$(ixgbe@fetch)
	$(ixgbe@src)
	touch get-ixgbe
build-ixgbe: get-ixgbe
	+$(ixgbe@build)
	touch build-ixgbe
patch-ixgbe: get-ixgbe
	$(foreach p,$(ixgbe@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-ixgbe
get-igb:
	$(igb@fetch)
	$(igb@src)
	touch get-igb
build-igb: get-igb
	+$(igb@build)
	touch build-igb
patch-igb: get-igb
	$(foreach p,$(igb@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-igb
get-e1000e:
	$(e1000e@fetch)
	$(e1000e@src)
	touch get-e1000e
build-e1000e: get-e1000e
	+$(e1000e@build)
	touch build-e1000e
patch-e1000e: get-e1000e
	$(foreach p,$(e1000e@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-e1000e
get-e1000:
	$(e1000@fetch)
	$(e1000@src)
	touch get-e1000
build-e1000: get-e1000
	+$(e1000@build)
	touch build-e1000
patch-e1000: get-e1000
	$(foreach p,$(e1000@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-e1000
get-veth.c:
	$(veth.c@fetch)
	$(veth.c@src)
	touch get-veth.c
build-veth.c: get-veth.c
	+$(veth.c@build)
	touch build-veth.c
patch-veth.c: get-veth.c
	$(foreach p,$(veth.c@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-veth.c
get-forcedeth.c:
	$(forcedeth.c@fetch)
	$(forcedeth.c@src)
	touch get-forcedeth.c
build-forcedeth.c: get-forcedeth.c
	+$(forcedeth.c@build)
	touch build-forcedeth.c
patch-forcedeth.c: get-forcedeth.c
	$(foreach p,$(forcedeth.c@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-forcedeth.c
get-virtio_net.c:
	$(virtio_net.c@fetch)
	$(virtio_net.c@src)
	touch get-virtio_net.c
build-virtio_net.c: get-virtio_net.c
	+$(virtio_net.c@build)
	touch build-virtio_net.c
patch-virtio_net.c: get-virtio_net.c
	$(foreach p,$(virtio_net.c@patch),patch --posix --quiet --force -p1 < $(p);)
	touch patch-virtio_net.c
endif
