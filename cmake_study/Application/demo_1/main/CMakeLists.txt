# 设置demo_1项目
project(demo_1)
add_executable(demo_1 demo1.c demo1.h)
# If you have a library target named 'log_lib' that includes log.c
target_link_libraries(demo_1 Log_Wrapper)
target_include_directories(demo_1 PRIVATE ${CMAKE_SOURCE_DIR}/Util_Wrapper/Log_Wrapper/)