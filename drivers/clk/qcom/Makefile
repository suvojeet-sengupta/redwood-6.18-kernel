# SPDX-License-Identifier: GPL-2.0

clk-qcom-y += common.o
clk-qcom-y += clk-regmap.o
clk-qcom-y += clk-alpha-pll.o
clk-qcom-y += clk-pll.o
clk-qcom-y += clk-rcg.o
clk-qcom-y += clk-rcg2.o
clk-qcom-y += clk-branch.o
clk-qcom-y += clk-regmap-divider.o
clk-qcom-y += clk-regmap-mux.o
clk-qcom-y += clk-regmap-mux-div.o
clk-qcom-y += clk-regmap-phy-mux.o
clk-qcom-$(CONFIG_KRAIT_CLOCKS) += clk-krait.o
clk-qcom-y += clk-hfpll.o
clk-qcom-y += reset.o
clk-qcom-$(CONFIG_QCOM_GDSC) += gdsc.o

# Keep alphabetically sorted by config
obj-$(CONFIG_APQ_GCC_8084) += gcc-apq8084.o
obj-$(CONFIG_APQ_MMCC_8084) += mmcc-apq8084.o
obj-$(CONFIG_CLK_GFM_LPASS_SM8250) += lpass-gfm-sm8250.o
obj-$(CONFIG_CLK_GLYMUR_DISPCC) += dispcc-glymur.o
obj-$(CONFIG_CLK_GLYMUR_GCC) += gcc-glymur.o
obj-$(CONFIG_CLK_GLYMUR_TCSRCC) += tcsrcc-glymur.o
ccflags-y += -I$(src)

obj-$(CONFIG_CLK_SHIKRA_DEBUGCC) += debugcc-shikra.o

obj-$(CONFIG_CLK_SHIKRA_DISPCC) += dispcc-shikra.o

obj-$(CONFIG_CLK_SHIKRA_GCC) += gcc-shikra.o

obj-$(CONFIG_CLK_SHIKRA_GPUCC) += gpucc-shikra.o

obj-$(CONFIG_CLK_X1E80100_CAMCC) += camcc-x1e80100.o

obj-$(CONFIG_CLK_X1E80100_DISPCC) += dispcc-x1e80100.o

obj-$(CONFIG_CLK_X1E80100_GCC) += gcc-x1e80100.o

obj-$(CONFIG_CLK_X1E80100_GPUCC) += gpucc-x1e80100.o

obj-$(CONFIG_CLK_X1E80100_TCSRCC) += tcsrcc-x1e80100.o
obj-$(CONFIG_CLK_X1P42100_GPUCC) += gpucc-x1p42100.o
obj-$(CONFIG_CLK_QCM2290_GPUCC) += gpucc-qcm2290.o
obj-$(CONFIG_IPQ_APSS_PLL) += apss-ipq-pll.o
obj-$(CONFIG_IPQ_APSS_5424) += apss-ipq5424.o
obj-$(CONFIG_IPQ_APSS_6018) += apss-ipq6018.o
obj-$(CONFIG_IPQ_CMN_PLL) += ipq-cmn-pll.o
obj-$(CONFIG_IPQ_GCC_4019) += gcc-ipq4019.o
obj-$(CONFIG_IPQ_GCC_5018) += gcc-ipq5018.o
obj-$(CONFIG_IPQ_GCC_5332) += gcc-ipq5332.o
obj-$(CONFIG_IPQ_GCC_5424) += gcc-ipq5424.o
obj-$(CONFIG_IPQ_GCC_6018) += gcc-ipq6018.o
obj-$(CONFIG_IPQ_GCC_806X) += gcc-ipq806x.o
obj-$(CONFIG_IPQ_GCC_8074) += gcc-ipq8074.o
obj-$(CONFIG_IPQ_GCC_9574) += gcc-ipq9574.o
obj-$(CONFIG_IPQ_NSSCC_9574)	+= nsscc-ipq9574.o
obj-$(CONFIG_IPQ_LCC_806X) += lcc-ipq806x.o
obj-$(CONFIG_IPQ_NSSCC_QCA8K) += nsscc-qca8k.o
obj-$(CONFIG_MDM_GCC_9607) += gcc-mdm9607.o
obj-$(CONFIG_MDM_GCC_9615) += gcc-mdm9615.o
obj-$(CONFIG_MSM_GCC_8660) += gcc-msm8660.o
obj-$(CONFIG_MSM_GCC_8909) += gcc-msm8909.o
obj-$(CONFIG_MSM_GCC_8916) += gcc-msm8916.o
obj-$(CONFIG_MSM_GCC_8917) += gcc-msm8917.o
obj-$(CONFIG_MSM_GCC_8939) += gcc-msm8939.o
obj-$(CONFIG_MSM_GCC_8953) += gcc-msm8953.o
obj-$(CONFIG_MSM_GCC_8960) += gcc-msm8960.o
obj-$(CONFIG_MSM_GCC_8974) += gcc-msm8974.o
obj-$(CONFIG_MSM_GCC_8976) += gcc-msm8976.o
obj-$(CONFIG_MSM_GCC_8994) += gcc-msm8994.o
obj-$(CONFIG_MSM_GCC_8996) += gcc-msm8996.o
obj-$(CONFIG_MSM_LCC_8960) += lcc-msm8960.o
obj-$(CONFIG_MSM_GCC_8998) += gcc-msm8998.o
obj-$(CONFIG_MSM_GPUCC_8998) += gpucc-msm8998.o
obj-$(CONFIG_MSM_MMCC_8960) += mmcc-msm8960.o
obj-$(CONFIG_MSM_MMCC_8974) += mmcc-msm8974.o
obj-$(CONFIG_MSM_MMCC_8994) += mmcc-msm8994.o
obj-$(CONFIG_MSM_MMCC_8996) += mmcc-msm8996.o
obj-$(CONFIG_MSM_MMCC_8998) += mmcc-msm8998.o
obj-$(CONFIG_QCOM_A53PLL) += a53-pll.o
obj-$(CONFIG_QCOM_A7PLL) += a7-pll.o
obj-$(CONFIG_QCOM_CLK_APCS_MSM8916) += apcs-msm8916.o
obj-$(CONFIG_QCOM_CLK_APCC_MSM8996) += apcs-msm8996.o clk-cpu-8996.o clk-cbf-8996.o
obj-$(CONFIG_QCOM_CLK_APCS_SDX55) += apcs-sdx55.o
obj-$(CONFIG_QCOM_CLK_RPM) += clk-rpm.o

