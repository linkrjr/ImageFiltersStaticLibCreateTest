#!/bin/sh
# define output folder environment variable
UNIVERSAL_OUTPUTFOLDER=${BUILD_DIR}/${CONFIGURATION}-universal

# Step 1. Build Device and Simulator versions
xcodebuild -target ImageFiltersStaticLibCreateTest ONLY_ACTIVE_ARCH=YES -configuration ${CONFIGURATION} -sdk iphoneos -arch ARM7 BUILD_DIR="${BUILD_DIR}" BUILD_ROOT="${BUILD_ROOT}"

