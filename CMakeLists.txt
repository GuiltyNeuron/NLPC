cmake_minimum_required (VERSION 3.5)

project("NLP_Plus_Plus")

# define source and test dir
SET(SRC_DIR "targets/src")
#SET(TEST_DIR "targets/test")


# Include cmake for standalone include
add_subdirectory(${SRC_DIR})
#enable_testing ()
#add_subdirectory(${TEST_DIR})
