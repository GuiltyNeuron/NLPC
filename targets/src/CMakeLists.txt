# set source class path
set (SRC_FILES_PATH "../../src")

set(Main ${SRC_FILES_PATH}/main.cpp)

add_executable(NlpCpp ${Main})
include_directories (NlpCpp ${OpenCV_INCLUDE_DIRS})
target_link_libraries (NlpCpp ${LIBRARIES})
