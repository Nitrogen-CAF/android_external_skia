
###############################################################################
#
# THIS FILE IS AUTOGENERATED BY GYP_TO_ANDROID.PY. DO NOT EDIT.
#
# For bugs, please contact scroggo@google.com or djsollen@google.com
#
###############################################################################

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_CFLAGS += \
	local_cflags

LOCAL_CPPFLAGS := \
	local_cppflags

LOCAL_SRC_FILES := \
	local_src_files

LOCAL_SHARED_LIBRARIES := \
	local_shared_libraries

LOCAL_STATIC_LIBRARIES := \
	local_static_libraries

LOCAL_C_INCLUDES := \
	local_c_includes

LOCAL_EXPORT_C_INCLUDE_DIRS := \
	local_export_c_include_dirs

LOCAL_CFLAGS += \
	-Ddefines

LOCAL_MODULE_TAGS := \
	local_module_tags

LOCAL_MODULE := \
	local_module

LOCAL_PICKUP_FILES := \
	$(LOCAL_PATH)/../resources

include $(BUILD_NATIVE_TEST)