obj-$(CONFIG_CLK_X1P42100_GPUCC) += gpucc-x1p42100.o

obj-$(CONFIG_COMMON_CLK_QCOM) += clk-dummy.o

obj-$(CONFIG_COMMON_CLK_QCOM) += clk-qcom.o
clk-qcom-objs += clk-alpha-pll.o clk-branch.o clk-debug.o clk-hfpll.o clk-opp.o clk-pll.o clk-pm.o clk-rcg.o clk-rcg2.o clk-regmap-divider.o clk-regmap-mux-div.o clk-regmap-mux.o clk-regmap-phy-mux.o clk-regmap.o common.o reset.o vdd-class.o
clk-qcom-$(CONFIG_KRAIT_CLOCKS) += clk-krait.o
clk-qcom-$(CONFIG_QCOM_GDSC) += gdsc.o gdsc-debug.o

obj-$(CONFIG_QCM_DEBUGCC_2290) += debugcc-qcm2290.o

obj-$(CONFIG_QCM_DISPCC_2290) += dispcc-qcm2290.o

obj-$(CONFIG_QCM_GCC_2290) += gcc-qcm2290.o

obj-$(CONFIG_QCM_GPUCC_2290) += gpucc-qcm2290.o

obj-$(CONFIG_QCOM_CLK_RPMH) += clk-rpmh.o

