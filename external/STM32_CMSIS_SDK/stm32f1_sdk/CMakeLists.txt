add_library(stm32f1_sdk 
    utils_pif_asm.s
    utils_pif.c    
)

target_include_directories(stm32f1_sdk PUBLIC ./)
target_link_libraries(stm32f1_sdk PUBLIC config)