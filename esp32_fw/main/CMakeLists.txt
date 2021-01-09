idf_component_register(

SRCS "main.cpp"
SRCS "ap/ap.cpp"
SRCS "bsp/bsp.c"
SRCS "common/core/qbuffer.c"
SRCS "hw/hw.c"
SRCS "hw/driver/uart.c"

INCLUDE_DIRS ""
INCLUDE_DIRS "ap"
INCLUDE_DIRS "bsp"
INCLUDE_DIRS "common"
INCLUDE_DIRS "common/core"
INCLUDE_DIRS "common/hw/include"
INCLUDE_DIRS "hw"
INCLUDE_DIRS "lib"

)