obj-$(CONFIG_QCOM_CLK_SMD_RPM) += clk-smd-rpm.o
obj-$(CONFIG_QCM_GCC_2290) += gcc-qcm2290.o
obj-$(CONFIG_QCM_DISPCC_2290) += dispcc-qcm2290.o
obj-$(CONFIG_QCS_DISPCC_615) += dispcc-qcs615.o
obj-$(CONFIG_QCS_CAMCC_615) += camcc-qcs615.o
obj-$(CONFIG_QCS_GCC_404) += gcc-qcs404.o
obj-$(CONFIG_QCS_GCC_615) += gcc-qcs615.o
obj-$(CONFIG_QCS_GCC_8300) += gcc-qcs8300.o
obj-$(CONFIG_QCS_GPUCC_615) += gpucc-qcs615.o
obj-$(CONFIG_QCS_VIDEOCC_615) += videocc-qcs615.o
obj-$(CONFIG_QCS_Q6SSTOP_404) += q6sstop-qcs404.o
obj-$(CONFIG_QCS_TURING_404) += turingcc-qcs404.o
obj-$(CONFIG_QDU_ECPRICC_1000) += ecpricc-qdu1000.o
obj-$(CONFIG_QDU_GCC_1000) += gcc-qdu1000.o
obj-$(CONFIG_SC_CAMCC_7180) += camcc-sc7180.o
obj-$(CONFIG_SC_CAMCC_7280) += camcc-sc7280.o
obj-$(CONFIG_SC_CAMCC_8180X) += camcc-sc8180x.o
obj-$(CONFIG_SC_CAMCC_8280XP) += camcc-sc8280xp.o
obj-$(CONFIG_SC_DISPCC_7180) += dispcc-sc7180.o
obj-$(CONFIG_SC_DISPCC_7280) += dispcc-sc7280.o
obj-$(CONFIG_SC_DISPCC_8280XP) += dispcc-sc8280xp.o
obj-$(CONFIG_SA_CAMCC_8775P) += camcc-sa8775p.o
obj-$(CONFIG_SA_DISPCC_8775P) += dispcc0-sa8775p.o dispcc1-sa8775p.o
obj-$(CONFIG_SA_GCC_8775P) += gcc-sa8775p.o
obj-$(CONFIG_SA_GPUCC_8775P) += gpucc-sa8775p.o
obj-$(CONFIG_SA_VIDEOCC_8775P) += videocc-sa8775p.o
obj-$(CONFIG_SAR_GCC_2130P) += gcc-sar2130p.o
obj-$(CONFIG_SAR_GPUCC_2130P) += gpucc-sar2130p.o
obj-$(CONFIG_SC_GCC_7180) += gcc-sc7180.o

obj-$(CONFIG_QCOM_GDSC_REGULATOR) += gdsc-regulator.o

obj-$(CONFIG_SC_AV1ECC_X1P42100) += av1ecc-x1p42100.o

obj-$(CONFIG_SC_CAMCC_7280) += camcc-sc7280.o

obj-$(CONFIG_SC_CAMCC_X1P42100) += camcc-x1p42100.o

obj-$(CONFIG_SC_DEBUGCC_7280) += debugcc-sc7280.o

obj-$(CONFIG_SC_DEBUGCC_X1E80100) += debugcc-x1e80100.o

obj-$(CONFIG_SC_DISPCC_7280) += dispcc-sc7280.o

obj-$(CONFIG_SC_GCC_7280) += gcc-sc7280.o

obj-$(CONFIG_SC_GCC_X1P42100) += gcc-x1p42100.o

obj-$(CONFIG_SC_GPUCC_7280) += gpucc-sc7280.o

obj-$(CONFIG_SC_VIDEOCC_7280) += videocc-sc7280.o

obj-$(CONFIG_SC_VIDEOCC_X1P42100) += videocc-x1p42100.o

obj-$(CONFIG_SDW_DEBUGCC_MONACO) += debugcc-monaco.o

obj-$(CONFIG_SDW_DEBUGCC_VIENNA) += debugcc-vienna.o

obj-$(CONFIG_SDW_DISPCC_MONACO) += dispcc-monaco.o

obj-$(CONFIG_SDW_GCC_MONACO) += gcc-monaco.o

obj-$(CONFIG_SDW_GCC_VIENNA) += gcc-vienna.o

obj-$(CONFIG_SDW_GPUCC_MONACO) += gpucc-monaco.o

obj-$(CONFIG_SDW_GPUCC_VIENNA) += gpucc-vienna.o

obj-$(CONFIG_SM_CAMBISTMCLKCC_CANOE) += cambistmclkcc-canoe.o

obj-$(CONFIG_SM_CAMBISTMCLKCC_SUN) += cambistmclkcc-sun.o

obj-$(CONFIG_SM_CAMCC_4450) += camcc-sm4450.o
obj-$(CONFIG_SM_CAMCC_6350) += camcc-sm6350.o
obj-$(CONFIG_SM_CAMCC_7150) += camcc-sm7150.o
obj-$(CONFIG_SM_CAMCC_8150) += camcc-sm8150.o
obj-$(CONFIG_SM_CAMCC_8250) += camcc-sm8250.o
obj-$(CONFIG_SM_CAMCC_8450) += camcc-sm8450.o
obj-$(CONFIG_SM_CAMCC_8550) += camcc-sm8550.o
obj-$(CONFIG_SM_CAMCC_8650) += camcc-sm8650.o
obj-$(CONFIG_SM_CAMCC_MILOS) += camcc-milos.o

obj-$(CONFIG_SM_CAMCC_8350) += camcc-sm8350.o

obj-$(CONFIG_SM_CAMCC_ALOR) += camcc-alor.o

obj-$(CONFIG_SM_CAMCC_CANOE) += camcc-canoe.o

