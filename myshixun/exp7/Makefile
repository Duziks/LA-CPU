ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

# 顶层模块路径（相对根目录）
TOP_MODULE = soc/soc_lite_top.sv
# SV模块搜索目录（mycpu和soc目录）
SV_SEARCH_DIRS = mycpu soc
# 生成搜索目录参数（-Imycpu -Isoc）
SV_INC_FLAGS = $(addprefix -I,$(SV_SEARCH_DIRS))
# Verilator工具路径配置
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

default:
	$(VERILATOR) -cc \
		--trace-fst \
		--exe \
		--build \
		--quiet \
		-j \
		$(SV_INC_FLAGS) \
		$(TOP_MODULE) \
		main.cpp
	@echo "-- RUN ---------------------"
	obj_dir/Vsoc_lite_top
	@echo "-- DONE --------------------"


clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd *.fst *.vcd core.*

