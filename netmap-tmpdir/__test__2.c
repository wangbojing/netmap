			#include <linux/module.h>
			#include <linux/kernel.h>
			#include <linux/init.h>
	#include <linux/iommu.h>

	void dummy(void)
	{
	        struct iommu_group *grp = iommu_group_get(NULL);
	        int id = iommu_group_id(grp);

	        (void)grp;
	        (void)id;
	}