obj-$(CONFIG_SM_CAMCC_CHORA) += camcc-chora.o

obj-$(CONFIG_SM_CAMCC_SUN) += camcc-sun.o

obj-$(CONFIG_SM_DEBUGCC_4450) += debugcc-sm4450.o

obj-$(CONFIG_SM_DEBUGCC_6115) += debugcc-sm6115.o

obj-$(CONFIG_SM_DEBUGCC_8350) += debugcc-sm8350.o

obj-$(CONFIG_SM_DEBUGCC_ALOR) += debugcc-alor.o

obj-$(CONFIG_SM_DEBUGCC_CANOE) += debugcc-canoe.o

obj-$(CONFIG_SM_DEBUGCC_CHORA) += debugcc-chora.o

obj-$(CONFIG_SM_DEBUGCC_KHAJE) += debugcc-khaje.o

obj-$(CONFIG_SM_DEBUGCC_MALABAR) += debugcc-malabar.o

obj-$(CONFIG_SM_DEBUGCC_SUN) += debugcc-sun.o

obj-$(CONFIG_SM_DISPCC_4450) += dispcc-sm4450.o

obj-$(CONFIG_SM_DISPCC_6115) += dispcc-sm6115.o
obj-$(CONFIG_SM_DISPCC_6125) += dispcc-sm6125.o
obj-$(CONFIG_SM_DISPCC_6350) += dispcc-sm6350.o
obj-$(CONFIG_SM_DISPCC_6375) += dispcc-sm6375.o
obj-$(CONFIG_SM_DISPCC_7150) += dispcc-sm7150.o
obj-$(CONFIG_SM_DISPCC_8250) += dispcc-sm8250.o
obj-$(CONFIG_SM_DISPCC_8450) += dispcc-sm8450.o
obj-$(CONFIG_SM_DISPCC_8550) += dispcc-sm8550.o
obj-$(CONFIG_SM_DISPCC_8750) += dispcc-sm8750.o
obj-$(CONFIG_SM_DISPCC_MILOS) += dispcc-milos.o

obj-$(CONFIG_SM_DISPCC_8350) += dispcc-sm8350.o

obj-$(CONFIG_SM_DISPCC_CANOE) += dispcc-canoe.o

obj-$(CONFIG_SM_DISPCC_CHORA) += dispcc-chora.o

obj-$(CONFIG_SM_DISPCC_KHAJE) += dispcc-khaje.o

obj-$(CONFIG_SM_DISPCC_MALABAR) += dispcc-malabar.o

obj-$(CONFIG_SM_DISPCC_SUN) += dispcc-sun.o

obj-$(CONFIG_SM_EVACC_CANOE) += evacc-canoe.o

obj-$(CONFIG_SM_EVACC_SUN) += evacc-sun.o

obj-$(CONFIG_SM_GCC_4450) += gcc-sm4450.o

obj-$(CONFIG_SM_GCC_6115) += gcc-sm6115.o

obj-$(CONFIG_SM_GCC_8350) += gcc-sm8350.o
obj-$(CONFIG_SM_GCC_8450) += gcc-sm8450.o
obj-$(CONFIG_SM_GCC_8550) += gcc-sm8550.o
obj-$(CONFIG_SM_GCC_8650) += gcc-sm8650.o
obj-$(CONFIG_SM_GCC_8750) += gcc-sm8750.o
obj-$(CONFIG_SM_GCC_MILOS) += gcc-milos.o

obj-$(CONFIG_SM_GCC_ALOR) += gcc-alor.o

obj-$(CONFIG_SM_GCC_CANOE) += gcc-canoe.o

obj-$(CONFIG_SM_GCC_CHORA) += gcc-chora.o

obj-$(CONFIG_SM_GCC_KHAJE) += gcc-khaje.o

obj-$(CONFIG_SM_GCC_MALABAR) += gcc-malabar.o

obj-$(CONFIG_SM_GCC_SUN) += gcc-sun.o

obj-$(CONFIG_SM_GPUCC_4450) += gpucc-sm4450.o

obj-$(CONFIG_SM_GPUCC_6115) += gpucc-sm6115.o

