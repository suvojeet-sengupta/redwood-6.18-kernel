// SPDX-License-Identifier: GPL-2.0-only
/*
 * Qualcomm's device trees describe a "qcom,lpm-cluster-dev" node as a
 * consumer of the CPU cluster power domain, for Qualcomm's qcom_lpm cluster
 * governor. Since 6.17 genpd keeps a domain that was on at boot powered on
 * until every consumer has probed (sync_state). With no driver for this node
 * the cluster domain never syncs, so the CPU cluster never enters its idle
 * states and the SoC never reaches AOSS, CX or DDR sleep.
 *
 * Bind the node with runtime PM enabled and nothing else, so the cluster
 * domain syncs once its real consumers (the CPUs and the RPMh RSC) are
 * ready, and genpd's CPU domain governor picks the cluster idle states.
 */

#include <linux/mod_devicetable.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/pm_runtime.h>

static int qcom_lpm_cluster_dev_probe(struct platform_device *pdev)
{
	return devm_pm_runtime_enable(&pdev->dev);
}

static const struct of_device_id qcom_lpm_cluster_dev_match[] = {
	{ .compatible = "qcom,lpm-cluster-dev" },
	{ }
};
MODULE_DEVICE_TABLE(of, qcom_lpm_cluster_dev_match);

static struct platform_driver qcom_lpm_cluster_dev_driver = {
	.probe = qcom_lpm_cluster_dev_probe,
	.driver = {
		.name = "qcom-lpm-cluster-dev",
		.of_match_table = qcom_lpm_cluster_dev_match,
		.suppress_bind_attrs = true,
	},
};
module_platform_driver(qcom_lpm_cluster_dev_driver);

MODULE_DESCRIPTION("Qualcomm LPM cluster device, so the CPU cluster domain syncs");
MODULE_LICENSE("GPL");
