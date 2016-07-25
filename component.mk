# Component makefile for extras/arduino-compat

INC_DIRS += $(arduino-compat_ROOT)

# args for passing into compile rule generation
arduino-compat_SRC_DIR =  $(arduino-compat_ROOT)

$(eval $(call component_compile_rules,arduino-compat))