obj-$(CONFIG_SM_GPUCC_8350) += gpucc-sm8350.o
obj-$(CONFIG_SM_GPUCC_8450) += gpucc-sm8450.o
obj-$(CONFIG_SM_GPUCC_8550) += gpucc-sm8550.o
obj-$(CONFIG_SM_GPUCC_8650) += gpucc-sm8650.o
obj-$(CONFIG_SM_GPUCC_MILOS) += gpucc-milos.o
obj-$(CONFIG_SM_LPASSCC_6115) += lpasscc-sm6115.o
obj-$(CONFIG_SM_TCSRCC_8550) += tcsrcc-sm8550.o
obj-$(CONFIG_SM_TCSRCC_8650) += tcsrcc-sm8650.o
obj-$(CONFIG_SM_TCSRCC_8750) += tcsrcc-sm8750.o
obj-$(CONFIG_SM_VIDEOCC_6350) += videocc-sm6350.o
obj-$(CONFIG_SM_VIDEOCC_7150) += videocc-sm7150.o
obj-$(CONFIG_SM_VIDEOCC_8150) += videocc-sm8150.o
obj-$(CONFIG_SM_VIDEOCC_8250) += videocc-sm8250.o

obj-$(CONFIG_SM_GPUCC_CANOE) += gpucc-canoe.o

obj-$(CONFIG_SM_GPUCC_CHORA) += gpucc-chora.o

obj-$(CONFIG_SM_GPUCC_KHAJE) += gpucc-khaje.o

obj-$(CONFIG_SM_GPUCC_MALABAR) += gpucc-malabar.o

obj-$(CONFIG_SM_GPUCC_SUN) += gpucc-sun.o

obj-$(CONFIG_SM_LPASS_AUDIOCC_6115) += lpassaoncc-sm6115.o

obj-$(CONFIG_SM_LPASS_AUDIOCC_6115) += lpassaudiocc-sm6115.o

obj-$(CONFIG_SM_LPASS_AUDIOCC_KHAJE) += lpassaoncc-khaje.o

obj-$(CONFIG_SM_LPASS_AUDIOCC_KHAJE) += lpassaudiocc-khaje.o

obj-$(CONFIG_SM_TCSRCC_CANOE) += tcsrcc-canoe.o

obj-$(CONFIG_SM_TCSRCC_CHORA) += tcsrcc-chora.o

obj-$(CONFIG_SM_TCSRCC_SUN) += tcsrcc-sun.o

obj-$(CONFIG_SM_VIDEOCC_8350) += videocc-sm8350.o

obj-$(CONFIG_SM_VIDEOCC_8550) += videocc-sm8550.o
obj-$(CONFIG_SM_VIDEOCC_MILOS) += videocc-milos.o

obj-$(CONFIG_SM_VIDEOCC_CANOE) += videocc-canoe.o

obj-$(CONFIG_SM_VIDEOCC_CHORA) += videocc-chora.o

obj-$(CONFIG_SM_VIDEOCC_SUN) += videocc-sun.o

obj-$(CONFIG_SPMI_PMIC_CLKDIV) += clk-spmi-pmic-div.o

obj-$(CONFIG_SXR_CAMCC_PIKACHU) += camcc-pikachu.o

obj-$(CONFIG_SXR_CAMCC_SERAPH) += camcc-seraph.o

obj-$(CONFIG_SXR_DEBUGCC_PIKACHU) += debugcc-pikachu.o

obj-$(CONFIG_SXR_DEBUGCC_SERAPH) += debugcc-seraph.o

obj-$(CONFIG_SXR_EVACC_PIKACHU) += evacc-pikachu.o

obj-$(CONFIG_SXR_EVACC_SERAPH) += evacc-seraph.o

obj-$(CONFIG_SXR_GCC_PIKACHU) += gcc-pikachu.o

obj-$(CONFIG_SXR_GCC_SERAPH) += gcc-seraph.o

obj-$(CONFIG_SXR_GPUCC_PIKACHU) += gpucc-pikachu.o

obj-$(CONFIG_SXR_GPUCC_SERAPH) += gpucc-seraph.o

obj-$(CONFIG_SXR_LSRCC_SERAPH) += lsrcc-seraph.o

obj-$(CONFIG_SXR_TCSRCC_PIKACHU) += tcsrcc-pikachu.o

obj-$(CONFIG_SXR_TCSRCC_SERAPH) += tcsrcc-seraph.o

obj-$(CONFIG_SXR_VIDEOCC_PIKACHU) += videocc-pikachu.o

obj-$(CONFIG_SXR_VIDEOCC_SERAPH) += videocc-seraph.o

obj-$(CONFIG_VIRTIO_CLK) += virtio_clk.o

obj-$(CONFIG_VIRTIO_CLK) += virtio_clk_direwolf.o

obj-$(CONFIG_VIRTIO_CLK) += virtio_clk_lemans.o

obj-$(CONFIG_VIRTIO_CLK) += virtio_clk_monaco.o
