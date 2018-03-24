			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/pci.h>

	int
	dummy(struct pci_dev *dev, struct msix_entry *entries, int nvec) {
		return pci_enable_msix(dev, entries, nvec);
	}
