cmake_minimum_required(VERSION 3.10)
project("Module_5")

add_executable("Module_5" src/Module_5.cpp)

add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/CSC450_CT5_mod5.txt $<TARGET_FILE_DIR:${PROJECT_NAME}>/CSC450_CT5_mod5.txt
)