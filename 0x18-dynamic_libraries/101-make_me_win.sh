#!/bin/bash
wget -P /tmp_test https://raw.githubusercontent.com/A-bdallah/alx-low_level_programming/master/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
